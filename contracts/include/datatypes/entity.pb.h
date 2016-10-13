// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: datatypes/entity.proto

#ifndef PROTOBUF_datatypes_2fentity_2eproto__INCLUDED
#define PROTOBUF_datatypes_2fentity_2eproto__INCLUDED

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
#include "datatypes/card.pb.h"
#include "datatypes/photo.pb.h"
#include "datatypes/location.pb.h"
#include "datatypes/visit_record.pb.h"
#include "datatypes/group.pb.h"
// @@protoc_insertion_point(includes)

namespace DataTypes {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_datatypes_2fentity_2eproto();
void protobuf_AssignDesc_datatypes_2fentity_2eproto();
void protobuf_ShutdownFile_datatypes_2fentity_2eproto();

class Entities;
class Entity;

// ===================================================================

class Entity : public ::google::protobuf::Message {
 public:
  Entity();
  virtual ~Entity();

  Entity(const Entity& from);

  inline Entity& operator=(const Entity& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Entity& default_instance();

  enum ValueTypeCase {
    kCard = 1,
    kPerson = 2,
    kVisitRecord = 3,
    kLocation = 4,
    kPhoto = 5,
    kGroup = 6,
    VALUE_TYPE_NOT_SET = 0,
  };

  void Swap(Entity* other);

  // implements Message ----------------------------------------------

  inline Entity* New() const { return New(NULL); }

  Entity* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Entity& from);
  void MergeFrom(const Entity& from);
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
  void InternalSwap(Entity* other);
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

  // optional .DataTypes.Card card = 1;
  bool has_card() const;
  void clear_card();
  static const int kCardFieldNumber = 1;
  const ::DataTypes::Card& card() const;
  ::DataTypes::Card* mutable_card();
  ::DataTypes::Card* release_card();
  void set_allocated_card(::DataTypes::Card* card);

  // optional .DataTypes.Person person = 2;
  bool has_person() const;
  void clear_person();
  static const int kPersonFieldNumber = 2;
  const ::DataTypes::Person& person() const;
  ::DataTypes::Person* mutable_person();
  ::DataTypes::Person* release_person();
  void set_allocated_person(::DataTypes::Person* person);

  // optional .DataTypes.VisitRecord visit_record = 3;
  bool has_visit_record() const;
  void clear_visit_record();
  static const int kVisitRecordFieldNumber = 3;
  const ::DataTypes::VisitRecord& visit_record() const;
  ::DataTypes::VisitRecord* mutable_visit_record();
  ::DataTypes::VisitRecord* release_visit_record();
  void set_allocated_visit_record(::DataTypes::VisitRecord* visit_record);

  // optional .DataTypes.Location location = 4;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 4;
  const ::DataTypes::Location& location() const;
  ::DataTypes::Location* mutable_location();
  ::DataTypes::Location* release_location();
  void set_allocated_location(::DataTypes::Location* location);

  // optional .DataTypes.Photo photo = 5;
  bool has_photo() const;
  void clear_photo();
  static const int kPhotoFieldNumber = 5;
  const ::DataTypes::Photo& photo() const;
  ::DataTypes::Photo* mutable_photo();
  ::DataTypes::Photo* release_photo();
  void set_allocated_photo(::DataTypes::Photo* photo);

  // optional .DataTypes.Group group = 6;
  bool has_group() const;
  void clear_group();
  static const int kGroupFieldNumber = 6;
  const ::DataTypes::Group& group() const;
  ::DataTypes::Group* mutable_group();
  ::DataTypes::Group* release_group();
  void set_allocated_group(::DataTypes::Group* group);

  ValueTypeCase value_type_case() const;
  // @@protoc_insertion_point(class_scope:DataTypes.Entity)
 private:
  inline void set_has_card();
  inline void set_has_person();
  inline void set_has_visit_record();
  inline void set_has_location();
  inline void set_has_photo();
  inline void set_has_group();

  inline bool has_value_type() const;
  void clear_value_type();
  inline void clear_has_value_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union ValueTypeUnion {
    ValueTypeUnion() {}
    ::DataTypes::Card* card_;
    ::DataTypes::Person* person_;
    ::DataTypes::VisitRecord* visit_record_;
    ::DataTypes::Location* location_;
    ::DataTypes::Photo* photo_;
    ::DataTypes::Group* group_;
  } value_type_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_datatypes_2fentity_2eproto();
  friend void protobuf_AssignDesc_datatypes_2fentity_2eproto();
  friend void protobuf_ShutdownFile_datatypes_2fentity_2eproto();

  void InitAsDefaultInstance();
  static Entity* default_instance_;
};
// -------------------------------------------------------------------

class Entities : public ::google::protobuf::Message {
 public:
  Entities();
  virtual ~Entities();

  Entities(const Entities& from);

  inline Entities& operator=(const Entities& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Entities& default_instance();

  void Swap(Entities* other);

  // implements Message ----------------------------------------------

  inline Entities* New() const { return New(NULL); }

  Entities* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Entities& from);
  void MergeFrom(const Entities& from);
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
  void InternalSwap(Entities* other);
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

  // repeated .DataTypes.Entity items = 1;
  int items_size() const;
  void clear_items();
  static const int kItemsFieldNumber = 1;
  const ::DataTypes::Entity& items(int index) const;
  ::DataTypes::Entity* mutable_items(int index);
  ::DataTypes::Entity* add_items();
  ::google::protobuf::RepeatedPtrField< ::DataTypes::Entity >*
      mutable_items();
  const ::google::protobuf::RepeatedPtrField< ::DataTypes::Entity >&
      items() const;

  // @@protoc_insertion_point(class_scope:DataTypes.Entities)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::DataTypes::Entity > items_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_datatypes_2fentity_2eproto();
  friend void protobuf_AssignDesc_datatypes_2fentity_2eproto();
  friend void protobuf_ShutdownFile_datatypes_2fentity_2eproto();

  void InitAsDefaultInstance();
  static Entities* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Entity

// optional .DataTypes.Card card = 1;
inline bool Entity::has_card() const {
  return value_type_case() == kCard;
}
inline void Entity::set_has_card() {
  _oneof_case_[0] = kCard;
}
inline void Entity::clear_card() {
  if (has_card()) {
    delete value_type_.card_;
    clear_has_value_type();
  }
}
inline  const ::DataTypes::Card& Entity::card() const {
  // @@protoc_insertion_point(field_get:DataTypes.Entity.card)
  return has_card()
      ? *value_type_.card_
      : ::DataTypes::Card::default_instance();
}
inline ::DataTypes::Card* Entity::mutable_card() {
  if (!has_card()) {
    clear_value_type();
    set_has_card();
    value_type_.card_ = new ::DataTypes::Card;
  }
  // @@protoc_insertion_point(field_mutable:DataTypes.Entity.card)
  return value_type_.card_;
}
inline ::DataTypes::Card* Entity::release_card() {
  // @@protoc_insertion_point(field_release:DataTypes.Entity.card)
  if (has_card()) {
    clear_has_value_type();
    ::DataTypes::Card* temp = value_type_.card_;
    value_type_.card_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Entity::set_allocated_card(::DataTypes::Card* card) {
  clear_value_type();
  if (card) {
    set_has_card();
    value_type_.card_ = card;
  }
  // @@protoc_insertion_point(field_set_allocated:DataTypes.Entity.card)
}

// optional .DataTypes.Person person = 2;
inline bool Entity::has_person() const {
  return value_type_case() == kPerson;
}
inline void Entity::set_has_person() {
  _oneof_case_[0] = kPerson;
}
inline void Entity::clear_person() {
  if (has_person()) {
    delete value_type_.person_;
    clear_has_value_type();
  }
}
inline  const ::DataTypes::Person& Entity::person() const {
  // @@protoc_insertion_point(field_get:DataTypes.Entity.person)
  return has_person()
      ? *value_type_.person_
      : ::DataTypes::Person::default_instance();
}
inline ::DataTypes::Person* Entity::mutable_person() {
  if (!has_person()) {
    clear_value_type();
    set_has_person();
    value_type_.person_ = new ::DataTypes::Person;
  }
  // @@protoc_insertion_point(field_mutable:DataTypes.Entity.person)
  return value_type_.person_;
}
inline ::DataTypes::Person* Entity::release_person() {
  // @@protoc_insertion_point(field_release:DataTypes.Entity.person)
  if (has_person()) {
    clear_has_value_type();
    ::DataTypes::Person* temp = value_type_.person_;
    value_type_.person_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Entity::set_allocated_person(::DataTypes::Person* person) {
  clear_value_type();
  if (person) {
    set_has_person();
    value_type_.person_ = person;
  }
  // @@protoc_insertion_point(field_set_allocated:DataTypes.Entity.person)
}

// optional .DataTypes.VisitRecord visit_record = 3;
inline bool Entity::has_visit_record() const {
  return value_type_case() == kVisitRecord;
}
inline void Entity::set_has_visit_record() {
  _oneof_case_[0] = kVisitRecord;
}
inline void Entity::clear_visit_record() {
  if (has_visit_record()) {
    delete value_type_.visit_record_;
    clear_has_value_type();
  }
}
inline  const ::DataTypes::VisitRecord& Entity::visit_record() const {
  // @@protoc_insertion_point(field_get:DataTypes.Entity.visit_record)
  return has_visit_record()
      ? *value_type_.visit_record_
      : ::DataTypes::VisitRecord::default_instance();
}
inline ::DataTypes::VisitRecord* Entity::mutable_visit_record() {
  if (!has_visit_record()) {
    clear_value_type();
    set_has_visit_record();
    value_type_.visit_record_ = new ::DataTypes::VisitRecord;
  }
  // @@protoc_insertion_point(field_mutable:DataTypes.Entity.visit_record)
  return value_type_.visit_record_;
}
inline ::DataTypes::VisitRecord* Entity::release_visit_record() {
  // @@protoc_insertion_point(field_release:DataTypes.Entity.visit_record)
  if (has_visit_record()) {
    clear_has_value_type();
    ::DataTypes::VisitRecord* temp = value_type_.visit_record_;
    value_type_.visit_record_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Entity::set_allocated_visit_record(::DataTypes::VisitRecord* visit_record) {
  clear_value_type();
  if (visit_record) {
    set_has_visit_record();
    value_type_.visit_record_ = visit_record;
  }
  // @@protoc_insertion_point(field_set_allocated:DataTypes.Entity.visit_record)
}

// optional .DataTypes.Location location = 4;
inline bool Entity::has_location() const {
  return value_type_case() == kLocation;
}
inline void Entity::set_has_location() {
  _oneof_case_[0] = kLocation;
}
inline void Entity::clear_location() {
  if (has_location()) {
    delete value_type_.location_;
    clear_has_value_type();
  }
}
inline  const ::DataTypes::Location& Entity::location() const {
  // @@protoc_insertion_point(field_get:DataTypes.Entity.location)
  return has_location()
      ? *value_type_.location_
      : ::DataTypes::Location::default_instance();
}
inline ::DataTypes::Location* Entity::mutable_location() {
  if (!has_location()) {
    clear_value_type();
    set_has_location();
    value_type_.location_ = new ::DataTypes::Location;
  }
  // @@protoc_insertion_point(field_mutable:DataTypes.Entity.location)
  return value_type_.location_;
}
inline ::DataTypes::Location* Entity::release_location() {
  // @@protoc_insertion_point(field_release:DataTypes.Entity.location)
  if (has_location()) {
    clear_has_value_type();
    ::DataTypes::Location* temp = value_type_.location_;
    value_type_.location_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Entity::set_allocated_location(::DataTypes::Location* location) {
  clear_value_type();
  if (location) {
    set_has_location();
    value_type_.location_ = location;
  }
  // @@protoc_insertion_point(field_set_allocated:DataTypes.Entity.location)
}

// optional .DataTypes.Photo photo = 5;
inline bool Entity::has_photo() const {
  return value_type_case() == kPhoto;
}
inline void Entity::set_has_photo() {
  _oneof_case_[0] = kPhoto;
}
inline void Entity::clear_photo() {
  if (has_photo()) {
    delete value_type_.photo_;
    clear_has_value_type();
  }
}
inline  const ::DataTypes::Photo& Entity::photo() const {
  // @@protoc_insertion_point(field_get:DataTypes.Entity.photo)
  return has_photo()
      ? *value_type_.photo_
      : ::DataTypes::Photo::default_instance();
}
inline ::DataTypes::Photo* Entity::mutable_photo() {
  if (!has_photo()) {
    clear_value_type();
    set_has_photo();
    value_type_.photo_ = new ::DataTypes::Photo;
  }
  // @@protoc_insertion_point(field_mutable:DataTypes.Entity.photo)
  return value_type_.photo_;
}
inline ::DataTypes::Photo* Entity::release_photo() {
  // @@protoc_insertion_point(field_release:DataTypes.Entity.photo)
  if (has_photo()) {
    clear_has_value_type();
    ::DataTypes::Photo* temp = value_type_.photo_;
    value_type_.photo_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Entity::set_allocated_photo(::DataTypes::Photo* photo) {
  clear_value_type();
  if (photo) {
    set_has_photo();
    value_type_.photo_ = photo;
  }
  // @@protoc_insertion_point(field_set_allocated:DataTypes.Entity.photo)
}

// optional .DataTypes.Group group = 6;
inline bool Entity::has_group() const {
  return value_type_case() == kGroup;
}
inline void Entity::set_has_group() {
  _oneof_case_[0] = kGroup;
}
inline void Entity::clear_group() {
  if (has_group()) {
    delete value_type_.group_;
    clear_has_value_type();
  }
}
inline  const ::DataTypes::Group& Entity::group() const {
  // @@protoc_insertion_point(field_get:DataTypes.Entity.group)
  return has_group()
      ? *value_type_.group_
      : ::DataTypes::Group::default_instance();
}
inline ::DataTypes::Group* Entity::mutable_group() {
  if (!has_group()) {
    clear_value_type();
    set_has_group();
    value_type_.group_ = new ::DataTypes::Group;
  }
  // @@protoc_insertion_point(field_mutable:DataTypes.Entity.group)
  return value_type_.group_;
}
inline ::DataTypes::Group* Entity::release_group() {
  // @@protoc_insertion_point(field_release:DataTypes.Entity.group)
  if (has_group()) {
    clear_has_value_type();
    ::DataTypes::Group* temp = value_type_.group_;
    value_type_.group_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Entity::set_allocated_group(::DataTypes::Group* group) {
  clear_value_type();
  if (group) {
    set_has_group();
    value_type_.group_ = group;
  }
  // @@protoc_insertion_point(field_set_allocated:DataTypes.Entity.group)
}

inline bool Entity::has_value_type() const {
  return value_type_case() != VALUE_TYPE_NOT_SET;
}
inline void Entity::clear_has_value_type() {
  _oneof_case_[0] = VALUE_TYPE_NOT_SET;
}
inline Entity::ValueTypeCase Entity::value_type_case() const {
  return Entity::ValueTypeCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Entities

// repeated .DataTypes.Entity items = 1;
inline int Entities::items_size() const {
  return items_.size();
}
inline void Entities::clear_items() {
  items_.Clear();
}
inline const ::DataTypes::Entity& Entities::items(int index) const {
  // @@protoc_insertion_point(field_get:DataTypes.Entities.items)
  return items_.Get(index);
}
inline ::DataTypes::Entity* Entities::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:DataTypes.Entities.items)
  return items_.Mutable(index);
}
inline ::DataTypes::Entity* Entities::add_items() {
  // @@protoc_insertion_point(field_add:DataTypes.Entities.items)
  return items_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::DataTypes::Entity >*
Entities::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:DataTypes.Entities.items)
  return &items_;
}
inline const ::google::protobuf::RepeatedPtrField< ::DataTypes::Entity >&
Entities::items() const {
  // @@protoc_insertion_point(field_list:DataTypes.Entities.items)
  return items_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace DataTypes

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_datatypes_2fentity_2eproto__INCLUDED
