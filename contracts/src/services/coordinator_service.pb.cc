// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: services/coordinator_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "services/coordinator_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Services {

namespace {


}  // namespace


void protobuf_AssignDesc_services_2fcoordinator_5fservice_2eproto() {
  protobuf_AddDesc_services_2fcoordinator_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "services/coordinator_service.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_services_2fcoordinator_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_services_2fcoordinator_5fservice_2eproto() {
}

void protobuf_AddDesc_services_2fcoordinator_5fservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fempty_2eproto();
  ::DataTypes::protobuf_AddDesc_datatypes_2funit_2eproto();
  ::DataTypes::protobuf_AddDesc_datatypes_2fdata_2eproto();
  ::DataTypes::protobuf_AddDesc_datatypes_2fdevices_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"services/coordinator_service.proto\022\010Se"
    "rvices\032\033google/protobuf/empty.proto\032\024dat"
    "atypes/unit.proto\032\024datatypes/data.proto\032"
    "\027datatypes/devices.proto2\217\004\n\022Coordinator"
    "Service\022:\n\007Connect\022\025.DataTypes.ConnectMs"
    "g\032\026.google.protobuf.Empty\"\000\022B\n\tHeartbeat"
    "\022\033.DataTypes.HeartbeatMessage\032\026.google.p"
    "rotobuf.Empty\"\000\0226\n\010GetUnits\022\026.google.pro"
    "tobuf.Empty\032\020.DataTypes.Units\"\000\022A\n\tSubsc"
    "ribe\022\032.DataTypes.SubscriptionMsg\032\026.googl"
    "e.protobuf.Empty\"\000\022C\n\013Unsubscribe\022\032.Data"
    "Types.SubscriptionMsg\032\026.google.protobuf."
    "Empty\"\000\0229\n\003Get\022\027.DataTypes.MessageBytes\032"
    "\027.DataTypes.MessageBytes\"\000\022<\n\006Commit\022\027.D"
    "ataTypes.MessageBytes\032\027.DataTypes.Messag"
    "eBytes\"\000\022@\n\013PushUpdates\022\027.DataTypes.Devi"
    "ceUpdate\032\026.google.protobuf.Empty\"\000BV\n\007ex"
    ".grpcZEgithub.com/Enebra/ServiceCoordina"
    "tor/grpc/services/coordinatorservice\242\002\003R"
    "TGb\006proto3", 770);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "services/coordinator_service.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_services_2fcoordinator_5fservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_services_2fcoordinator_5fservice_2eproto {
  StaticDescriptorInitializer_services_2fcoordinator_5fservice_2eproto() {
    protobuf_AddDesc_services_2fcoordinator_5fservice_2eproto();
  }
} static_descriptor_initializer_services_2fcoordinator_5fservice_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace Services

// @@protoc_insertion_point(global_scope)
