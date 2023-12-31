// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_version.proto

#include "osi_version.pb.h"

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
PROTOBUF_CONSTEXPR InterfaceVersion::InterfaceVersion(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.version_major_)*/0u
  , /*decltype(_impl_.version_minor_)*/0u
  , /*decltype(_impl_.version_patch_)*/0u} {}
struct InterfaceVersionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InterfaceVersionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InterfaceVersionDefaultTypeInternal() {}
  union {
    InterfaceVersion _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InterfaceVersionDefaultTypeInternal _InterfaceVersion_default_instance_;
}  // namespace osi3
static ::_pb::Metadata file_level_metadata_osi_5fversion_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_osi_5fversion_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_osi_5fversion_2eproto = nullptr;

const uint32_t TableStruct_osi_5fversion_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, _impl_.version_major_),
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, _impl_.version_minor_),
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, _impl_.version_patch_),
  0,
  1,
  2,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::osi3::InterfaceVersion)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::osi3::_InterfaceVersion_default_instance_._instance,
};

const char descriptor_table_protodef_osi_5fversion_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021osi_version.proto\022\004osi3\032 google/protob"
  "uf/descriptor.proto\"W\n\020InterfaceVersion\022"
  "\025\n\rversion_major\030\001 \001(\r\022\025\n\rversion_minor\030"
  "\002 \001(\r\022\025\n\rversion_patch\030\003 \001(\r:Y\n\031current_"
  "interface_version\022\034.google.protobuf.File"
  "Options\030\350\370\004 \001(\0132\026.osi3.InterfaceVersionB"
  "\024H\001\302\306\'\002\010\003\302\306\'\002\020\005\302\306\'\002\030\000"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_osi_5fversion_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_osi_5fversion_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_osi_5fversion_2eproto = {
    false, false, 261, descriptor_table_protodef_osi_5fversion_2eproto,
    "osi_version.proto",
    &descriptor_table_osi_5fversion_2eproto_once, descriptor_table_osi_5fversion_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_osi_5fversion_2eproto::offsets,
    file_level_metadata_osi_5fversion_2eproto, file_level_enum_descriptors_osi_5fversion_2eproto,
    file_level_service_descriptors_osi_5fversion_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_osi_5fversion_2eproto_getter() {
  return &descriptor_table_osi_5fversion_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_osi_5fversion_2eproto(&descriptor_table_osi_5fversion_2eproto);
namespace osi3 {

// ===================================================================

class InterfaceVersion::_Internal {
 public:
  using HasBits = decltype(std::declval<InterfaceVersion>()._impl_._has_bits_);
  static void set_has_version_major(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_version_minor(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_version_patch(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

InterfaceVersion::InterfaceVersion(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:osi3.InterfaceVersion)
}
InterfaceVersion::InterfaceVersion(const InterfaceVersion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InterfaceVersion* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.version_major_){}
    , decltype(_impl_.version_minor_){}
    , decltype(_impl_.version_patch_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.version_major_, &from._impl_.version_major_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.version_patch_) -
    reinterpret_cast<char*>(&_impl_.version_major_)) + sizeof(_impl_.version_patch_));
  // @@protoc_insertion_point(copy_constructor:osi3.InterfaceVersion)
}

inline void InterfaceVersion::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.version_major_){0u}
    , decltype(_impl_.version_minor_){0u}
    , decltype(_impl_.version_patch_){0u}
  };
}

InterfaceVersion::~InterfaceVersion() {
  // @@protoc_insertion_point(destructor:osi3.InterfaceVersion)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InterfaceVersion::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void InterfaceVersion::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InterfaceVersion::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.InterfaceVersion)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.version_major_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.version_patch_) -
        reinterpret_cast<char*>(&_impl_.version_major_)) + sizeof(_impl_.version_patch_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InterfaceVersion::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 version_major = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_version_major(&has_bits);
          _impl_.version_major_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 version_minor = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_version_minor(&has_bits);
          _impl_.version_minor_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 version_patch = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_version_patch(&has_bits);
          _impl_.version_patch_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* InterfaceVersion::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.InterfaceVersion)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 version_major = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_version_major(), target);
  }

  // optional uint32 version_minor = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_version_minor(), target);
  }

  // optional uint32 version_patch = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_version_patch(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.InterfaceVersion)
  return target;
}

size_t InterfaceVersion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.InterfaceVersion)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint32 version_major = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version_major());
    }

    // optional uint32 version_minor = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version_minor());
    }

    // optional uint32 version_patch = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version_patch());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InterfaceVersion::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InterfaceVersion::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InterfaceVersion::GetClassData() const { return &_class_data_; }


void InterfaceVersion::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InterfaceVersion*>(&to_msg);
  auto& from = static_cast<const InterfaceVersion&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:osi3.InterfaceVersion)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.version_major_ = from._impl_.version_major_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.version_minor_ = from._impl_.version_minor_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.version_patch_ = from._impl_.version_patch_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InterfaceVersion::CopyFrom(const InterfaceVersion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.InterfaceVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InterfaceVersion::IsInitialized() const {
  return true;
}

void InterfaceVersion::InternalSwap(InterfaceVersion* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(InterfaceVersion, _impl_.version_patch_)
      + sizeof(InterfaceVersion::_impl_.version_patch_)
      - PROTOBUF_FIELD_OFFSET(InterfaceVersion, _impl_.version_major_)>(
          reinterpret_cast<char*>(&_impl_.version_major_),
          reinterpret_cast<char*>(&other->_impl_.version_major_));
}

::PROTOBUF_NAMESPACE_ID::Metadata InterfaceVersion::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_osi_5fversion_2eproto_getter, &descriptor_table_osi_5fversion_2eproto_once,
      file_level_metadata_osi_5fversion_2eproto[0]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::osi3::InterfaceVersion >, 11, false>
  current_interface_version(kCurrentInterfaceVersionFieldNumber, ::osi3::InterfaceVersion::default_instance(), nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::InterfaceVersion*
Arena::CreateMaybeMessage< ::osi3::InterfaceVersion >(Arena* arena) {
  return Arena::CreateMessageInternal< ::osi3::InterfaceVersion >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
