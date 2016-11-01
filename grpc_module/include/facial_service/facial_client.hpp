#ifndef FacialClient_INCLUDED
#define FacialClient_INCLUDED

#include <facial_service/client/facial_client_impl.hpp>
#include <services/service_address.hpp>

namespace grpc_services
{
	class FacialClient : public services_api::FacialClientImpl
	{
	public:
		explicit FacialClient(contracts::services::IServiceAddress& address)
		                    	: services_api::FacialClientImpl(address)
		{
		}

		void do_set_call_options(services_api::IAsyncCall* call) const override
		{
			//TODO think about smarter solution
			if ( call->identifier() 
				   == typeid(services_api::AsyncFaceProcessCall).name())
			{
				call->deadline = 2;
			}
		
		}

	private:
		FacialClient(const FacialClient&) = delete;
		FacialClient& operator=(const FacialClient&) = delete;
	};
}

#endif