// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: services/unit_service.proto
#ifndef GRPC_services_2funit_5fservice_2eproto__INCLUDED
#define GRPC_services_2funit_5fservice_2eproto__INCLUDED

#include "services/unit_service.pb.h"

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

class UnitService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status OpenDoor(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncOpenDoor(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncOpenDoorRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::DataTypes::FrameBytes>> GetLocationStream(::grpc::ClientContext* context, const ::DataTypes::Location& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::DataTypes::FrameBytes>>(GetLocationStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::DataTypes::FrameBytes>> AsyncGetLocationStream(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::DataTypes::FrameBytes>>(AsyncGetLocationStreamRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status GetDevices(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::DataTypes::Devices* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::Devices>> AsyncGetDevices(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::Devices>>(AsyncGetDevicesRaw(context, request, cq));
    }
    virtual ::grpc::Status UpdateLocation(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncUpdateLocation(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncUpdateLocationRaw(context, request, cq));
    }
    // on person registration      
    virtual ::grpc::Status GetCard(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::DataTypes::CardMsg* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::CardMsg>> AsyncGetCard(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::CardMsg>>(AsyncGetCardRaw(context, request, cq));
    }
    virtual ::grpc::Status CheckDevice(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::DataTypes::CheckMsg* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::CheckMsg>> AsyncCheckDevice(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::CheckMsg>>(AsyncCheckDeviceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::DataTypes::FrameBytes>> GetDeviceStream(::grpc::ClientContext* context, const ::DataTypes::Device& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::DataTypes::FrameBytes>>(GetDeviceStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::DataTypes::FrameBytes>> AsyncGetDeviceStream(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::DataTypes::FrameBytes>>(AsyncGetDeviceStreamRaw(context, request, cq, tag));
    }
    // on person registration & identification      
    virtual ::grpc::Status Enroll(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::DataTypes::Faces* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::Faces>> AsyncEnroll(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::Faces>>(AsyncEnrollRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncOpenDoorRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::DataTypes::FrameBytes>* GetLocationStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::DataTypes::FrameBytes>* AsyncGetLocationStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::Devices>* AsyncGetDevicesRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncUpdateLocationRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::CardMsg>* AsyncGetCardRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::CheckMsg>* AsyncCheckDeviceRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::DataTypes::FrameBytes>* GetDeviceStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::DataTypes::FrameBytes>* AsyncGetDeviceStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::DataTypes::Faces>* AsyncEnrollRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status OpenDoor(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncOpenDoor(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncOpenDoorRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::DataTypes::FrameBytes>> GetLocationStream(::grpc::ClientContext* context, const ::DataTypes::Location& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::DataTypes::FrameBytes>>(GetLocationStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::DataTypes::FrameBytes>> AsyncGetLocationStream(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::DataTypes::FrameBytes>>(AsyncGetLocationStreamRaw(context, request, cq, tag));
    }
    ::grpc::Status GetDevices(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::DataTypes::Devices* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::Devices>> AsyncGetDevices(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::Devices>>(AsyncGetDevicesRaw(context, request, cq));
    }
    ::grpc::Status UpdateLocation(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncUpdateLocation(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncUpdateLocationRaw(context, request, cq));
    }
    ::grpc::Status GetCard(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::DataTypes::CardMsg* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::CardMsg>> AsyncGetCard(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::CardMsg>>(AsyncGetCardRaw(context, request, cq));
    }
    ::grpc::Status CheckDevice(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::DataTypes::CheckMsg* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::CheckMsg>> AsyncCheckDevice(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::CheckMsg>>(AsyncCheckDeviceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::DataTypes::FrameBytes>> GetDeviceStream(::grpc::ClientContext* context, const ::DataTypes::Device& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::DataTypes::FrameBytes>>(GetDeviceStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::DataTypes::FrameBytes>> AsyncGetDeviceStream(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::DataTypes::FrameBytes>>(AsyncGetDeviceStreamRaw(context, request, cq, tag));
    }
    ::grpc::Status Enroll(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::DataTypes::Faces* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::Faces>> AsyncEnroll(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DataTypes::Faces>>(AsyncEnrollRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncOpenDoorRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::DataTypes::FrameBytes>* GetLocationStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::DataTypes::FrameBytes>* AsyncGetLocationStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::DataTypes::Devices>* AsyncGetDevicesRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncUpdateLocationRaw(::grpc::ClientContext* context, const ::DataTypes::Location& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::DataTypes::CardMsg>* AsyncGetCardRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::DataTypes::CheckMsg>* AsyncCheckDeviceRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::DataTypes::FrameBytes>* GetDeviceStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::DataTypes::FrameBytes>* AsyncGetDeviceStreamRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::DataTypes::Faces>* AsyncEnrollRaw(::grpc::ClientContext* context, const ::DataTypes::Device& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_OpenDoor_;
    const ::grpc::RpcMethod rpcmethod_GetLocationStream_;
    const ::grpc::RpcMethod rpcmethod_GetDevices_;
    const ::grpc::RpcMethod rpcmethod_UpdateLocation_;
    const ::grpc::RpcMethod rpcmethod_GetCard_;
    const ::grpc::RpcMethod rpcmethod_CheckDevice_;
    const ::grpc::RpcMethod rpcmethod_GetDeviceStream_;
    const ::grpc::RpcMethod rpcmethod_Enroll_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status OpenDoor(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::google::protobuf::Empty* response);
    virtual ::grpc::Status GetLocationStream(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::grpc::ServerWriter< ::DataTypes::FrameBytes>* writer);
    virtual ::grpc::Status GetDevices(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::DataTypes::Devices* response);
    virtual ::grpc::Status UpdateLocation(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::google::protobuf::Empty* response);
    // on person registration      
    virtual ::grpc::Status GetCard(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::CardMsg* response);
    virtual ::grpc::Status CheckDevice(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::CheckMsg* response);
    virtual ::grpc::Status GetDeviceStream(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::grpc::ServerWriter< ::DataTypes::FrameBytes>* writer);
    // on person registration & identification      
    virtual ::grpc::Status Enroll(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::Faces* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_OpenDoor : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_OpenDoor() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_OpenDoor() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OpenDoor(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOpenDoor(::grpc::ServerContext* context, ::DataTypes::Location* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetLocationStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetLocationStream() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetLocationStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocationStream(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::grpc::ServerWriter< ::DataTypes::FrameBytes>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLocationStream(::grpc::ServerContext* context, ::DataTypes::Location* request, ::grpc::ServerAsyncWriter< ::DataTypes::FrameBytes>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetDevices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetDevices() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetDevices() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDevices(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::DataTypes::Devices* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDevices(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::DataTypes::Devices>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateLocation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateLocation() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_UpdateLocation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateLocation(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateLocation(::grpc::ServerContext* context, ::DataTypes::Location* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetCard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetCard() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_GetCard() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCard(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::CardMsg* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetCard(::grpc::ServerContext* context, ::DataTypes::Device* request, ::grpc::ServerAsyncResponseWriter< ::DataTypes::CardMsg>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CheckDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CheckDevice() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_CheckDevice() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckDevice(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::CheckMsg* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCheckDevice(::grpc::ServerContext* context, ::DataTypes::Device* request, ::grpc::ServerAsyncResponseWriter< ::DataTypes::CheckMsg>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetDeviceStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetDeviceStream() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_GetDeviceStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDeviceStream(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::grpc::ServerWriter< ::DataTypes::FrameBytes>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDeviceStream(::grpc::ServerContext* context, ::DataTypes::Device* request, ::grpc::ServerAsyncWriter< ::DataTypes::FrameBytes>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(6, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Enroll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Enroll() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_Enroll() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Enroll(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::Faces* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestEnroll(::grpc::ServerContext* context, ::DataTypes::Device* request, ::grpc::ServerAsyncResponseWriter< ::DataTypes::Faces>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(7, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_OpenDoor<WithAsyncMethod_GetLocationStream<WithAsyncMethod_GetDevices<WithAsyncMethod_UpdateLocation<WithAsyncMethod_GetCard<WithAsyncMethod_CheckDevice<WithAsyncMethod_GetDeviceStream<WithAsyncMethod_Enroll<Service > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_OpenDoor : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_OpenDoor() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_OpenDoor() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OpenDoor(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetLocationStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetLocationStream() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetLocationStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocationStream(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::grpc::ServerWriter< ::DataTypes::FrameBytes>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetDevices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetDevices() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetDevices() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDevices(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::DataTypes::Devices* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateLocation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateLocation() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_UpdateLocation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateLocation(::grpc::ServerContext* context, const ::DataTypes::Location* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetCard : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetCard() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_GetCard() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCard(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::CardMsg* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CheckDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CheckDevice() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_CheckDevice() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CheckDevice(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::CheckMsg* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetDeviceStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetDeviceStream() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_GetDeviceStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDeviceStream(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::grpc::ServerWriter< ::DataTypes::FrameBytes>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Enroll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Enroll() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_Enroll() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Enroll(::grpc::ServerContext* context, const ::DataTypes::Device* request, ::DataTypes::Faces* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace Services


#endif  // GRPC_services_2funit_5fservice_2eproto__INCLUDED
