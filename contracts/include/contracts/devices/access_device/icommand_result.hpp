#ifndef ICommandResult_Included
#define ICommandResult_Included
#include <vector>
#include <memory>
#include "access_device_types.hpp"

namespace contracts
{
	namespace devices
	{
		namespace access_device {

			class ICommandResult
			{
			public:
				virtual ~ICommandResult() {}

				virtual access_device_module module() const = 0;
				virtual const std::vector<unsigned char>& data() const = 0;

				virtual std::string    to_string() const = 0;
				virtual const std::exception& exception() const = 0;

				virtual bool ok() const = 0;
				virtual bool empty() const = 0;
			};

			typedef std::shared_ptr<ICommandResult> ICommandResultPtr;

		}
	}
}

#endif
