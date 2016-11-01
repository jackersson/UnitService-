#ifndef IUnitConiguration_Included
#define IUnitConiguration_Included

#include <data/irepository.hpp>

namespace contracts
{
	class IUnitConfiguration
	{
	public:
		virtual ~IUnitConfiguration() {}

		virtual const std::string& facial_service_address() const = 0;
		virtual const std::string& coordinator_service_address() const = 0;

		virtual uint16_t    unit_service_port() const = 0;

		virtual const std::string& service_uuid() const = 0;

		virtual const std::string& database_service_address() const = 0;
	};	
}

#endif