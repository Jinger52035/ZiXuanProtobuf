// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Phone.proto
// Protobuf C++ Version: 5.30.0-dev

#include "Phone.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr Phone::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        address_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        number_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Phone::Phone(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(Phone_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct PhoneDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PhoneDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PhoneDefaultTypeInternal() {}
  union {
    Phone _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PhoneDefaultTypeInternal _Phone_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Phone_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Phone_2eproto = nullptr;
const ::uint32_t
    TableStruct_Phone_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::Phone, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::Phone, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Phone, _impl_.number_),
        PROTOBUF_FIELD_OFFSET(::Phone, _impl_.name_),
        PROTOBUF_FIELD_OFFSET(::Phone, _impl_.address_),
        2,
        0,
        1,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 11, -1, sizeof(::Phone)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_Phone_default_instance_._instance,
};
const char descriptor_table_protodef_Phone_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\013Phone.proto\"e\n\005Phone\022\023\n\006Number\030\001 \001(\005H\000"
    "\210\001\001\022\021\n\004Name\030\002 \001(\tH\001\210\001\001\022\024\n\007Address\030\003 \001(\tH"
    "\002\210\001\001B\t\n\007_NumberB\007\n\005_NameB\n\n\010_Addressb\006pr"
    "oto3"
};
static ::absl::once_flag descriptor_table_Phone_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_Phone_2eproto = {
    false,
    false,
    124,
    descriptor_table_protodef_Phone_2eproto,
    "Phone.proto",
    &descriptor_table_Phone_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_Phone_2eproto::offsets,
    file_level_enum_descriptors_Phone_2eproto,
    file_level_service_descriptors_Phone_2eproto,
};
// ===================================================================

class Phone::_Internal {
 public:
  using HasBits =
      decltype(std::declval<Phone>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(Phone, _impl_._has_bits_);
};

Phone::Phone(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, Phone_class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Phone)
}
PROTOBUF_NDEBUG_INLINE Phone::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::Phone& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        name_(arena, from.name_),
        address_(arena, from.address_) {}

Phone::Phone(
    ::google::protobuf::Arena* arena,
    const Phone& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, Phone_class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Phone* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.number_ = from._impl_.number_;

  // @@protoc_insertion_point(copy_constructor:Phone)
}
PROTOBUF_NDEBUG_INLINE Phone::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        name_(arena),
        address_(arena) {}

inline void Phone::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.number_ = {};
}
Phone::~Phone() {
  // @@protoc_insertion_point(destructor:Phone)
  SharedDtor(*this);
}
inline void Phone::SharedDtor(MessageLite& self) {
  Phone& this_ = static_cast<Phone&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.name_.Destroy();
  this_._impl_.address_.Destroy();
  this_._impl_.~Impl_();
}

inline void* Phone::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Phone(arena);
}
constexpr auto Phone::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(Phone),
                                            alignof(Phone));
}
constexpr auto Phone::InternalGenerateClassData_() {
  return ::google::protobuf::internal::ClassDataFull{
      ::google::protobuf::internal::ClassData{
          &_Phone_default_instance_._instance,
          &_table_.header,
          nullptr,  // OnDemandRegisterArenaDtor
          nullptr,  // IsInitialized
          &Phone::MergeImpl,
          ::google::protobuf::Message::GetNewImpl<Phone>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
          &Phone::SharedDtor,
          ::google::protobuf::Message::GetClearImpl<Phone>(), &Phone::ByteSizeLong,
              &Phone::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
          PROTOBUF_FIELD_OFFSET(Phone, _impl_._cached_size_),
          false,
      },
      &Phone::kDescriptorMethods,
      &descriptor_table_Phone_2eproto,
      nullptr,  // tracker
  };
}

PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::google::protobuf::internal::ClassDataFull
        Phone_class_data_ =
            Phone::InternalGenerateClassData_();

const ::google::protobuf::internal::ClassData* Phone::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&Phone_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(Phone_class_data_.tc_table);
  return Phone_class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 25, 2> Phone::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Phone, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    Phone_class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Phone>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // optional int32 Number = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Phone, _impl_.number_), 2>(),
     {8, 2, 0, PROTOBUF_FIELD_OFFSET(Phone, _impl_.number_)}},
    // optional string Name = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 0, 0, PROTOBUF_FIELD_OFFSET(Phone, _impl_.name_)}},
    // optional string Address = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 1, 0, PROTOBUF_FIELD_OFFSET(Phone, _impl_.address_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional int32 Number = 1;
    {PROTOBUF_FIELD_OFFSET(Phone, _impl_.number_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // optional string Name = 2;
    {PROTOBUF_FIELD_OFFSET(Phone, _impl_.name_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // optional string Address = 3;
    {PROTOBUF_FIELD_OFFSET(Phone, _impl_.address_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\5\0\4\7\0\0\0\0"
    "Phone"
    "Name"
    "Address"
  }},
};

PROTOBUF_NOINLINE void Phone::Clear() {
// @@protoc_insertion_point(message_clear_start:Phone)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.address_.ClearNonDefaultToEmpty();
    }
  }
  _impl_.number_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Phone::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Phone& this_ = static_cast<const Phone&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Phone::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Phone& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:Phone)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // optional int32 Number = 1;
          if (cached_has_bits & 0x00000004u) {
            target = ::google::protobuf::internal::WireFormatLite::
                WriteInt32ToArrayWithField<1>(
                    stream, this_._internal_number(), target);
          }

          // optional string Name = 2;
          if (cached_has_bits & 0x00000001u) {
            const std::string& _s = this_._internal_name();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Phone.Name");
            target = stream->WriteStringMaybeAliased(2, _s, target);
          }

          // optional string Address = 3;
          if (cached_has_bits & 0x00000002u) {
            const std::string& _s = this_._internal_address();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Phone.Address");
            target = stream->WriteStringMaybeAliased(3, _s, target);
          }

          if (ABSL_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:Phone)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Phone::ByteSizeLong(const MessageLite& base) {
          const Phone& this_ = static_cast<const Phone&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Phone::ByteSizeLong() const {
          const Phone& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:Phone)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
          cached_has_bits = this_._impl_._has_bits_[0];
          if (cached_has_bits & 0x00000007u) {
            // optional string Name = 2;
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_name());
            }
            // optional string Address = 3;
            if (cached_has_bits & 0x00000002u) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_address());
            }
            // optional int32 Number = 1;
            if (cached_has_bits & 0x00000004u) {
              total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
                  this_._internal_number());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Phone::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Phone*>(&to_msg);
  auto& from = static_cast<const Phone&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Phone)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_address(from._internal_address());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.number_ = from._impl_.number_;
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Phone::CopyFrom(const Phone& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Phone)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Phone::InternalSwap(Phone* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.address_, &other->_impl_.address_, arena);
  swap(_impl_.number_, other->_impl_.number_);
}

::google::protobuf::Metadata Phone::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ [[maybe_unused]] =
        (::_pbi::AddDescriptors(&descriptor_table_Phone_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"