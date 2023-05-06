// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_trafficupdate.proto

#include "osi_trafficupdate.pb.h"

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
PROTOBUF_CONSTEXPR TrafficUpdate::TrafficUpdate(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.update_)*/{}
  , /*decltype(_impl_.internal_state_)*/{}
  , /*decltype(_impl_.version_)*/nullptr
  , /*decltype(_impl_.timestamp_)*/nullptr} {}
struct TrafficUpdateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrafficUpdateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrafficUpdateDefaultTypeInternal() {}
  union {
    TrafficUpdate _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrafficUpdateDefaultTypeInternal _TrafficUpdate_default_instance_;
}  // namespace osi3
static ::_pb::Metadata file_level_metadata_osi_5ftrafficupdate_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_osi_5ftrafficupdate_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_osi_5ftrafficupdate_2eproto = nullptr;

const uint32_t TableStruct_osi_5ftrafficupdate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _impl_.update_),
  PROTOBUF_FIELD_OFFSET(::osi3::TrafficUpdate, _impl_.internal_state_),
  0,
  1,
  ~0u,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::osi3::TrafficUpdate)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::osi3::_TrafficUpdate_default_instance_._instance,
};

const char descriptor_table_protodef_osi_5ftrafficupdate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027osi_trafficupdate.proto\022\004osi3\032\021osi_ver"
  "sion.proto\032\020osi_common.proto\032\020osi_object"
  ".proto\032\031osi_hostvehicledata.proto\"\257\001\n\rTr"
  "afficUpdate\022\'\n\007version\030\001 \001(\0132\026.osi3.Inte"
  "rfaceVersion\022\"\n\ttimestamp\030\002 \001(\0132\017.osi3.T"
  "imestamp\022\"\n\006update\030\003 \003(\0132\022.osi3.MovingOb"
  "ject\022-\n\016internal_state\030\004 \003(\0132\025.osi3.Host"
  "VehicleDataB\002H\001"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_osi_5ftrafficupdate_2eproto_deps[4] = {
  &::descriptor_table_osi_5fcommon_2eproto,
  &::descriptor_table_osi_5fhostvehicledata_2eproto,
  &::descriptor_table_osi_5fobject_2eproto,
  &::descriptor_table_osi_5fversion_2eproto,
};
static ::_pbi::once_flag descriptor_table_osi_5ftrafficupdate_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_osi_5ftrafficupdate_2eproto = {
    false, false, 295, descriptor_table_protodef_osi_5ftrafficupdate_2eproto,
    "osi_trafficupdate.proto",
    &descriptor_table_osi_5ftrafficupdate_2eproto_once, descriptor_table_osi_5ftrafficupdate_2eproto_deps, 4, 1,
    schemas, file_default_instances, TableStruct_osi_5ftrafficupdate_2eproto::offsets,
    file_level_metadata_osi_5ftrafficupdate_2eproto, file_level_enum_descriptors_osi_5ftrafficupdate_2eproto,
    file_level_service_descriptors_osi_5ftrafficupdate_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_osi_5ftrafficupdate_2eproto_getter() {
  return &descriptor_table_osi_5ftrafficupdate_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_osi_5ftrafficupdate_2eproto(&descriptor_table_osi_5ftrafficupdate_2eproto);
namespace osi3 {

// ===================================================================

class TrafficUpdate::_Internal {
 public:
  using HasBits = decltype(std::declval<TrafficUpdate>()._impl_._has_bits_);
  static const ::osi3::InterfaceVersion& version(const TrafficUpdate* msg);
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::osi3::Timestamp& timestamp(const TrafficUpdate* msg);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::osi3::InterfaceVersion&
TrafficUpdate::_Internal::version(const TrafficUpdate* msg) {
  return *msg->_impl_.version_;
}
const ::osi3::Timestamp&
TrafficUpdate::_Internal::timestamp(const TrafficUpdate* msg) {
  return *msg->_impl_.timestamp_;
}
void TrafficUpdate::clear_version() {
  if (_impl_.version_ != nullptr) _impl_.version_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void TrafficUpdate::clear_timestamp() {
  if (_impl_.timestamp_ != nullptr) _impl_.timestamp_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void TrafficUpdate::clear_update() {
  _impl_.update_.Clear();
}
void TrafficUpdate::clear_internal_state() {
  _impl_.internal_state_.Clear();
}
TrafficUpdate::TrafficUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:osi3.TrafficUpdate)
}
TrafficUpdate::TrafficUpdate(const TrafficUpdate& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TrafficUpdate* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.update_){from._impl_.update_}
    , decltype(_impl_.internal_state_){from._impl_.internal_state_}
    , decltype(_impl_.version_){nullptr}
    , decltype(_impl_.timestamp_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_version()) {
    _this->_impl_.version_ = new ::osi3::InterfaceVersion(*from._impl_.version_);
  }
  if (from._internal_has_timestamp()) {
    _this->_impl_.timestamp_ = new ::osi3::Timestamp(*from._impl_.timestamp_);
  }
  // @@protoc_insertion_point(copy_constructor:osi3.TrafficUpdate)
}

inline void TrafficUpdate::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.update_){arena}
    , decltype(_impl_.internal_state_){arena}
    , decltype(_impl_.version_){nullptr}
    , decltype(_impl_.timestamp_){nullptr}
  };
}

TrafficUpdate::~TrafficUpdate() {
  // @@protoc_insertion_point(destructor:osi3.TrafficUpdate)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrafficUpdate::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.update_.~RepeatedPtrField();
  _impl_.internal_state_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.version_;
  if (this != internal_default_instance()) delete _impl_.timestamp_;
}

void TrafficUpdate::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TrafficUpdate::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.TrafficUpdate)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.update_.Clear();
  _impl_.internal_state_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.version_ != nullptr);
      _impl_.version_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.timestamp_ != nullptr);
      _impl_.timestamp_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TrafficUpdate::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .osi3.InterfaceVersion version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_version(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .osi3.Timestamp timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .osi3.MovingObject update = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_update(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .osi3.HostVehicleData internal_state = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_internal_state(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

uint8_t* TrafficUpdate::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.TrafficUpdate)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .osi3.InterfaceVersion version = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::version(this),
        _Internal::version(this).GetCachedSize(), target, stream);
  }

  // optional .osi3.Timestamp timestamp = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::timestamp(this),
        _Internal::timestamp(this).GetCachedSize(), target, stream);
  }

  // repeated .osi3.MovingObject update = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_update_size()); i < n; i++) {
    const auto& repfield = this->_internal_update(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .osi3.HostVehicleData internal_state = 4;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_internal_state_size()); i < n; i++) {
    const auto& repfield = this->_internal_internal_state(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.TrafficUpdate)
  return target;
}

size_t TrafficUpdate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.TrafficUpdate)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .osi3.MovingObject update = 3;
  total_size += 1UL * this->_internal_update_size();
  for (const auto& msg : this->_impl_.update_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .osi3.HostVehicleData internal_state = 4;
  total_size += 1UL * this->_internal_internal_state_size();
  for (const auto& msg : this->_impl_.internal_state_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .osi3.InterfaceVersion version = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.version_);
    }

    // optional .osi3.Timestamp timestamp = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.timestamp_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TrafficUpdate::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TrafficUpdate::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TrafficUpdate::GetClassData() const { return &_class_data_; }


void TrafficUpdate::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TrafficUpdate*>(&to_msg);
  auto& from = static_cast<const TrafficUpdate&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:osi3.TrafficUpdate)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.update_.MergeFrom(from._impl_.update_);
  _this->_impl_.internal_state_.MergeFrom(from._impl_.internal_state_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_version()->::osi3::InterfaceVersion::MergeFrom(
          from._internal_version());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_timestamp()->::osi3::Timestamp::MergeFrom(
          from._internal_timestamp());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TrafficUpdate::CopyFrom(const TrafficUpdate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.TrafficUpdate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrafficUpdate::IsInitialized() const {
  return true;
}

void TrafficUpdate::InternalSwap(TrafficUpdate* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.update_.InternalSwap(&other->_impl_.update_);
  _impl_.internal_state_.InternalSwap(&other->_impl_.internal_state_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TrafficUpdate, _impl_.timestamp_)
      + sizeof(TrafficUpdate::_impl_.timestamp_)
      - PROTOBUF_FIELD_OFFSET(TrafficUpdate, _impl_.version_)>(
          reinterpret_cast<char*>(&_impl_.version_),
          reinterpret_cast<char*>(&other->_impl_.version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TrafficUpdate::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_osi_5ftrafficupdate_2eproto_getter, &descriptor_table_osi_5ftrafficupdate_2eproto_once,
      file_level_metadata_osi_5ftrafficupdate_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::TrafficUpdate*
Arena::CreateMaybeMessage< ::osi3::TrafficUpdate >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::TrafficUpdate >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>