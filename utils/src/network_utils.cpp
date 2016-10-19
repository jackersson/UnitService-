#include "network_utils.hpp"

#include <sstream>
#include <asio/io_service.hpp>
#include <asio/ip/tcp.hpp>
#include <asio/ip/host_name.hpp>
#include <iostream>
#include "platform_includes.hpp"
/*
#if defined(WIN32) || defined(UNDER_CE)
#   include <windows.h>
#   include <rpc.h>

#pragma comment( lib, "Rpcrt4.lib" )
#   if defined(UNDER_CE)
#       include <iphlpapi .h="">
#   endif
#elif defined(__APPLE__)
#   include <corefoundation corefoundation.h="">
#   include <iokit iokitlib.h="">
#   include </iokit><iokit network="" ioethernetinterface.h="">
#   include </iokit><iokit network="" ionetworkinterface.h="">
#   include </iokit><iokit network="" ioethernetcontroller.h="">
#elif defined(LINUX) || defined(linux)
#   include <string .h="">
#   include <net if.h="">
#   include <sys ioctl.h="">
#   include </sys><sys socket.h="">
#   include <arpa inet.h="">
#endif
*/
namespace utils
{
	namespace network
	{	
		std::string MACAddressUtility::get_local_ip()
		{			
			boost::asio::io_service io_service;
			boost::asio::ip::tcp::resolver resolver(io_service);
			const size_t max_ip_address_size = 16;
			auto h = boost::asio::ip::host_name();
			std::string target_ip = "127.0.0.1";
			std::for_each(resolver.resolve({ h, "" }), {},
				[&target_ip, max_ip_address_size](const auto& re) {
				std::string address = re.endpoint().address().to_string();
				if (address.size() <= max_ip_address_size)
					target_ip = address;
			});
		
			return target_ip;
		}
		

		long MACAddressUtility::get_mac_address(unsigned char * result)
		{
			// Fill result with zeroes
			memset(result, 0, 6);
			// Call appropriate function for each platform
#if defined(WIN32) || defined(UNDER_CE)
			return get_mac_address_msw(result);
#elif defined(__APPLE__)
			return GetMACAddressMAC(result);
#elif defined(LINUX) || defined(linux)
			return GetMACAddressLinux(result);
#endif
			// If platform is not supported then return error code
			return -1;
		}

		long MACAddressUtility::get_mac_address(std::string& result)
		{
			unsigned char data[6];
			auto error = get_mac_address(data);

			std::stringstream ss;
			for (auto dt : data)
				ss << std::hex << static_cast<int>(dt);
			result = ss.str();

			return error;
		}

#if defined(WIN32) || defined(UNDER_CE)

		inline long MACAddressUtility::get_mac_address_msw(unsigned char * result)
		{

#if defined(UNDER_CE)
			IP_ADAPTER_INFO AdapterInfo[16]; // Allocate information
			DWORD dwBufLen = sizeof(AdapterInfo); // Save memory size of buffer
			if (GetAdaptersInfo(AdapterInfo, &dwBufLen) == ERROR_SUCCESS)
			{
				memcpy(result, AdapterInfo->Address, 6);
			}
			else return -1;
#else
			UUID uuid;
			if (UuidCreateSequential(&uuid) == RPC_S_UUID_NO_ADDRESS) return -1;
			memcpy(result, (char*)(uuid.Data4 + 2), 6);
#endif
			return 0;
		}

#elif defined(__APPLE__)

		static kern_return_t FindEthernetInterfaces(io_iterator_t *matchingServices)
		{
			kern_return_t       kernResult;
			CFMutableDictionaryRef  matchingDict;
			CFMutableDictionaryRef  propertyMatchDict;

			matchingDict = IOServiceMatching(kIOEthernetInterfaceClass);

			if (NULL != matchingDict)
			{
				propertyMatchDict =
					CFDictionaryCreateMutable(kCFAllocatorDefault, 0,
						&kCFTypeDictionaryKeyCallBacks,
						&kCFTypeDictionaryValueCallBacks);

				if (NULL != propertyMatchDict)
				{
					CFDictionarySetValue(propertyMatchDict,
						CFSTR(kIOPrimaryInterface), kCFBooleanTrue);
					CFDictionarySetValue(matchingDict,
						CFSTR(kIOPropertyMatchKey), propertyMatchDict);
					CFRelease(propertyMatchDict);
				}
			}
			kernResult = IOServiceGetMatchingServices(kIOMasterPortDefault,
				matchingDict, matchingServices);
			return kernResult;
		}

		static kern_return_t GetMACAddress(io_iterator_t intfIterator,
			UInt8 *MACAddress, UInt8 bufferSize)
		{
			io_object_t     intfService;
			io_object_t     controllerService;
			kern_return_t   kernResult = KERN_FAILURE;

			if (bufferSize < kIOEthernetAddressSize) {
				return kernResult;
			}

			bzero(MACAddress, bufferSize);

			while (intfService = IOIteratorNext(intfIterator))
			{
				CFTypeRef   MACAddressAsCFData;

				// IONetworkControllers can't be found directly by the IOServiceGetMatchingServices call,
				// since they are hardware nubs and do not participate in driver matching. In other words,
				// registerService() is never called on them. So we've found the IONetworkInterface and will
				// get its parent controller by asking for it specifically.

				// IORegistryEntryGetParentEntry retains the returned object,
				// so release it when we're done with it.
				kernResult =
					IORegistryEntryGetParentEntry(intfService,
						kIOServicePlane,
						&controllerService);

				if (KERN_SUCCESS != kernResult) {
					printf("IORegistryEntryGetParentEntry returned 0x%08x\n", kernResult);
				}
				else {
					// Retrieve the MAC address property from the I/O Registry in the form of a CFData
					MACAddressAsCFData =
						IORegistryEntryCreateCFProperty(controllerService,
							CFSTR(kIOMACAddress),
							kCFAllocatorDefault,
							0);
					if (MACAddressAsCFData) {
						CFShow(MACAddressAsCFData); // for display purposes only; output goes to stderr

																				// Get the raw bytes of the MAC address from the CFData
						CFDataGetBytes((CFDataRef)MACAddressAsCFData,
							CFRangeMake(0, kIOEthernetAddressSize), MACAddress);
						CFRelease(MACAddressAsCFData);
					}

					// Done with the parent Ethernet controller object so we release it.
					(void)IOObjectRelease(controllerService);
				}

				// Done with the Ethernet interface object so we release it.
				(void)IOObjectRelease(intfService);
			}

			return kernResult;
		}

		long MACAddressUtility::GetMACAddressMAC(unsigned char * result)
		{
			io_iterator_t   intfIterator;
			kern_return_t   kernResult = KERN_FAILURE;
			do
			{
				kernResult = ::FindEthernetInterfaces(&intfIterator);
				if (KERN_SUCCESS != kernResult) break;
				kernResult = ::GetMACAddress(intfIterator, (UInt8*)result, 6);
			} while (false);
			(void)IOObjectRelease(intfIterator);
		}

#elif defined(LINUX) || defined(linux)

		long MACAddressUtility::GetMACAddressLinux(unsigned char * result)
		{
			struct ifreq ifr;
			struct ifreq *IFR;
			struct ifconf ifc;
			char buf[1024];
			int s, i;
			int ok = 0;

			s = socket(AF_INET, SOCK_DGRAM, 0);
			if (s == -1)
			{
				return -1;
			}

			ifc.ifc_len = sizeof(buf);
			ifc.ifc_buf = buf;
			ioctl(s, SIOCGIFCONF, &ifc);

			IFR = ifc.ifc_req;
			for (i = ifc.ifc_len / sizeof(struct ifreq); --i >= 0; IFR++)
			{
				strcpy(ifr.ifr_name, IFR->ifr_name);
				if (ioctl(s, SIOCGIFFLAGS, &ifr) == 0)
				{
					if (!(ifr.ifr_flags & IFF_LOOPBACK))
					{
						if (ioctl(s, SIOCGIFHWADDR, &ifr) == 0)
						{
							ok = 1;
							break;
						}
					}
				}
			}

			shutdown(s, SHUT_RDWR);
			if (ok)
			{
				bcopy(ifr.ifr_hwaddr.sa_data, result, 6);
			}
			else
			{
				return -1;
			}
			return 0;
		}
  #endif
		
		}


}