#ifndef IService_Included
#define IService_Included

#include <contracts/common/ilifecycle.hpp>

namespace contracts
{
	namespace services
	{
		class IService : public common::ILifecycle
		{
		public:
			virtual ~IService() {}

			virtual void init() = 0;
		};
	}
}

#endif
