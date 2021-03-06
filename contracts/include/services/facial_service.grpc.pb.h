// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: services/facial_service.proto
#ifndef GRPC_services_2ffacial_5fservice_2eproto__INCLUDED
#define GRPC_services_2ffacial_5fservice_2eproto__INCLUDED

#include "services/facial_service.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace Services {

class BiometricFacialService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Process(::grpc::ClientContext* context, const ::Services::BiometricRequest& request, ::Services::BiometricResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Services::BiometricResponse>> AsyncProcess(::grpc::ClientContext* context, const ::Services::BiometricRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Services::BiometricResponse>>(AsyncProcessRaw(context, request, cq));
    }
    virtual ::grpc::Status Update(::grpc::ClientContext* context, const ::Services::BiometricUpdate& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncUpdate(::grpc::ClientContext* context, const ::Services::BiometricUpdate& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncUpdateRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Services::BiometricResponse>* AsyncProcessRaw(::grpc::ClientContext* context, const ::Services::BiometricRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncUpdateRaw(::grpc::ClientContext* context, const ::Services::BiometricUpdate& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Process(::grpc::ClientContext* context, const ::Services::BiometricRequest& request, ::Services::BiometricResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Services::BiometricResponse>> AsyncProcess(::grpc::ClientContext* context, const ::Services::BiometricRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Services::BiometricResponse>>(AsyncProcessRaw(context, request, cq));
    }
    ::grpc::Status Update(::grpc::ClientContext* context, const ::Services::BiometricUpdate& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncUpdate(::grpc::ClientContext* context, const ::Services::BiometricUpdate& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncUpdateRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::Services::BiometricResponse>* AsyncProcessRaw(::grpc::ClientContext* context, const ::Services::BiometricRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncUpdateRaw(::grpc::ClientContext* context, const ::Services::BiometricUpdate& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_Process_;
    const ::grpc::RpcMethod rpcmethod_Update_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Process(::grpc::ServerContext* context, const ::Services::BiometricRequest* request, ::Services::BiometricResponse* response);
    virtual ::grpc::Status Update(::grpc::ServerContext* context, const ::Services::BiometricUpdate* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Process() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Process() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Process(::grpc::ServerContext* context, const ::Services::BiometricRequest* request, ::Services::BiometricResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestProcess(::grpc::ServerContext* context, ::Services::BiometricRequest* request, ::grpc::ServerAsyncResponseWriter< ::Services::BiometricResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Update : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Update() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Update() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Update(::grpc::ServerContext* context, const ::Services::BiometricUpdate* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdate(::grpc::ServerContext* context, ::Services::BiometricUpdate* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Process<WithAsyncMethod_Update<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Process : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Process() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Process() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Process(::grpc::ServerContext* context, const ::Services::BiometricRequest* request, ::Services::BiometricResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Update : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Update() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Update() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Update(::grpc::ServerContext* context, const ::Services::BiometricUpdate* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace Services


#endif  // GRPC_services_2ffacial_5fservice_2eproto__INCLUDED
