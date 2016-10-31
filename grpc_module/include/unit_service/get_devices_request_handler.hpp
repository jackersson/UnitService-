#ifndef GetDevicesRequestHandler__INCLUDED
#define GetDevicesRequestHandler__INCLUDED

#include <memory>
#include "request_handler.hpp"
#include <contracts/iunit_context.hpp>
#include <service_base.hpp>

namespace grpc_services
{
	namespace unit_service
	{

		class GetDevicesRequestHandler : public RequestHandler<services_api::AsyncUnitService>
		{
		public:
			GetDevicesRequestHandler(services_api::AsyncUnitService* service
				, grpc::ServerCompletionQueue* completion_queue
			  , contracts::IUnitContext* context)
				: RequestHandler<services_api::AsyncUnitService>(service, completion_queue )
				,	responder_(&server_context_)			
				, context_(context)
			{
				Proceed();
			}
		
			void CreateRequestHandler() override
			{
				new GetDevicesRequestHandler(service_, server_completion_queue_, context_);
			}

			void CreateRequest() override
			{			
				service_->RequestGetDevices(&server_context_, &request_
					, &responder_, server_completion_queue_
					, server_completion_queue_, this);			
			}

			void ProcessRequest() override;	

			static void Create(services_api::AsyncUnitService*            service
				                , grpc::ServerCompletionQueue* completion_queue
				                , contracts::IUnitContext*     context)
			{
				new GetDevicesRequestHandler(service, completion_queue, context);
			}

		private:		
			google::protobuf::Empty  request_;
			grpc::ServerAsyncResponseWriter<DataTypes::Devices>    responder_;
			contracts::IUnitContext* context_;

		};
		
	}
	
}
#endif