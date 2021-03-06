#ifndef SerialPortEnumerator_Included
#define SerialPortEnumerator_Included

#include <threadable.hpp>
#include <serial/serial.h>
#include <thread>
#include <iostream>
#include <containers_utils.hpp>
#include <contracts/devices/idevice_enumerator.hpp>

namespace access_device
{
	class SerialPortEnumerator : public utils::Threadable
		                           , public contracts::devices::IDeviceEnumerator
	{
	public:
		bool connected(const std::string& device_name) const override {
			return utils::containers::contains<std::string>(devices_, device_name);
		}

		std::vector<std::string> devices() const override {
			return devices_;
		}

	protected:
		void run() override
		{
			while (active())
			{
				std::vector<serial::PortInfo> serials = serial::list_ports();
				serials_.clear();
				for (auto pi : serials)
					serials_.push_back(pi.port);
				update();
				//print();
				std::this_thread::sleep_for(delay_);

				if (cancelation_requested)
					break;
			}
		}

		void print()
		{
			std::cout << std::endl;
			for (auto device_name : serials_)
				std::cout << device_name << std::endl;
			std::cout << std::endl;
		}

	private:
		
		void update()
		{
			if (devices_.size() > 0)
			{

				auto predicate = [this](const std::string& device_name)	{
					return utils::containers::contains(serials_, device_name);
				};
				
			  devices_.erase(std::remove_if( devices_.begin(),devices_.end(), predicate)
					                           , devices_.end());				
			}

			for (auto device_name : serials_)
			{
				if (!utils::containers::contains(devices_, device_name))
					devices_.push_back(device_name);
			}			
		}
				
		std::vector<std::string> devices_;
		std::vector<std::string> serials_;

		std::chrono::milliseconds delay_ = std::chrono::milliseconds(1000);

	};
}

#endif