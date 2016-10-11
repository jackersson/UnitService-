// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: services/facial_service.proto

#ifndef PROTOBUF_services_2ffacial_5fservice_2eproto__INCLUDED
#define PROTOBUF_services_2ffacial_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "datatypes/person.pb.h"
#include "datatypes/photo.pb.h"
#include "datatypes/data.pb.h"
#include "datatypes/group.pb.h"
#include "datatypes/biometrics.pb.h"
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)

namespace Services {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_services_2ffacial_5fservice_2eproto();
void protobuf_AssignDesc_services_2ffacial_5fservice_2eproto();
void protobuf_ShutdownFile_services_2ffacial_5fservice_2eproto();

class BiometricRequest;
class BiometricResponse;
class BiometricUpdate;

// ===================================================================

class BiometricRequest : public ::google::protobuf::Message {
 public:
  BiometricRequest();
  virtual ~BiometricRequest();

  BiometricRequest(const BiometricRequest& from);

  inline BiometricRequest& operator=(const BiometricRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BiometricRequest& default_instance();

  void Swap(BiometricRequest* other);

  // implements Message ----------------------------------------------

  inline BiometricRequest* New() const { return New(NULL); }

  BiometricRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BiometricRequest& from);
  void MergeFrom(const BiometricRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BiometricRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .DataTypes.Photo photo = 1;
  bool has_photo() const;
  void clear_photo();
  static const int kPhotoFieldNumber = 1;
  const ::DataTypes::Photo& photo() const;
  ::DataTypes::Photo* mutable_photo();
  ::DataTypes::Photo* release_photo();
  void set_allocated_photo(::DataTypes::Photo* photo);

  // optional .DataTypes.Key person = 2;
  bool has_person() const;
  void clear_person();
  static const int kPersonFieldNumber = 2;
  const ::DataTypes::Key& person() const;
  ::DataTypes::Key* mutable_person();
  ::DataTypes::Key* release_person();
  void set_allocated_person(::DataTypes::Key* person);

  // optional .DataTypes.Key group = 3;
  bool has_group() const;
  void clear_group();
  static const int kGroupFieldNumber = 3;
  const ::DataTypes::Key& group() const;
  ::DataTypes::Key* mutable_group();
  ::DataTypes::Key* release_group();
  void set_allocated_group(::DataTypes::Key* group);

  // optional .DataTypes.BioActionType action = 4;
  void clear_action();
  static const int kActionFieldNumber = 4;
  ::DataTypes::BioActionType action() const;
  void set_action(::DataTypes::BioActionType value);

  // optional .DataTypes.BiometricType type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::DataTypes::BiometricType type() const;
  void set_type(::DataTypes::BiometricType value);

  // @@protoc_insertion_point(class_scope:Services.BiometricRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::DataTypes::Photo* photo_;
  ::DataTypes::Key* person_;
  ::DataTypes::Key* group_;
  int action_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_services_2ffacial_5fservice_2eproto();
  friend void protobuf_AssignDesc_services_2ffacial_5fservice_2eproto();
  friend void protobuf_ShutdownFile_services_2ffacial_5fservice_2eproto();

  void InitAsDefaultInstance();
  static BiometricRequest* default_instance_;
};
// -------------------------------------------------------------------

class BiometricResponse : public ::google::protobuf::Message {
 public:
  BiometricResponse();
  virtual ~BiometricResponse();

  BiometricResponse(const BiometricResponse& from);

  inline BiometricResponse& operator=(const BiometricResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BiometricResponse& default_instance();

  void Swap(BiometricResponse* other);

  // implements Message ----------------------------------------------

  inline BiometricResponse* New() const { return New(NULL); }

  BiometricResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BiometricResponse& from);
  void MergeFrom(const BiometricResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BiometricResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .DataTypes.Photo photo = 1;
  bool has_photo() const;
  void clear_photo();
  static const int kPhotoFieldNumber = 1;
  const ::DataTypes::Photo& photo() const;
  ::DataTypes::Photo* mutable_photo();
  ::DataTypes::Photo* release_photo();
  void set_allocated_photo(::DataTypes::Photo* photo);

  // optional .DataTypes.Key person = 2;
  bool has_person() const;
  void clear_person();
  static const int kPersonFieldNumber = 2;
  const ::DataTypes::Key& person() const;
  ::DataTypes::Key* mutable_person();
  ::DataTypes::Key* release_person();
  void set_allocated_person(::DataTypes::Key* person);

  // optional .DataTypes.Faces faces = 3;
  bool has_faces() const;
  void clear_faces();
  static const int kFacesFieldNumber = 3;
  const ::DataTypes::Faces& faces() const;
  ::DataTypes::Faces* mutable_faces();
  ::DataTypes::Faces* release_faces();
  void set_allocated_faces(::DataTypes::Faces* faces);

  // optional bool success = 4;
  void clear_success();
  static const int kSuccessFieldNumber = 4;
  bool success() const;
  void set_success(bool value);

  // @@protoc_insertion_point(class_scope:Services.BiometricResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::DataTypes::Photo* photo_;
  ::DataTypes::Key* person_;
  ::DataTypes::Faces* faces_;
  bool success_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_services_2ffacial_5fservice_2eproto();
  friend void protobuf_AssignDesc_services_2ffacial_5fservice_2eproto();
  friend void protobuf_ShutdownFile_services_2ffacial_5fservice_2eproto();

  void InitAsDefaultInstance();
  static BiometricResponse* default_instance_;
};
// -------------------------------------------------------------------

class BiometricUpdate : public ::google::protobuf::Message {
 public:
  BiometricUpdate();
  virtual ~BiometricUpdate();

  BiometricUpdate(const BiometricUpdate& from);

  inline BiometricUpdate& operator=(const BiometricUpdate& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BiometricUpdate& default_instance();

  enum UpdateTypeCase {
    kPersonUpdates = 2,
    kGroupUpdates = 4,
    UPDATE_TYPE_NOT_SET = 0,
  };

  void Swap(BiometricUpdate* other);

  // implements Message ----------------------------------------------

  inline BiometricUpdate* New() const { return New(NULL); }

  BiometricUpdate* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BiometricUpdate& from);
  void MergeFrom(const BiometricUpdate& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BiometricUpdate* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .DataTypes.Person person_updates = 2;
  bool has_person_updates() const;
  void clear_person_updates();
  static const int kPersonUpdatesFieldNumber = 2;
  const ::DataTypes::Person& person_updates() const;
  ::DataTypes::Person* mutable_person_updates();
  ::DataTypes::Person* release_person_updates();
  void set_allocated_person_updates(::DataTypes::Person* person_updates);

  // optional .DataTypes.Group group_updates = 4;
  bool has_group_updates() const;
  void clear_group_updates();
  static const int kGroupUpdatesFieldNumber = 4;
  const ::DataTypes::Group& group_updates() const;
  ::DataTypes::Group* mutable_group_updates();
  ::DataTypes::Group* release_group_updates();
  void set_allocated_group_updates(::DataTypes::Group* group_updates);

  UpdateTypeCase update_type_case() const;
  // @@protoc_insertion_point(class_scope:Services.BiometricUpdate)
 private:
  inline void set_has_person_updates();
  inline void set_has_group_updates();

  inline bool has_update_type() const;
  void clear_update_type();
  inline void clear_has_update_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union UpdateTypeUnion {
    UpdateTypeUnion() {}
    ::DataTypes::Person* person_updates_;
    ::DataTypes::Group* group_updates_;
  } update_type_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_services_2ffacial_5fservice_2eproto();
  friend void protobuf_AssignDesc_services_2ffacial_5fservice_2eproto();
  friend void protobuf_ShutdownFile_services_2ffacial_5fservice_2eproto();

  void InitAsDefaultInstance();
  static BiometricUpdate* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BiometricRequest

// optional .DataTypes.Photo photo = 1;
inline bool BiometricRequest::has_photo() const {
  return !_is_default_instance_ && photo_ != NULL;
}
inline void BiometricRequest::clear_photo() {
  if (GetArenaNoVirtual() == NULL && photo_ != NULL) delete photo_;
  photo_ = NULL;
}
inline const ::DataTypes::Photo& BiometricRequest::photo() const {
  // @@protoc_insertion_point(field_get:Services.BiometricRequest.photo)
  return photo_ != NULL ? *photo_ : *default_instance_->photo_;
}
inline ::DataTypes::Photo* BiometricRequest::mutable_photo() {
  
  if (photo_ == NULL) {
    photo_ = new ::DataTypes::Photo;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricRequest.photo)
  return photo_;
}
inline ::DataTypes::Photo* BiometricRequest::release_photo() {
  // @@protoc_insertion_point(field_release:Services.BiometricRequest.photo)
  
  ::DataTypes::Photo* temp = photo_;
  photo_ = NULL;
  return temp;
}
inline void BiometricRequest::set_allocated_photo(::DataTypes::Photo* photo) {
  delete photo_;
  photo_ = photo;
  if (photo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricRequest.photo)
}

// optional .DataTypes.Key person = 2;
inline bool BiometricRequest::has_person() const {
  return !_is_default_instance_ && person_ != NULL;
}
inline void BiometricRequest::clear_person() {
  if (GetArenaNoVirtual() == NULL && person_ != NULL) delete person_;
  person_ = NULL;
}
inline const ::DataTypes::Key& BiometricRequest::person() const {
  // @@protoc_insertion_point(field_get:Services.BiometricRequest.person)
  return person_ != NULL ? *person_ : *default_instance_->person_;
}
inline ::DataTypes::Key* BiometricRequest::mutable_person() {
  
  if (person_ == NULL) {
    person_ = new ::DataTypes::Key;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricRequest.person)
  return person_;
}
inline ::DataTypes::Key* BiometricRequest::release_person() {
  // @@protoc_insertion_point(field_release:Services.BiometricRequest.person)
  
  ::DataTypes::Key* temp = person_;
  person_ = NULL;
  return temp;
}
inline void BiometricRequest::set_allocated_person(::DataTypes::Key* person) {
  delete person_;
  person_ = person;
  if (person) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricRequest.person)
}

// optional .DataTypes.Key group = 3;
inline bool BiometricRequest::has_group() const {
  return !_is_default_instance_ && group_ != NULL;
}
inline void BiometricRequest::clear_group() {
  if (GetArenaNoVirtual() == NULL && group_ != NULL) delete group_;
  group_ = NULL;
}
inline const ::DataTypes::Key& BiometricRequest::group() const {
  // @@protoc_insertion_point(field_get:Services.BiometricRequest.group)
  return group_ != NULL ? *group_ : *default_instance_->group_;
}
inline ::DataTypes::Key* BiometricRequest::mutable_group() {
  
  if (group_ == NULL) {
    group_ = new ::DataTypes::Key;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricRequest.group)
  return group_;
}
inline ::DataTypes::Key* BiometricRequest::release_group() {
  // @@protoc_insertion_point(field_release:Services.BiometricRequest.group)
  
  ::DataTypes::Key* temp = group_;
  group_ = NULL;
  return temp;
}
inline void BiometricRequest::set_allocated_group(::DataTypes::Key* group) {
  delete group_;
  group_ = group;
  if (group) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricRequest.group)
}

// optional .DataTypes.BioActionType action = 4;
inline void BiometricRequest::clear_action() {
  action_ = 0;
}
inline ::DataTypes::BioActionType BiometricRequest::action() const {
  // @@protoc_insertion_point(field_get:Services.BiometricRequest.action)
  return static_cast< ::DataTypes::BioActionType >(action_);
}
inline void BiometricRequest::set_action(::DataTypes::BioActionType value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:Services.BiometricRequest.action)
}

// optional .DataTypes.BiometricType type = 5;
inline void BiometricRequest::clear_type() {
  type_ = 0;
}
inline ::DataTypes::BiometricType BiometricRequest::type() const {
  // @@protoc_insertion_point(field_get:Services.BiometricRequest.type)
  return static_cast< ::DataTypes::BiometricType >(type_);
}
inline void BiometricRequest::set_type(::DataTypes::BiometricType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Services.BiometricRequest.type)
}

// -------------------------------------------------------------------

// BiometricResponse

// optional .DataTypes.Photo photo = 1;
inline bool BiometricResponse::has_photo() const {
  return !_is_default_instance_ && photo_ != NULL;
}
inline void BiometricResponse::clear_photo() {
  if (GetArenaNoVirtual() == NULL && photo_ != NULL) delete photo_;
  photo_ = NULL;
}
inline const ::DataTypes::Photo& BiometricResponse::photo() const {
  // @@protoc_insertion_point(field_get:Services.BiometricResponse.photo)
  return photo_ != NULL ? *photo_ : *default_instance_->photo_;
}
inline ::DataTypes::Photo* BiometricResponse::mutable_photo() {
  
  if (photo_ == NULL) {
    photo_ = new ::DataTypes::Photo;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricResponse.photo)
  return photo_;
}
inline ::DataTypes::Photo* BiometricResponse::release_photo() {
  // @@protoc_insertion_point(field_release:Services.BiometricResponse.photo)
  
  ::DataTypes::Photo* temp = photo_;
  photo_ = NULL;
  return temp;
}
inline void BiometricResponse::set_allocated_photo(::DataTypes::Photo* photo) {
  delete photo_;
  photo_ = photo;
  if (photo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricResponse.photo)
}

// optional .DataTypes.Key person = 2;
inline bool BiometricResponse::has_person() const {
  return !_is_default_instance_ && person_ != NULL;
}
inline void BiometricResponse::clear_person() {
  if (GetArenaNoVirtual() == NULL && person_ != NULL) delete person_;
  person_ = NULL;
}
inline const ::DataTypes::Key& BiometricResponse::person() const {
  // @@protoc_insertion_point(field_get:Services.BiometricResponse.person)
  return person_ != NULL ? *person_ : *default_instance_->person_;
}
inline ::DataTypes::Key* BiometricResponse::mutable_person() {
  
  if (person_ == NULL) {
    person_ = new ::DataTypes::Key;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricResponse.person)
  return person_;
}
inline ::DataTypes::Key* BiometricResponse::release_person() {
  // @@protoc_insertion_point(field_release:Services.BiometricResponse.person)
  
  ::DataTypes::Key* temp = person_;
  person_ = NULL;
  return temp;
}
inline void BiometricResponse::set_allocated_person(::DataTypes::Key* person) {
  delete person_;
  person_ = person;
  if (person) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricResponse.person)
}

// optional .DataTypes.Faces faces = 3;
inline bool BiometricResponse::has_faces() const {
  return !_is_default_instance_ && faces_ != NULL;
}
inline void BiometricResponse::clear_faces() {
  if (GetArenaNoVirtual() == NULL && faces_ != NULL) delete faces_;
  faces_ = NULL;
}
inline const ::DataTypes::Faces& BiometricResponse::faces() const {
  // @@protoc_insertion_point(field_get:Services.BiometricResponse.faces)
  return faces_ != NULL ? *faces_ : *default_instance_->faces_;
}
inline ::DataTypes::Faces* BiometricResponse::mutable_faces() {
  
  if (faces_ == NULL) {
    faces_ = new ::DataTypes::Faces;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricResponse.faces)
  return faces_;
}
inline ::DataTypes::Faces* BiometricResponse::release_faces() {
  // @@protoc_insertion_point(field_release:Services.BiometricResponse.faces)
  
  ::DataTypes::Faces* temp = faces_;
  faces_ = NULL;
  return temp;
}
inline void BiometricResponse::set_allocated_faces(::DataTypes::Faces* faces) {
  delete faces_;
  faces_ = faces;
  if (faces) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricResponse.faces)
}

// optional bool success = 4;
inline void BiometricResponse::clear_success() {
  success_ = false;
}
inline bool BiometricResponse::success() const {
  // @@protoc_insertion_point(field_get:Services.BiometricResponse.success)
  return success_;
}
inline void BiometricResponse::set_success(bool value) {
  
  success_ = value;
  // @@protoc_insertion_point(field_set:Services.BiometricResponse.success)
}

// -------------------------------------------------------------------

// BiometricUpdate

// optional .DataTypes.Person person_updates = 2;
inline bool BiometricUpdate::has_person_updates() const {
  return update_type_case() == kPersonUpdates;
}
inline void BiometricUpdate::set_has_person_updates() {
  _oneof_case_[0] = kPersonUpdates;
}
inline void BiometricUpdate::clear_person_updates() {
  if (has_person_updates()) {
    delete update_type_.person_updates_;
    clear_has_update_type();
  }
}
inline  const ::DataTypes::Person& BiometricUpdate::person_updates() const {
  // @@protoc_insertion_point(field_get:Services.BiometricUpdate.person_updates)
  return has_person_updates()
      ? *update_type_.person_updates_
      : ::DataTypes::Person::default_instance();
}
inline ::DataTypes::Person* BiometricUpdate::mutable_person_updates() {
  if (!has_person_updates()) {
    clear_update_type();
    set_has_person_updates();
    update_type_.person_updates_ = new ::DataTypes::Person;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricUpdate.person_updates)
  return update_type_.person_updates_;
}
inline ::DataTypes::Person* BiometricUpdate::release_person_updates() {
  // @@protoc_insertion_point(field_release:Services.BiometricUpdate.person_updates)
  if (has_person_updates()) {
    clear_has_update_type();
    ::DataTypes::Person* temp = update_type_.person_updates_;
    update_type_.person_updates_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void BiometricUpdate::set_allocated_person_updates(::DataTypes::Person* person_updates) {
  clear_update_type();
  if (person_updates) {
    set_has_person_updates();
    update_type_.person_updates_ = person_updates;
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricUpdate.person_updates)
}

// optional .DataTypes.Group group_updates = 4;
inline bool BiometricUpdate::has_group_updates() const {
  return update_type_case() == kGroupUpdates;
}
inline void BiometricUpdate::set_has_group_updates() {
  _oneof_case_[0] = kGroupUpdates;
}
inline void BiometricUpdate::clear_group_updates() {
  if (has_group_updates()) {
    delete update_type_.group_updates_;
    clear_has_update_type();
  }
}
inline  const ::DataTypes::Group& BiometricUpdate::group_updates() const {
  // @@protoc_insertion_point(field_get:Services.BiometricUpdate.group_updates)
  return has_group_updates()
      ? *update_type_.group_updates_
      : ::DataTypes::Group::default_instance();
}
inline ::DataTypes::Group* BiometricUpdate::mutable_group_updates() {
  if (!has_group_updates()) {
    clear_update_type();
    set_has_group_updates();
    update_type_.group_updates_ = new ::DataTypes::Group;
  }
  // @@protoc_insertion_point(field_mutable:Services.BiometricUpdate.group_updates)
  return update_type_.group_updates_;
}
inline ::DataTypes::Group* BiometricUpdate::release_group_updates() {
  // @@protoc_insertion_point(field_release:Services.BiometricUpdate.group_updates)
  if (has_group_updates()) {
    clear_has_update_type();
    ::DataTypes::Group* temp = update_type_.group_updates_;
    update_type_.group_updates_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void BiometricUpdate::set_allocated_group_updates(::DataTypes::Group* group_updates) {
  clear_update_type();
  if (group_updates) {
    set_has_group_updates();
    update_type_.group_updates_ = group_updates;
  }
  // @@protoc_insertion_point(field_set_allocated:Services.BiometricUpdate.group_updates)
}

inline bool BiometricUpdate::has_update_type() const {
  return update_type_case() != UPDATE_TYPE_NOT_SET;
}
inline void BiometricUpdate::clear_has_update_type() {
  _oneof_case_[0] = UPDATE_TYPE_NOT_SET;
}
inline BiometricUpdate::UpdateTypeCase BiometricUpdate::update_type_case() const {
  return BiometricUpdate::UpdateTypeCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Services

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_services_2ffacial_5fservice_2eproto__INCLUDED
