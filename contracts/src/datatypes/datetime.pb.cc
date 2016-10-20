// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: datatypes/datetime.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "datatypes/datetime.pb.h"

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

namespace DataTypes {

namespace {

const ::google::protobuf::Descriptor* DateTime_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DateTime_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_datatypes_2fdatetime_2eproto() {
  protobuf_AddDesc_datatypes_2fdatetime_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "datatypes/datetime.proto");
  GOOGLE_CHECK(file != NULL);
  DateTime_descriptor_ = file->message_type(0);
  static const int DateTime_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, year_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, month_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, day_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, hours_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, minutes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, seconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, miliseconds_),
  };
  DateTime_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DateTime_descriptor_,
      DateTime::default_instance_,
      DateTime_offsets_,
      -1,
      -1,
      -1,
      sizeof(DateTime),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DateTime, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_datatypes_2fdatetime_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DateTime_descriptor_, &DateTime::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_datatypes_2fdatetime_2eproto() {
  delete DateTime::default_instance_;
  delete DateTime_reflection_;
}

void protobuf_AddDesc_datatypes_2fdatetime_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030datatypes/datetime.proto\022\tDataTypes\"z\n"
    "\010DateTime\022\014\n\004year\030\001 \001(\005\022\r\n\005month\030\002 \001(\005\022\013"
    "\n\003day\030\003 \001(\005\022\r\n\005hours\030\004 \001(\005\022\017\n\007minutes\030\005 "
    "\001(\005\022\017\n\007seconds\030\006 \001(\005\022\023\n\013miliseconds\030\007 \001("
    "\005BM\n\007ex.grpcZ<github.com/Enebra/ServiceC"
    "oordinator/grpc/datatypes/datetime\242\002\003RTG"
    "b\006proto3", 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "datatypes/datetime.proto", &protobuf_RegisterTypes);
  DateTime::default_instance_ = new DateTime();
  DateTime::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_datatypes_2fdatetime_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_datatypes_2fdatetime_2eproto {
  StaticDescriptorInitializer_datatypes_2fdatetime_2eproto() {
    protobuf_AddDesc_datatypes_2fdatetime_2eproto();
  }
} static_descriptor_initializer_datatypes_2fdatetime_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DateTime::kYearFieldNumber;
const int DateTime::kMonthFieldNumber;
const int DateTime::kDayFieldNumber;
const int DateTime::kHoursFieldNumber;
const int DateTime::kMinutesFieldNumber;
const int DateTime::kSecondsFieldNumber;
const int DateTime::kMilisecondsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DateTime::DateTime()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DataTypes.DateTime)
}

void DateTime::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DateTime::DateTime(const DateTime& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:DataTypes.DateTime)
}

void DateTime::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  year_ = 0;
  month_ = 0;
  day_ = 0;
  hours_ = 0;
  minutes_ = 0;
  seconds_ = 0;
  miliseconds_ = 0;
}

DateTime::~DateTime() {
  // @@protoc_insertion_point(destructor:DataTypes.DateTime)
  SharedDtor();
}

void DateTime::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DateTime::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DateTime::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DateTime_descriptor_;
}

const DateTime& DateTime::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_datatypes_2fdatetime_2eproto();
  return *default_instance_;
}

DateTime* DateTime::default_instance_ = NULL;

DateTime* DateTime::New(::google::protobuf::Arena* arena) const {
  DateTime* n = new DateTime;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DateTime::Clear() {
// @@protoc_insertion_point(message_clear_start:DataTypes.DateTime)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DateTime, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DateTime*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(year_, miliseconds_);

#undef ZR_HELPER_
#undef ZR_

}

bool DateTime::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DataTypes.DateTime)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 year = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &year_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_month;
        break;
      }

      // optional int32 month = 2;
      case 2: {
        if (tag == 16) {
         parse_month:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &month_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_day;
        break;
      }

      // optional int32 day = 3;
      case 3: {
        if (tag == 24) {
         parse_day:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &day_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_hours;
        break;
      }

      // optional int32 hours = 4;
      case 4: {
        if (tag == 32) {
         parse_hours:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hours_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_minutes;
        break;
      }

      // optional int32 minutes = 5;
      case 5: {
        if (tag == 40) {
         parse_minutes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &minutes_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_seconds;
        break;
      }

      // optional int32 seconds = 6;
      case 6: {
        if (tag == 48) {
         parse_seconds:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &seconds_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_miliseconds;
        break;
      }

      // optional int32 miliseconds = 7;
      case 7: {
        if (tag == 56) {
         parse_miliseconds:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &miliseconds_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:DataTypes.DateTime)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DataTypes.DateTime)
  return false;
#undef DO_
}

void DateTime::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DataTypes.DateTime)
  // optional int32 year = 1;
  if (this->year() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->year(), output);
  }

  // optional int32 month = 2;
  if (this->month() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->month(), output);
  }

  // optional int32 day = 3;
  if (this->day() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->day(), output);
  }

  // optional int32 hours = 4;
  if (this->hours() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->hours(), output);
  }

  // optional int32 minutes = 5;
  if (this->minutes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->minutes(), output);
  }

  // optional int32 seconds = 6;
  if (this->seconds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->seconds(), output);
  }

  // optional int32 miliseconds = 7;
  if (this->miliseconds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->miliseconds(), output);
  }

  // @@protoc_insertion_point(serialize_end:DataTypes.DateTime)
}

::google::protobuf::uint8* DateTime::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:DataTypes.DateTime)
  // optional int32 year = 1;
  if (this->year() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->year(), target);
  }

  // optional int32 month = 2;
  if (this->month() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->month(), target);
  }

  // optional int32 day = 3;
  if (this->day() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->day(), target);
  }

  // optional int32 hours = 4;
  if (this->hours() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->hours(), target);
  }

  // optional int32 minutes = 5;
  if (this->minutes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->minutes(), target);
  }

  // optional int32 seconds = 6;
  if (this->seconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->seconds(), target);
  }

  // optional int32 miliseconds = 7;
  if (this->miliseconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->miliseconds(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:DataTypes.DateTime)
  return target;
}

int DateTime::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:DataTypes.DateTime)
  int total_size = 0;

  // optional int32 year = 1;
  if (this->year() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->year());
  }

  // optional int32 month = 2;
  if (this->month() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->month());
  }

  // optional int32 day = 3;
  if (this->day() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->day());
  }

  // optional int32 hours = 4;
  if (this->hours() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hours());
  }

  // optional int32 minutes = 5;
  if (this->minutes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->minutes());
  }

  // optional int32 seconds = 6;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->seconds());
  }

  // optional int32 miliseconds = 7;
  if (this->miliseconds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->miliseconds());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DateTime::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DataTypes.DateTime)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const DateTime* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DateTime>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DataTypes.DateTime)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DataTypes.DateTime)
    MergeFrom(*source);
  }
}

void DateTime::MergeFrom(const DateTime& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DataTypes.DateTime)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.year() != 0) {
    set_year(from.year());
  }
  if (from.month() != 0) {
    set_month(from.month());
  }
  if (from.day() != 0) {
    set_day(from.day());
  }
  if (from.hours() != 0) {
    set_hours(from.hours());
  }
  if (from.minutes() != 0) {
    set_minutes(from.minutes());
  }
  if (from.seconds() != 0) {
    set_seconds(from.seconds());
  }
  if (from.miliseconds() != 0) {
    set_miliseconds(from.miliseconds());
  }
}

void DateTime::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DataTypes.DateTime)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DateTime::CopyFrom(const DateTime& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DataTypes.DateTime)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DateTime::IsInitialized() const {

  return true;
}

void DateTime::Swap(DateTime* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DateTime::InternalSwap(DateTime* other) {
  std::swap(year_, other->year_);
  std::swap(month_, other->month_);
  std::swap(day_, other->day_);
  std::swap(hours_, other->hours_);
  std::swap(minutes_, other->minutes_);
  std::swap(seconds_, other->seconds_);
  std::swap(miliseconds_, other->miliseconds_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DateTime::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DateTime_descriptor_;
  metadata.reflection = DateTime_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DateTime

// optional int32 year = 1;
void DateTime::clear_year() {
  year_ = 0;
}
 ::google::protobuf::int32 DateTime::year() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.year)
  return year_;
}
 void DateTime::set_year(::google::protobuf::int32 value) {
  
  year_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.year)
}

// optional int32 month = 2;
void DateTime::clear_month() {
  month_ = 0;
}
 ::google::protobuf::int32 DateTime::month() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.month)
  return month_;
}
 void DateTime::set_month(::google::protobuf::int32 value) {
  
  month_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.month)
}

// optional int32 day = 3;
void DateTime::clear_day() {
  day_ = 0;
}
 ::google::protobuf::int32 DateTime::day() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.day)
  return day_;
}
 void DateTime::set_day(::google::protobuf::int32 value) {
  
  day_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.day)
}

// optional int32 hours = 4;
void DateTime::clear_hours() {
  hours_ = 0;
}
 ::google::protobuf::int32 DateTime::hours() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.hours)
  return hours_;
}
 void DateTime::set_hours(::google::protobuf::int32 value) {
  
  hours_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.hours)
}

// optional int32 minutes = 5;
void DateTime::clear_minutes() {
  minutes_ = 0;
}
 ::google::protobuf::int32 DateTime::minutes() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.minutes)
  return minutes_;
}
 void DateTime::set_minutes(::google::protobuf::int32 value) {
  
  minutes_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.minutes)
}

// optional int32 seconds = 6;
void DateTime::clear_seconds() {
  seconds_ = 0;
}
 ::google::protobuf::int32 DateTime::seconds() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.seconds)
  return seconds_;
}
 void DateTime::set_seconds(::google::protobuf::int32 value) {
  
  seconds_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.seconds)
}

// optional int32 miliseconds = 7;
void DateTime::clear_miliseconds() {
  miliseconds_ = 0;
}
 ::google::protobuf::int32 DateTime::miliseconds() const {
  // @@protoc_insertion_point(field_get:DataTypes.DateTime.miliseconds)
  return miliseconds_;
}
 void DateTime::set_miliseconds(::google::protobuf::int32 value) {
  
  miliseconds_ = value;
  // @@protoc_insertion_point(field_set:DataTypes.DateTime.miliseconds)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace DataTypes

// @@protoc_insertion_point(global_scope)
