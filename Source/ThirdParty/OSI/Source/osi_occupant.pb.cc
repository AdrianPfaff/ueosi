// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_occupant.proto

#include "osi_occupant.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace osi3 {
PROTOBUF_CONSTEXPR Occupant_Classification::Occupant_Classification(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.is_driver_)*/false
  , /*decltype(_impl_.seat_)*/0
  , /*decltype(_impl_.steering_control_)*/0} {}
struct Occupant_ClassificationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Occupant_ClassificationDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Occupant_ClassificationDefaultTypeInternal() {}
  union {
    Occupant_Classification _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Occupant_ClassificationDefaultTypeInternal _Occupant_Classification_default_instance_;
PROTOBUF_CONSTEXPR Occupant::Occupant(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.source_reference_)*/{}
  , /*decltype(_impl_.id_)*/nullptr
  , /*decltype(_impl_.classification_)*/nullptr} {}
struct OccupantDefaultTypeInternal {
  PROTOBUF_CONSTEXPR OccupantDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~OccupantDefaultTypeInternal() {}
  union {
    Occupant _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 OccupantDefaultTypeInternal _Occupant_default_instance_;
}  // namespace osi3
static ::_pb::Metadata file_level_metadata_osi_5foccupant_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_osi_5foccupant_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_osi_5foccupant_2eproto = nullptr;

const uint32_t TableStruct_osi_5foccupant_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, _impl_.is_driver_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, _impl_.seat_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, _impl_.steering_control_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, _impl_.classification_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, _impl_.source_reference_),
  0,
  1,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::osi3::Occupant_Classification)},
  { 12, 21, -1, sizeof(::osi3::Occupant)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::osi3::_Occupant_Classification_default_instance_._instance,
  &::osi3::_Occupant_default_instance_._instance,
};

const char descriptor_table_protodef_osi_5foccupant_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022osi_occupant.proto\022\004osi3\032\020osi_common.p"
  "roto\"\232\006\n\010Occupant\022\034\n\002id\030\001 \001(\0132\020.osi3.Ide"
  "ntifier\0225\n\016classification\030\002 \001(\0132\035.osi3.O"
  "ccupant.Classification\0221\n\020source_referen"
  "ce\030\003 \003(\0132\027.osi3.ExternalReference\032\205\005\n\016Cl"
  "assification\022\021\n\tis_driver\030\002 \001(\010\0220\n\004seat\030"
  "\003 \001(\0162\".osi3.Occupant.Classification.Sea"
  "t\022G\n\020steering_control\030\004 \001(\0162-.osi3.Occup"
  "ant.Classification.SteeringControl\"\367\001\n\004S"
  "eat\022\020\n\014SEAT_UNKNOWN\020\000\022\016\n\nSEAT_OTHER\020\001\022\023\n"
  "\017SEAT_FRONT_LEFT\020\002\022\024\n\020SEAT_FRONT_RIGHT\020\003"
  "\022\025\n\021SEAT_FRONT_MIDDLE\020\004\022\022\n\016SEAT_BACK_LEF"
  "T\020\005\022\023\n\017SEAT_BACK_RIGHT\020\006\022\024\n\020SEAT_BACK_MI"
  "DDLE\020\007\022\027\n\023SEAT_THIRD_ROW_LEFT\020\010\022\030\n\024SEAT_"
  "THIRD_ROW_RIGHT\020\t\022\031\n\025SEAT_THIRD_ROW_MIDD"
  "LE\020\n\"\352\001\n\017SteeringControl\022\034\n\030STEERING_CON"
  "TROL_UNKNOWN\020\000\022\032\n\026STEERING_CONTROL_OTHER"
  "\020\001\022\034\n\030STEERING_CONTROL_NO_HAND\020\002\022\035\n\031STEE"
  "RING_CONTROL_ONE_HAND\020\003\022\037\n\033STEERING_CONT"
  "ROL_BOTH_HANDS\020\004\022\036\n\032STEERING_CONTROL_LEF"
  "T_HAND\020\005\022\037\n\033STEERING_CONTROL_RIGHT_HAND\020"
  "\006B\002H\001"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_osi_5foccupant_2eproto_deps[1] = {
  &::descriptor_table_osi_5fcommon_2eproto,
};
static ::_pbi::once_flag descriptor_table_osi_5foccupant_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_osi_5foccupant_2eproto = {
    false, false, 845, descriptor_table_protodef_osi_5foccupant_2eproto,
    "osi_occupant.proto",
    &descriptor_table_osi_5foccupant_2eproto_once, descriptor_table_osi_5foccupant_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_osi_5foccupant_2eproto::offsets,
    file_level_metadata_osi_5foccupant_2eproto, file_level_enum_descriptors_osi_5foccupant_2eproto,
    file_level_service_descriptors_osi_5foccupant_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_osi_5foccupant_2eproto_getter() {
  return &descriptor_table_osi_5foccupant_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_osi_5foccupant_2eproto(&descriptor_table_osi_5foccupant_2eproto);
namespace osi3 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Occupant_Classification_Seat_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_osi_5foccupant_2eproto);
  return file_level_enum_descriptors_osi_5foccupant_2eproto[0];
}
bool Occupant_Classification_Seat_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_UNKNOWN;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_OTHER;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_FRONT_LEFT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_FRONT_RIGHT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_FRONT_MIDDLE;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_BACK_LEFT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_BACK_RIGHT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_BACK_MIDDLE;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_THIRD_ROW_LEFT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_THIRD_ROW_RIGHT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_THIRD_ROW_MIDDLE;
constexpr Occupant_Classification_Seat Occupant_Classification::Seat_MIN;
constexpr Occupant_Classification_Seat Occupant_Classification::Seat_MAX;
constexpr int Occupant_Classification::Seat_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Occupant_Classification_SteeringControl_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_osi_5foccupant_2eproto);
  return file_level_enum_descriptors_osi_5foccupant_2eproto[1];
}
bool Occupant_Classification_SteeringControl_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_UNKNOWN;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_OTHER;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_NO_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_ONE_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_BOTH_HANDS;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_LEFT_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_RIGHT_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::SteeringControl_MIN;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::SteeringControl_MAX;
constexpr int Occupant_Classification::SteeringControl_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Occupant_Classification::_Internal {
 public:
  using HasBits = decltype(std::declval<Occupant_Classification>()._impl_._has_bits_);
  static void set_has_is_driver(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_seat(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_steering_control(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

Occupant_Classification::Occupant_Classification(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:osi3.Occupant.Classification)
}
Occupant_Classification::Occupant_Classification(const Occupant_Classification& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Occupant_Classification* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.is_driver_){}
    , decltype(_impl_.seat_){}
    , decltype(_impl_.steering_control_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.is_driver_, &from._impl_.is_driver_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.steering_control_) -
    reinterpret_cast<char*>(&_impl_.is_driver_)) + sizeof(_impl_.steering_control_));
  // @@protoc_insertion_point(copy_constructor:osi3.Occupant.Classification)
}

inline void Occupant_Classification::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.is_driver_){false}
    , decltype(_impl_.seat_){0}
    , decltype(_impl_.steering_control_){0}
  };
}

Occupant_Classification::~Occupant_Classification() {
  // @@protoc_insertion_point(destructor:osi3.Occupant.Classification)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Occupant_Classification::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Occupant_Classification::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Occupant_Classification::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.Occupant.Classification)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.is_driver_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.steering_control_) -
        reinterpret_cast<char*>(&_impl_.is_driver_)) + sizeof(_impl_.steering_control_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Occupant_Classification::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool is_driver = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_is_driver(&has_bits);
          _impl_.is_driver_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.Occupant.Classification.Seat seat = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::osi3::Occupant_Classification_Seat_IsValid(val))) {
            _internal_set_seat(static_cast<::osi3::Occupant_Classification_Seat>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.Occupant.Classification.SteeringControl steering_control = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::osi3::Occupant_Classification_SteeringControl_IsValid(val))) {
            _internal_set_steering_control(static_cast<::osi3::Occupant_Classification_SteeringControl>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Occupant_Classification::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.Occupant.Classification)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool is_driver = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_is_driver(), target);
  }

  // optional .osi3.Occupant.Classification.Seat seat = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_seat(), target);
  }

  // optional .osi3.Occupant.Classification.SteeringControl steering_control = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_steering_control(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.Occupant.Classification)
  return target;
}

size_t Occupant_Classification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.Occupant.Classification)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional bool is_driver = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional .osi3.Occupant.Classification.Seat seat = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_seat());
    }

    // optional .osi3.Occupant.Classification.SteeringControl steering_control = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_steering_control());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Occupant_Classification::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Occupant_Classification::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Occupant_Classification::GetClassData() const { return &_class_data_; }


void Occupant_Classification::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Occupant_Classification*>(&to_msg);
  auto& from = static_cast<const Occupant_Classification&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:osi3.Occupant.Classification)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.is_driver_ = from._impl_.is_driver_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.seat_ = from._impl_.seat_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.steering_control_ = from._impl_.steering_control_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Occupant_Classification::CopyFrom(const Occupant_Classification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.Occupant.Classification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Occupant_Classification::IsInitialized() const {
  return true;
}

void Occupant_Classification::InternalSwap(Occupant_Classification* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Occupant_Classification, _impl_.steering_control_)
      + sizeof(Occupant_Classification::_impl_.steering_control_)
      - PROTOBUF_FIELD_OFFSET(Occupant_Classification, _impl_.is_driver_)>(
          reinterpret_cast<char*>(&_impl_.is_driver_),
          reinterpret_cast<char*>(&other->_impl_.is_driver_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Occupant_Classification::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_osi_5foccupant_2eproto_getter, &descriptor_table_osi_5foccupant_2eproto_once,
      file_level_metadata_osi_5foccupant_2eproto[0]);
}

// ===================================================================

class Occupant::_Internal {
 public:
  using HasBits = decltype(std::declval<Occupant>()._impl_._has_bits_);
  static const ::osi3::Identifier& id(const Occupant* msg);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::osi3::Occupant_Classification& classification(const Occupant* msg);
  static void set_has_classification(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::osi3::Identifier&
Occupant::_Internal::id(const Occupant* msg) {
  return *msg->_impl_.id_;
}
const ::osi3::Occupant_Classification&
Occupant::_Internal::classification(const Occupant* msg) {
  return *msg->_impl_.classification_;
}
void Occupant::clear_id() {
  if (_impl_.id_ != nullptr) _impl_.id_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Occupant::clear_source_reference() {
  _impl_.source_reference_.Clear();
}
Occupant::Occupant(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:osi3.Occupant)
}
Occupant::Occupant(const Occupant& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Occupant* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.source_reference_){from._impl_.source_reference_}
    , decltype(_impl_.id_){nullptr}
    , decltype(_impl_.classification_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_id()) {
    _this->_impl_.id_ = new ::osi3::Identifier(*from._impl_.id_);
  }
  if (from._internal_has_classification()) {
    _this->_impl_.classification_ = new ::osi3::Occupant_Classification(*from._impl_.classification_);
  }
  // @@protoc_insertion_point(copy_constructor:osi3.Occupant)
}

inline void Occupant::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.source_reference_){arena}
    , decltype(_impl_.id_){nullptr}
    , decltype(_impl_.classification_){nullptr}
  };
}

Occupant::~Occupant() {
  // @@protoc_insertion_point(destructor:osi3.Occupant)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Occupant::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.source_reference_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.id_;
  if (this != internal_default_instance()) delete _impl_.classification_;
}

void Occupant::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Occupant::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.Occupant)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.source_reference_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.id_ != nullptr);
      _impl_.id_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.classification_ != nullptr);
      _impl_.classification_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Occupant::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .osi3.Identifier id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_id(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.Occupant.Classification classification = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_classification(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .osi3.ExternalReference source_reference = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_source_reference(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Occupant::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.Occupant)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .osi3.Identifier id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::id(this),
        _Internal::id(this).GetCachedSize(), target, stream);
  }

  // optional .osi3.Occupant.Classification classification = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::classification(this),
        _Internal::classification(this).GetCachedSize(), target, stream);
  }

  // repeated .osi3.ExternalReference source_reference = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_source_reference_size()); i < n; i++) {
    const auto& repfield = this->_internal_source_reference(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.Occupant)
  return target;
}

size_t Occupant::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.Occupant)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .osi3.ExternalReference source_reference = 3;
  total_size += 1UL * this->_internal_source_reference_size();
  for (const auto& msg : this->_impl_.source_reference_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .osi3.Identifier id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.id_);
    }

    // optional .osi3.Occupant.Classification classification = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.classification_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Occupant::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Occupant::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Occupant::GetClassData() const { return &_class_data_; }


void Occupant::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Occupant*>(&to_msg);
  auto& from = static_cast<const Occupant&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:osi3.Occupant)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.source_reference_.MergeFrom(from._impl_.source_reference_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_id()->::osi3::Identifier::MergeFrom(
          from._internal_id());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_classification()->::osi3::Occupant_Classification::MergeFrom(
          from._internal_classification());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Occupant::CopyFrom(const Occupant& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.Occupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Occupant::IsInitialized() const {
  return true;
}

void Occupant::InternalSwap(Occupant* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.source_reference_.InternalSwap(&other->_impl_.source_reference_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Occupant, _impl_.classification_)
      + sizeof(Occupant::_impl_.classification_)
      - PROTOBUF_FIELD_OFFSET(Occupant, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Occupant::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_osi_5foccupant_2eproto_getter, &descriptor_table_osi_5foccupant_2eproto_once,
      file_level_metadata_osi_5foccupant_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::Occupant_Classification*
Arena::CreateMaybeMessage< ::osi3::Occupant_Classification >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::Occupant_Classification >(arena);
}
template<> PROTOBUF_NOINLINE ::osi3::Occupant*
Arena::CreateMaybeMessage< ::osi3::Occupant >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::Occupant >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
