// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/timestamp.proto
// Protobuf C++ Version: 5.30.0-dev

#ifndef google_2fprotobuf_2ftimestamp_2eproto_2epb_2eh
#define google_2fprotobuf_2ftimestamp_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5030000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto PROTOBUF_EXPORT

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2ftimestamp_2eproto {
  static const ::uint32_t offsets[];
};
extern "C" {
PROTOBUF_EXPORT extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fprotobuf_2ftimestamp_2eproto;
}  // extern "C"
namespace google {
namespace protobuf {
class Timestamp;
struct TimestampDefaultTypeInternal;
PROTOBUF_EXPORT extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
PROTOBUF_EXPORT extern const ::google::protobuf::internal::ClassDataFull Timestamp_class_data_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace protobuf {

// ===================================================================


// -------------------------------------------------------------------

class PROTOBUF_EXPORT Timestamp final
    : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:google.protobuf.Timestamp) */ {
 public:
  inline Timestamp() : Timestamp(nullptr) {}
  ~Timestamp() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(Timestamp* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(Timestamp));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Timestamp(
      ::google::protobuf::internal::ConstantInitialized);

  inline Timestamp(const Timestamp& from) : Timestamp(nullptr, from) {}
  inline Timestamp(Timestamp&& from) noexcept
      : Timestamp(nullptr, std::move(from)) {}
  inline Timestamp& operator=(const Timestamp& from) {
    CopyFrom(from);
    return *this;
  }
  inline Timestamp& operator=(Timestamp&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Timestamp& default_instance() {
    return *reinterpret_cast<const Timestamp*>(
        &_Timestamp_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Timestamp& a, Timestamp& b) { a.Swap(&b); }
  inline void Swap(Timestamp* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Timestamp* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Timestamp* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<Timestamp>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Timestamp& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Timestamp& from) { Timestamp::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(Timestamp* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "google.protobuf.Timestamp"; }

 protected:
  explicit Timestamp(::google::protobuf::Arena* arena);
  Timestamp(::google::protobuf::Arena* arena, const Timestamp& from);
  Timestamp(::google::protobuf::Arena* arena, Timestamp&& from) noexcept
      : Timestamp(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();

 public:
  static constexpr auto InternalGenerateClassData_();

  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kSecondsFieldNumber = 1,
    kNanosFieldNumber = 2,
  };
  // int64 seconds = 1;
  void clear_seconds() ;
  ::int64_t seconds() const;
  void set_seconds(::int64_t value);

  private:
  ::int64_t _internal_seconds() const;
  void _internal_set_seconds(::int64_t value);

  public:
  // int32 nanos = 2;
  void clear_nanos() ;
  ::int32_t nanos() const;
  void set_nanos(::int32_t value);

  private:
  ::int32_t _internal_nanos() const;
  void _internal_set_nanos(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:google.protobuf.Timestamp)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      0, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Timestamp& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::int64_t seconds_;
    ::int32_t nanos_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2ftimestamp_2eproto;
};

PROTOBUF_EXPORT extern const ::google::protobuf::internal::ClassDataFull Timestamp_class_data_;

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Timestamp

// int64 seconds = 1;
inline void Timestamp::clear_seconds() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.seconds_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t Timestamp::seconds() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Timestamp.seconds)
  return _internal_seconds();
}
inline void Timestamp::set_seconds(::int64_t value) {
  _internal_set_seconds(value);
  _impl_._has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_set:google.protobuf.Timestamp.seconds)
}
inline ::int64_t Timestamp::_internal_seconds() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.seconds_;
}
inline void Timestamp::_internal_set_seconds(::int64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.seconds_ = value;
}

// int32 nanos = 2;
inline void Timestamp::clear_nanos() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.nanos_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t Timestamp::nanos() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Timestamp.nanos)
  return _internal_nanos();
}
inline void Timestamp::set_nanos(::int32_t value) {
  _internal_set_nanos(value);
  _impl_._has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_set:google.protobuf.Timestamp.nanos)
}
inline ::int32_t Timestamp::_internal_nanos() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.nanos_;
}
inline void Timestamp::_internal_set_nanos(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.nanos_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // google_2fprotobuf_2ftimestamp_2eproto_2epb_2eh