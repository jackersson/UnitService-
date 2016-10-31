#ifndef GetLocationStreamRequestHandler_Included
#define GetLocationStreamRequestHandler_Included

#include <memory>
#include <request_handler.hpp>
#include <contracts/iunit_context.hpp>
#include <service_base.hpp>

namespace grpc_services
{
	namespace unit_service
	{	
		class GetLocationStreamRequestHandler : public RequestHandler<services_api::AsyncUnitService>
		{
		public:
			GetLocationStreamRequestHandler(services_api::AsyncUnitService* service
				, grpc::ServerCompletionQueue* completion_queue
				, contracts::IUnitContext* context)
				: RequestHandler<services_api::AsyncUnitService>(service, completion_queue)
				, responder_(&server_context_)
				, context_(context)
			{
				Proceed();
			}

			void CreateRequestHandler() override
			{
				new GetLocationStreamRequestHandler(service_, server_completion_queue_, context_);
			}

			void CreateRequest() override
			{
				service_->RequestGetLocationStream(&server_context_, &request_
					, &responder_, server_completion_queue_
					, server_completion_queue_, this);
			}

			void ProcessRequest() override;	

			
			static void Create(services_api::AsyncUnitService*            service
				                , grpc::ServerCompletionQueue* completion_queue
				                , contracts::IUnitContext*     context)
			{
				new GetLocationStreamRequestHandler(service, completion_queue, context);
			}

		private:
			DataTypes::Location  request_;
			grpc::ServerAsyncWriter<DataTypes::FrameBytes> responder_;
			contracts::IUnitContext* context_;
		};
	}
}
#endif