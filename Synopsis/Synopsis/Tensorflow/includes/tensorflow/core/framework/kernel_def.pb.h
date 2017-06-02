// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/kernel_def.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/attr_value.pb.h"
// @@protoc_insertion_point(includes)
namespace tensorflow {
class AttrValue;
class AttrValueDefaultTypeInternal;
extern AttrValueDefaultTypeInternal _AttrValue_default_instance_;
class AttrValue_ListValue;
class AttrValue_ListValueDefaultTypeInternal;
extern AttrValue_ListValueDefaultTypeInternal _AttrValue_ListValue_default_instance_;
class KernelDef;
class KernelDefDefaultTypeInternal;
extern KernelDefDefaultTypeInternal _KernelDef_default_instance_;
class KernelDef_AttrConstraint;
class KernelDef_AttrConstraintDefaultTypeInternal;
extern KernelDef_AttrConstraintDefaultTypeInternal _KernelDef_AttrConstraint_default_instance_;
class NameAttrList;
class NameAttrListDefaultTypeInternal;
extern NameAttrListDefaultTypeInternal _NameAttrList_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto

// ===================================================================

class KernelDef_AttrConstraint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.KernelDef.AttrConstraint) */ {
 public:
  KernelDef_AttrConstraint();
  virtual ~KernelDef_AttrConstraint();

  KernelDef_AttrConstraint(const KernelDef_AttrConstraint& from);

  inline KernelDef_AttrConstraint& operator=(const KernelDef_AttrConstraint& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const KernelDef_AttrConstraint& default_instance();

  static inline const KernelDef_AttrConstraint* internal_default_instance() {
    return reinterpret_cast<const KernelDef_AttrConstraint*>(
               &_KernelDef_AttrConstraint_default_instance_);
  }

  void UnsafeArenaSwap(KernelDef_AttrConstraint* other);
  void Swap(KernelDef_AttrConstraint* other);

  // implements Message ----------------------------------------------

  inline KernelDef_AttrConstraint* New() const PROTOBUF_FINAL { return New(NULL); }

  KernelDef_AttrConstraint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const KernelDef_AttrConstraint& from);
  void MergeFrom(const KernelDef_AttrConstraint& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(KernelDef_AttrConstraint* other);
  protected:
  explicit KernelDef_AttrConstraint(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // .tensorflow.AttrValue allowed_values = 2;
  bool has_allowed_values() const;
  void clear_allowed_values();
  static const int kAllowedValuesFieldNumber = 2;
  private:
  void _slow_mutable_allowed_values();
  void _slow_set_allocated_allowed_values(
      ::google::protobuf::Arena* message_arena, ::tensorflow::AttrValue** allowed_values);
  ::tensorflow::AttrValue* _slow_release_allowed_values();
  public:
  const ::tensorflow::AttrValue& allowed_values() const;
  ::tensorflow::AttrValue* mutable_allowed_values();
  ::tensorflow::AttrValue* release_allowed_values();
  void set_allocated_allowed_values(::tensorflow::AttrValue* allowed_values);
  ::tensorflow::AttrValue* unsafe_arena_release_allowed_values();
  void unsafe_arena_set_allocated_allowed_values(
      ::tensorflow::AttrValue* allowed_values);

  // @@protoc_insertion_point(class_scope:tensorflow.KernelDef.AttrConstraint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::AttrValue* allowed_values_;
  mutable int _cached_size_;
  friend struct  protobuf_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class KernelDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.KernelDef) */ {
 public:
  KernelDef();
  virtual ~KernelDef();

  KernelDef(const KernelDef& from);

  inline KernelDef& operator=(const KernelDef& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const KernelDef& default_instance();

  static inline const KernelDef* internal_default_instance() {
    return reinterpret_cast<const KernelDef*>(
               &_KernelDef_default_instance_);
  }

  void UnsafeArenaSwap(KernelDef* other);
  void Swap(KernelDef* other);

  // implements Message ----------------------------------------------

  inline KernelDef* New() const PROTOBUF_FINAL { return New(NULL); }

  KernelDef* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const KernelDef& from);
  void MergeFrom(const KernelDef& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(KernelDef* other);
  protected:
  explicit KernelDef(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef KernelDef_AttrConstraint AttrConstraint;

  // accessors -------------------------------------------------------

  // repeated .tensorflow.KernelDef.AttrConstraint constraint = 3;
  int constraint_size() const;
  void clear_constraint();
  static const int kConstraintFieldNumber = 3;
  const ::tensorflow::KernelDef_AttrConstraint& constraint(int index) const;
  ::tensorflow::KernelDef_AttrConstraint* mutable_constraint(int index);
  ::tensorflow::KernelDef_AttrConstraint* add_constraint();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::KernelDef_AttrConstraint >*
      mutable_constraint();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::KernelDef_AttrConstraint >&
      constraint() const;

  // repeated string host_memory_arg = 4;
  int host_memory_arg_size() const;
  void clear_host_memory_arg();
  static const int kHostMemoryArgFieldNumber = 4;
  const ::std::string& host_memory_arg(int index) const;
  ::std::string* mutable_host_memory_arg(int index);
  void set_host_memory_arg(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_host_memory_arg(int index, ::std::string&& value);
  #endif
  void set_host_memory_arg(int index, const char* value);
  void set_host_memory_arg(int index, const char* value, size_t size);
  ::std::string* add_host_memory_arg();
  void add_host_memory_arg(const ::std::string& value);
  #if LANG_CXX11
  void add_host_memory_arg(::std::string&& value);
  #endif
  void add_host_memory_arg(const char* value);
  void add_host_memory_arg(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& host_memory_arg() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_host_memory_arg();

  // string op = 1;
  void clear_op();
  static const int kOpFieldNumber = 1;
  const ::std::string& op() const;
  void set_op(const ::std::string& value);
  void set_op(const char* value);
  void set_op(const char* value, size_t size);
  ::std::string* mutable_op();
  ::std::string* release_op();
  void set_allocated_op(::std::string* op);
  ::std::string* unsafe_arena_release_op();
  void unsafe_arena_set_allocated_op(
      ::std::string* op);

  // string device_type = 2;
  void clear_device_type();
  static const int kDeviceTypeFieldNumber = 2;
  const ::std::string& device_type() const;
  void set_device_type(const ::std::string& value);
  void set_device_type(const char* value);
  void set_device_type(const char* value, size_t size);
  ::std::string* mutable_device_type();
  ::std::string* release_device_type();
  void set_allocated_device_type(::std::string* device_type);
  ::std::string* unsafe_arena_release_device_type();
  void unsafe_arena_set_allocated_device_type(
      ::std::string* device_type);

  // string label = 5;
  void clear_label();
  static const int kLabelFieldNumber = 5;
  const ::std::string& label() const;
  void set_label(const ::std::string& value);
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  ::std::string* mutable_label();
  ::std::string* release_label();
  void set_allocated_label(::std::string* label);
  ::std::string* unsafe_arena_release_label();
  void unsafe_arena_set_allocated_label(
      ::std::string* label);

  // @@protoc_insertion_point(class_scope:tensorflow.KernelDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::KernelDef_AttrConstraint > constraint_;
  ::google::protobuf::RepeatedPtrField< ::std::string> host_memory_arg_;
  ::google::protobuf::internal::ArenaStringPtr op_;
  ::google::protobuf::internal::ArenaStringPtr device_type_;
  ::google::protobuf::internal::ArenaStringPtr label_;
  mutable int _cached_size_;
  friend struct  protobuf_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// KernelDef_AttrConstraint

// string name = 1;
inline void KernelDef_AttrConstraint::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& KernelDef_AttrConstraint::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.AttrConstraint.name)
  return name_.Get();
}
inline void KernelDef_AttrConstraint::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.KernelDef.AttrConstraint.name)
}
inline void KernelDef_AttrConstraint::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.KernelDef.AttrConstraint.name)
}
inline void KernelDef_AttrConstraint::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.KernelDef.AttrConstraint.name)
}
inline ::std::string* KernelDef_AttrConstraint::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.AttrConstraint.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef_AttrConstraint::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.KernelDef.AttrConstraint.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef_AttrConstraint::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.KernelDef.AttrConstraint.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void KernelDef_AttrConstraint::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.KernelDef.AttrConstraint.name)
}
inline void KernelDef_AttrConstraint::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.KernelDef.AttrConstraint.name)
}

// .tensorflow.AttrValue allowed_values = 2;
inline bool KernelDef_AttrConstraint::has_allowed_values() const {
  return this != internal_default_instance() && allowed_values_ != NULL;
}
inline void KernelDef_AttrConstraint::clear_allowed_values() {
  if (GetArenaNoVirtual() == NULL && allowed_values_ != NULL) delete allowed_values_;
  allowed_values_ = NULL;
}
inline const ::tensorflow::AttrValue& KernelDef_AttrConstraint::allowed_values() const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.AttrConstraint.allowed_values)
  return allowed_values_ != NULL ? *allowed_values_
                         : *::tensorflow::AttrValue::internal_default_instance();
}
inline ::tensorflow::AttrValue* KernelDef_AttrConstraint::mutable_allowed_values() {
  
  if (allowed_values_ == NULL) {
    _slow_mutable_allowed_values();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.AttrConstraint.allowed_values)
  return allowed_values_;
}
inline ::tensorflow::AttrValue* KernelDef_AttrConstraint::release_allowed_values() {
  // @@protoc_insertion_point(field_release:tensorflow.KernelDef.AttrConstraint.allowed_values)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_allowed_values();
  } else {
    ::tensorflow::AttrValue* temp = allowed_values_;
    allowed_values_ = NULL;
    return temp;
  }
}
inline  void KernelDef_AttrConstraint::set_allocated_allowed_values(::tensorflow::AttrValue* allowed_values) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete allowed_values_;
  }
  if (allowed_values != NULL) {
    _slow_set_allocated_allowed_values(message_arena, &allowed_values);
  }
  allowed_values_ = allowed_values;
  if (allowed_values) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.KernelDef.AttrConstraint.allowed_values)
}

// -------------------------------------------------------------------

// KernelDef

// string op = 1;
inline void KernelDef::clear_op() {
  op_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& KernelDef::op() const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.op)
  return op_.Get();
}
inline void KernelDef::set_op(const ::std::string& value) {
  
  op_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.KernelDef.op)
}
inline void KernelDef::set_op(const char* value) {
  
  op_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.KernelDef.op)
}
inline void KernelDef::set_op(const char* value,
    size_t size) {
  
  op_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.KernelDef.op)
}
inline ::std::string* KernelDef::mutable_op() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.op)
  return op_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef::release_op() {
  // @@protoc_insertion_point(field_release:tensorflow.KernelDef.op)
  
  return op_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef::unsafe_arena_release_op() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.KernelDef.op)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return op_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void KernelDef::set_allocated_op(::std::string* op) {
  if (op != NULL) {
    
  } else {
    
  }
  op_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), op,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.KernelDef.op)
}
inline void KernelDef::unsafe_arena_set_allocated_op(
    ::std::string* op) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (op != NULL) {
    
  } else {
    
  }
  op_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      op, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.KernelDef.op)
}

// string device_type = 2;
inline void KernelDef::clear_device_type() {
  device_type_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& KernelDef::device_type() const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.device_type)
  return device_type_.Get();
}
inline void KernelDef::set_device_type(const ::std::string& value) {
  
  device_type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.KernelDef.device_type)
}
inline void KernelDef::set_device_type(const char* value) {
  
  device_type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.KernelDef.device_type)
}
inline void KernelDef::set_device_type(const char* value,
    size_t size) {
  
  device_type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.KernelDef.device_type)
}
inline ::std::string* KernelDef::mutable_device_type() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.device_type)
  return device_type_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef::release_device_type() {
  // @@protoc_insertion_point(field_release:tensorflow.KernelDef.device_type)
  
  return device_type_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef::unsafe_arena_release_device_type() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.KernelDef.device_type)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_type_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void KernelDef::set_allocated_device_type(::std::string* device_type) {
  if (device_type != NULL) {
    
  } else {
    
  }
  device_type_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_type,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.KernelDef.device_type)
}
inline void KernelDef::unsafe_arena_set_allocated_device_type(
    ::std::string* device_type) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device_type != NULL) {
    
  } else {
    
  }
  device_type_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device_type, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.KernelDef.device_type)
}

// repeated .tensorflow.KernelDef.AttrConstraint constraint = 3;
inline int KernelDef::constraint_size() const {
  return constraint_.size();
}
inline void KernelDef::clear_constraint() {
  constraint_.Clear();
}
inline const ::tensorflow::KernelDef_AttrConstraint& KernelDef::constraint(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.constraint)
  return constraint_.Get(index);
}
inline ::tensorflow::KernelDef_AttrConstraint* KernelDef::mutable_constraint(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.constraint)
  return constraint_.Mutable(index);
}
inline ::tensorflow::KernelDef_AttrConstraint* KernelDef::add_constraint() {
  // @@protoc_insertion_point(field_add:tensorflow.KernelDef.constraint)
  return constraint_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::KernelDef_AttrConstraint >*
KernelDef::mutable_constraint() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.KernelDef.constraint)
  return &constraint_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::KernelDef_AttrConstraint >&
KernelDef::constraint() const {
  // @@protoc_insertion_point(field_list:tensorflow.KernelDef.constraint)
  return constraint_;
}

// repeated string host_memory_arg = 4;
inline int KernelDef::host_memory_arg_size() const {
  return host_memory_arg_.size();
}
inline void KernelDef::clear_host_memory_arg() {
  host_memory_arg_.Clear();
}
inline const ::std::string& KernelDef::host_memory_arg(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.host_memory_arg)
  return host_memory_arg_.Get(index);
}
inline ::std::string* KernelDef::mutable_host_memory_arg(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.host_memory_arg)
  return host_memory_arg_.Mutable(index);
}
inline void KernelDef::set_host_memory_arg(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.KernelDef.host_memory_arg)
  host_memory_arg_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void KernelDef::set_host_memory_arg(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.KernelDef.host_memory_arg)
  host_memory_arg_.Mutable(index)->assign(std::move(value));
}
#endif
inline void KernelDef::set_host_memory_arg(int index, const char* value) {
  host_memory_arg_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.KernelDef.host_memory_arg)
}
inline void KernelDef::set_host_memory_arg(int index, const char* value, size_t size) {
  host_memory_arg_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.KernelDef.host_memory_arg)
}
inline ::std::string* KernelDef::add_host_memory_arg() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.KernelDef.host_memory_arg)
  return host_memory_arg_.Add();
}
inline void KernelDef::add_host_memory_arg(const ::std::string& value) {
  host_memory_arg_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.KernelDef.host_memory_arg)
}
#if LANG_CXX11
inline void KernelDef::add_host_memory_arg(::std::string&& value) {
  host_memory_arg_.Add()->assign(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.KernelDef.host_memory_arg)
}
#endif
inline void KernelDef::add_host_memory_arg(const char* value) {
  host_memory_arg_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.KernelDef.host_memory_arg)
}
inline void KernelDef::add_host_memory_arg(const char* value, size_t size) {
  host_memory_arg_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.KernelDef.host_memory_arg)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
KernelDef::host_memory_arg() const {
  // @@protoc_insertion_point(field_list:tensorflow.KernelDef.host_memory_arg)
  return host_memory_arg_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
KernelDef::mutable_host_memory_arg() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.KernelDef.host_memory_arg)
  return &host_memory_arg_;
}

// string label = 5;
inline void KernelDef::clear_label() {
  label_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& KernelDef::label() const {
  // @@protoc_insertion_point(field_get:tensorflow.KernelDef.label)
  return label_.Get();
}
inline void KernelDef::set_label(const ::std::string& value) {
  
  label_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.KernelDef.label)
}
inline void KernelDef::set_label(const char* value) {
  
  label_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.KernelDef.label)
}
inline void KernelDef::set_label(const char* value,
    size_t size) {
  
  label_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.KernelDef.label)
}
inline ::std::string* KernelDef::mutable_label() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.KernelDef.label)
  return label_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef::release_label() {
  // @@protoc_insertion_point(field_release:tensorflow.KernelDef.label)
  
  return label_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* KernelDef::unsafe_arena_release_label() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.KernelDef.label)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return label_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void KernelDef::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    
  } else {
    
  }
  label_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.KernelDef.label)
}
inline void KernelDef::unsafe_arena_set_allocated_label(
    ::std::string* label) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (label != NULL) {
    
  } else {
    
  }
  label_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      label, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.KernelDef.label)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2fkernel_5fdef_2eproto__INCLUDED
