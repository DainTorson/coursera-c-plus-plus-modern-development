// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: name.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_name_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_name_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_name_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_name_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_name_2eproto;
namespace YellowPages {
class Name;
class NameDefaultTypeInternal;
extern NameDefaultTypeInternal _Name_default_instance_;
}  // namespace YellowPages
PROTOBUF_NAMESPACE_OPEN
template<> ::YellowPages::Name* Arena::CreateMaybeMessage<::YellowPages::Name>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace YellowPages {

enum Name_Type : int {
  Name_Type_MAIN = 0,
  Name_Type_SYNONYM = 1,
  Name_Type_SHORT = 2,
  Name_Type_Name_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Name_Type_Name_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Name_Type_IsValid(int value);
constexpr Name_Type Name_Type_Type_MIN = Name_Type_MAIN;
constexpr Name_Type Name_Type_Type_MAX = Name_Type_SHORT;
constexpr int Name_Type_Type_ARRAYSIZE = Name_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Name_Type_descriptor();
template<typename T>
inline const std::string& Name_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Name_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Name_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Name_Type_descriptor(), enum_t_value);
}
inline bool Name_Type_Parse(
    const std::string& name, Name_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Name_Type>(
    Name_Type_descriptor(), name, value);
}
// ===================================================================

class Name :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:YellowPages.Name) */ {
 public:
  Name();
  virtual ~Name();

  Name(const Name& from);
  Name(Name&& from) noexcept
    : Name() {
    *this = ::std::move(from);
  }

  inline Name& operator=(const Name& from) {
    CopyFrom(from);
    return *this;
  }
  inline Name& operator=(Name&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Name& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Name* internal_default_instance() {
    return reinterpret_cast<const Name*>(
               &_Name_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Name& a, Name& b) {
    a.Swap(&b);
  }
  inline void Swap(Name* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Name* New() const final {
    return CreateMaybeMessage<Name>(nullptr);
  }

  Name* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Name>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Name& from);
  void MergeFrom(const Name& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Name* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "YellowPages.Name";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_name_2eproto);
    return ::descriptor_table_name_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Name_Type Type;
  static constexpr Type MAIN =
    Name_Type_MAIN;
  static constexpr Type SYNONYM =
    Name_Type_SYNONYM;
  static constexpr Type SHORT =
    Name_Type_SHORT;
  static inline bool Type_IsValid(int value) {
    return Name_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Name_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Name_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Name_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Name_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Name_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return Name_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
    kTypeFieldNumber = 2,
  };
  // string value = 1;
  void clear_value();
  const std::string& value() const;
  void set_value(const std::string& value);
  void set_value(std::string&& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  std::string* mutable_value();
  std::string* release_value();
  void set_allocated_value(std::string* value);

  // .YellowPages.Name.Type type = 2;
  void clear_type();
  ::YellowPages::Name_Type type() const;
  void set_type(::YellowPages::Name_Type value);

  // @@protoc_insertion_point(class_scope:YellowPages.Name)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_name_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Name

// string value = 1;
inline void Name::clear_value() {
  value_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Name::value() const {
  // @@protoc_insertion_point(field_get:YellowPages.Name.value)
  return value_.GetNoArena();
}
inline void Name::set_value(const std::string& value) {
  
  value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Name.value)
}
inline void Name::set_value(std::string&& value) {
  
  value_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Name.value)
}
inline void Name::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Name.value)
}
inline void Name::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Name.value)
}
inline std::string* Name::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Name.value)
  return value_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Name::release_value() {
  // @@protoc_insertion_point(field_release:YellowPages.Name.value)
  
  return value_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Name::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Name.value)
}

// .YellowPages.Name.Type type = 2;
inline void Name::clear_type() {
  type_ = 0;
}
inline ::YellowPages::Name_Type Name::type() const {
  // @@protoc_insertion_point(field_get:YellowPages.Name.type)
  return static_cast< ::YellowPages::Name_Type >(type_);
}
inline void Name::set_type(::YellowPages::Name_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:YellowPages.Name.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace YellowPages

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::YellowPages::Name_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::YellowPages::Name_Type>() {
  return ::YellowPages::Name_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_name_2eproto