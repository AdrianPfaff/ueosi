// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_trafficupdate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_osi_5ftrafficupdate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_osi_5ftrafficupdate_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "osi_version.pb.h"
#include "osi_common.pb.h"
#include "osi_object.pb.h"
#include "osi_hostvehicledata.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_osi_5ftrafficupdate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_osi_5ftrafficupdate_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_osi_5ftrafficupdate_2eproto;
namespace osi3 {
class TrafficUpdate;
struct TrafficUpdateDefaultTypeInternal;
extern TrafficUpdateDefaultTypeInternal _TrafficUpdate_default_instance_;
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> ::osi3::TrafficUpdate* Arena::CreateMaybeMessage<::osi3::TrafficUpdate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace osi3 {

// ===================================================================

class TrafficUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:osi3.TrafficUpdate) */ {
 public:
  inline TrafficUpdate() : TrafficUpdate(nullptr) {}
  ~TrafficUpdate() override;
  explicit PROTOBUF_CONSTEXPR TrafficUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TrafficUpdate(const TrafficUpdate& from);
  TrafficUpdate(TrafficUpdate&& from) noexcept
    : TrafficUpdate() {
    *this = ::std::move(from);
  }

  inline TrafficUpdate& operator=(const TrafficUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrafficUpdate& operator=(TrafficUpdate&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TrafficUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const TrafficUpdate* internal_default_instance() {
    return reinterpret_cast<const TrafficUpdate*>(
               &_TrafficUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrafficUpdate& a, TrafficUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(TrafficUpdate* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TrafficUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TrafficUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TrafficUpdate>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TrafficUpdate& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TrafficUpdate& from) {
    TrafficUpdate::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TrafficUpdate* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "osi3.TrafficUpdate";
  }
  protected:
  explicit TrafficUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUpdateFieldNumber = 3,
    kInternalStateFieldNumber = 4,
    kVersionFieldNumber = 1,
    kTimestampFieldNumber = 2,
  };
  // repeated .osi3.MovingObject update = 3;
  int update_size() const;
  private:
  int _internal_update_size() const;
  public:
  void clear_update();
  ::osi3::MovingObject* mutable_update(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::MovingObject >*
      mutable_update();
  private:
  const ::osi3::MovingObject& _internal_update(int index) const;
  ::osi3::MovingObject* _internal_add_update();
  public:
  const ::osi3::MovingObject& update(int index) const;
  ::osi3::MovingObject* add_update();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::MovingObject >&
      update() const;

  // repeated .osi3.HostVehicleData internal_state = 4;
  int internal_state_size() const;
  private:
  int _internal_internal_state_size() const;
  public:
  void clear_internal_state();
  ::osi3::HostVehicleData* mutable_internal_state(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::HostVehicleData >*
      mutable_internal_state();
  private:
  const ::osi3::HostVehicleData& _internal_internal_state(int index) const;
  ::osi3::HostVehicleData* _internal_add_internal_state();
  public:
  const ::osi3::HostVehicleData& internal_state(int index) const;
  ::osi3::HostVehicleData* add_internal_state();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::HostVehicleData >&
      internal_state() const;

  // optional .osi3.InterfaceVersion version = 1;
  bool has_version() const;
  private:
  bool _internal_has_version() const;
  public:
  void clear_version();
  const ::osi3::InterfaceVersion& version() const;
  PROTOBUF_NODISCARD ::osi3::InterfaceVersion* release_version();
  ::osi3::InterfaceVersion* mutable_version();
  void set_allocated_version(::osi3::InterfaceVersion* version);
  private:
  const ::osi3::InterfaceVersion& _internal_version() const;
  ::osi3::InterfaceVersion* _internal_mutable_version();
  public:
  void unsafe_arena_set_allocated_version(
      ::osi3::InterfaceVersion* version);
  ::osi3::InterfaceVersion* unsafe_arena_release_version();

  // optional .osi3.Timestamp timestamp = 2;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const ::osi3::Timestamp& timestamp() const;
  PROTOBUF_NODISCARD ::osi3::Timestamp* release_timestamp();
  ::osi3::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::osi3::Timestamp* timestamp);
  private:
  const ::osi3::Timestamp& _internal_timestamp() const;
  ::osi3::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      ::osi3::Timestamp* timestamp);
  ::osi3::Timestamp* unsafe_arena_release_timestamp();

  // @@protoc_insertion_point(class_scope:osi3.TrafficUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::MovingObject > update_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::HostVehicleData > internal_state_;
    ::osi3::InterfaceVersion* version_;
    ::osi3::Timestamp* timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_osi_5ftrafficupdate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrafficUpdate

// optional .osi3.InterfaceVersion version = 1;
inline bool TrafficUpdate::_internal_has_version() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.version_ != nullptr);
  return value;
}
inline bool TrafficUpdate::has_version() const {
  return _internal_has_version();
}
inline const ::osi3::InterfaceVersion& TrafficUpdate::_internal_version() const {
  const ::osi3::InterfaceVersion* p = _impl_.version_;
  return p != nullptr ? *p : reinterpret_cast<const ::osi3::InterfaceVersion&>(
      ::osi3::_InterfaceVersion_default_instance_);
}
inline const ::osi3::InterfaceVersion& TrafficUpdate::version() const {
  // @@protoc_insertion_point(field_get:osi3.TrafficUpdate.version)
  return _internal_version();
}
inline void TrafficUpdate::unsafe_arena_set_allocated_version(
    ::osi3::InterfaceVersion* version) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.version_);
  }
  _impl_.version_ = version;
  if (version) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:osi3.TrafficUpdate.version)
}
inline ::osi3::InterfaceVersion* TrafficUpdate::release_version() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::osi3::InterfaceVersion* temp = _impl_.version_;
  _impl_.version_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::osi3::InterfaceVersion* TrafficUpdate::unsafe_arena_release_version() {
  // @@protoc_insertion_point(field_release:osi3.TrafficUpdate.version)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::osi3::InterfaceVersion* temp = _impl_.version_;
  _impl_.version_ = nullptr;
  return temp;
}
inline ::osi3::InterfaceVersion* TrafficUpdate::_internal_mutable_version() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.version_ == nullptr) {
    auto* p = CreateMaybeMessage<::osi3::InterfaceVersion>(GetArenaForAllocation());
    _impl_.version_ = p;
  }
  return _impl_.version_;
}
inline ::osi3::InterfaceVersion* TrafficUpdate::mutable_version() {
  ::osi3::InterfaceVersion* _msg = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:osi3.TrafficUpdate.version)
  return _msg;
}
inline void TrafficUpdate::set_allocated_version(::osi3::InterfaceVersion* version) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.version_);
  }
  if (version) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(version));
    if (message_arena != submessage_arena) {
      version = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.version_ = version;
  // @@protoc_insertion_point(field_set_allocated:osi3.TrafficUpdate.version)
}

// optional .osi3.Timestamp timestamp = 2;
inline bool TrafficUpdate::_internal_has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.timestamp_ != nullptr);
  return value;
}
inline bool TrafficUpdate::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const ::osi3::Timestamp& TrafficUpdate::_internal_timestamp() const {
  const ::osi3::Timestamp* p = _impl_.timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const ::osi3::Timestamp&>(
      ::osi3::_Timestamp_default_instance_);
}
inline const ::osi3::Timestamp& TrafficUpdate::timestamp() const {
  // @@protoc_insertion_point(field_get:osi3.TrafficUpdate.timestamp)
  return _internal_timestamp();
}
inline void TrafficUpdate::unsafe_arena_set_allocated_timestamp(
    ::osi3::Timestamp* timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  _impl_.timestamp_ = timestamp;
  if (timestamp) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:osi3.TrafficUpdate.timestamp)
}
inline ::osi3::Timestamp* TrafficUpdate::release_timestamp() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::osi3::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::osi3::Timestamp* TrafficUpdate::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:osi3.TrafficUpdate.timestamp)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::osi3::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
  return temp;
}
inline ::osi3::Timestamp* TrafficUpdate::_internal_mutable_timestamp() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::osi3::Timestamp>(GetArenaForAllocation());
    _impl_.timestamp_ = p;
  }
  return _impl_.timestamp_;
}
inline ::osi3::Timestamp* TrafficUpdate::mutable_timestamp() {
  ::osi3::Timestamp* _msg = _internal_mutable_timestamp();
  // @@protoc_insertion_point(field_mutable:osi3.TrafficUpdate.timestamp)
  return _msg;
}
inline void TrafficUpdate::set_allocated_timestamp(::osi3::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp));
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:osi3.TrafficUpdate.timestamp)
}

// repeated .osi3.MovingObject update = 3;
inline int TrafficUpdate::_internal_update_size() const {
  return _impl_.update_.size();
}
inline int TrafficUpdate::update_size() const {
  return _internal_update_size();
}
inline ::osi3::MovingObject* TrafficUpdate::mutable_update(int index) {
  // @@protoc_insertion_point(field_mutable:osi3.TrafficUpdate.update)
  return _impl_.update_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::MovingObject >*
TrafficUpdate::mutable_update() {
  // @@protoc_insertion_point(field_mutable_list:osi3.TrafficUpdate.update)
  return &_impl_.update_;
}
inline const ::osi3::MovingObject& TrafficUpdate::_internal_update(int index) const {
  return _impl_.update_.Get(index);
}
inline const ::osi3::MovingObject& TrafficUpdate::update(int index) const {
  // @@protoc_insertion_point(field_get:osi3.TrafficUpdate.update)
  return _internal_update(index);
}
inline ::osi3::MovingObject* TrafficUpdate::_internal_add_update() {
  return _impl_.update_.Add();
}
inline ::osi3::MovingObject* TrafficUpdate::add_update() {
  ::osi3::MovingObject* _add = _internal_add_update();
  // @@protoc_insertion_point(field_add:osi3.TrafficUpdate.update)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::MovingObject >&
TrafficUpdate::update() const {
  // @@protoc_insertion_point(field_list:osi3.TrafficUpdate.update)
  return _impl_.update_;
}

// repeated .osi3.HostVehicleData internal_state = 4;
inline int TrafficUpdate::_internal_internal_state_size() const {
  return _impl_.internal_state_.size();
}
inline int TrafficUpdate::internal_state_size() const {
  return _internal_internal_state_size();
}
inline ::osi3::HostVehicleData* TrafficUpdate::mutable_internal_state(int index) {
  // @@protoc_insertion_point(field_mutable:osi3.TrafficUpdate.internal_state)
  return _impl_.internal_state_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::HostVehicleData >*
TrafficUpdate::mutable_internal_state() {
  // @@protoc_insertion_point(field_mutable_list:osi3.TrafficUpdate.internal_state)
  return &_impl_.internal_state_;
}
inline const ::osi3::HostVehicleData& TrafficUpdate::_internal_internal_state(int index) const {
  return _impl_.internal_state_.Get(index);
}
inline const ::osi3::HostVehicleData& TrafficUpdate::internal_state(int index) const {
  // @@protoc_insertion_point(field_get:osi3.TrafficUpdate.internal_state)
  return _internal_internal_state(index);
}
inline ::osi3::HostVehicleData* TrafficUpdate::_internal_add_internal_state() {
  return _impl_.internal_state_.Add();
}
inline ::osi3::HostVehicleData* TrafficUpdate::add_internal_state() {
  ::osi3::HostVehicleData* _add = _internal_add_internal_state();
  // @@protoc_insertion_point(field_add:osi3.TrafficUpdate.internal_state)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::osi3::HostVehicleData >&
TrafficUpdate::internal_state() const {
  // @@protoc_insertion_point(field_list:osi3.TrafficUpdate.internal_state)
  return _impl_.internal_state_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace osi3

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_osi_5ftrafficupdate_2eproto
