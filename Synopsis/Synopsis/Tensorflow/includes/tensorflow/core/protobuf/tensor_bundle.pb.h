// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensor_bundle.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/tensor_slice.pb.h"
#include "tensorflow/core/framework/types.pb.h"
#include "tensorflow/core/framework/versions.pb.h"
// @@protoc_insertion_point(includes)
namespace tensorflow {
class BundleEntryProto;
class BundleEntryProtoDefaultTypeInternal;
extern BundleEntryProtoDefaultTypeInternal _BundleEntryProto_default_instance_;
class BundleHeaderProto;
class BundleHeaderProtoDefaultTypeInternal;
extern BundleHeaderProtoDefaultTypeInternal _BundleHeaderProto_default_instance_;
class TensorShapeProto;
class TensorShapeProtoDefaultTypeInternal;
extern TensorShapeProtoDefaultTypeInternal _TensorShapeProto_default_instance_;
class TensorShapeProto_Dim;
class TensorShapeProto_DimDefaultTypeInternal;
extern TensorShapeProto_DimDefaultTypeInternal _TensorShapeProto_Dim_default_instance_;
class TensorSliceProto;
class TensorSliceProtoDefaultTypeInternal;
extern TensorSliceProtoDefaultTypeInternal _TensorSliceProto_default_instance_;
class TensorSliceProto_Extent;
class TensorSliceProto_ExtentDefaultTypeInternal;
extern TensorSliceProto_ExtentDefaultTypeInternal _TensorSliceProto_Extent_default_instance_;
class VersionDef;
class VersionDefDefaultTypeInternal;
extern VersionDefDefaultTypeInternal _VersionDef_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto

enum BundleHeaderProto_Endianness {
  BundleHeaderProto_Endianness_LITTLE = 0,
  BundleHeaderProto_Endianness_BIG = 1,
  BundleHeaderProto_Endianness_BundleHeaderProto_Endianness_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  BundleHeaderProto_Endianness_BundleHeaderProto_Endianness_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool BundleHeaderProto_Endianness_IsValid(int value);
const BundleHeaderProto_Endianness BundleHeaderProto_Endianness_Endianness_MIN = BundleHeaderProto_Endianness_LITTLE;
const BundleHeaderProto_Endianness BundleHeaderProto_Endianness_Endianness_MAX = BundleHeaderProto_Endianness_BIG;
const int BundleHeaderProto_Endianness_Endianness_ARRAYSIZE = BundleHeaderProto_Endianness_Endianness_MAX + 1;

const ::google::protobuf::EnumDescriptor* BundleHeaderProto_Endianness_descriptor();
inline const ::std::string& BundleHeaderProto_Endianness_Name(BundleHeaderProto_Endianness value) {
  return ::google::protobuf::internal::NameOfEnum(
    BundleHeaderProto_Endianness_descriptor(), value);
}
inline bool BundleHeaderProto_Endianness_Parse(
    const ::std::string& name, BundleHeaderProto_Endianness* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BundleHeaderProto_Endianness>(
    BundleHeaderProto_Endianness_descriptor(), name, value);
}
// ===================================================================

class BundleHeaderProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.BundleHeaderProto) */ {
 public:
  BundleHeaderProto();
  virtual ~BundleHeaderProto();

  BundleHeaderProto(const BundleHeaderProto& from);

  inline BundleHeaderProto& operator=(const BundleHeaderProto& from) {
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
  static const BundleHeaderProto& default_instance();

  static inline const BundleHeaderProto* internal_default_instance() {
    return reinterpret_cast<const BundleHeaderProto*>(
               &_BundleHeaderProto_default_instance_);
  }

  void UnsafeArenaSwap(BundleHeaderProto* other);
  void Swap(BundleHeaderProto* other);

  // implements Message ----------------------------------------------

  inline BundleHeaderProto* New() const PROTOBUF_FINAL { return New(NULL); }

  BundleHeaderProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BundleHeaderProto& from);
  void MergeFrom(const BundleHeaderProto& from);
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
  void InternalSwap(BundleHeaderProto* other);
  protected:
  explicit BundleHeaderProto(::google::protobuf::Arena* arena);
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

  typedef BundleHeaderProto_Endianness Endianness;
  static const Endianness LITTLE =
    BundleHeaderProto_Endianness_LITTLE;
  static const Endianness BIG =
    BundleHeaderProto_Endianness_BIG;
  static inline bool Endianness_IsValid(int value) {
    return BundleHeaderProto_Endianness_IsValid(value);
  }
  static const Endianness Endianness_MIN =
    BundleHeaderProto_Endianness_Endianness_MIN;
  static const Endianness Endianness_MAX =
    BundleHeaderProto_Endianness_Endianness_MAX;
  static const int Endianness_ARRAYSIZE =
    BundleHeaderProto_Endianness_Endianness_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Endianness_descriptor() {
    return BundleHeaderProto_Endianness_descriptor();
  }
  static inline const ::std::string& Endianness_Name(Endianness value) {
    return BundleHeaderProto_Endianness_Name(value);
  }
  static inline bool Endianness_Parse(const ::std::string& name,
      Endianness* value) {
    return BundleHeaderProto_Endianness_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .tensorflow.VersionDef version = 3;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  private:
  void _slow_mutable_version();
  void _slow_set_allocated_version(
      ::google::protobuf::Arena* message_arena, ::tensorflow::VersionDef** version);
  ::tensorflow::VersionDef* _slow_release_version();
  public:
  const ::tensorflow::VersionDef& version() const;
  ::tensorflow::VersionDef* mutable_version();
  ::tensorflow::VersionDef* release_version();
  void set_allocated_version(::tensorflow::VersionDef* version);
  ::tensorflow::VersionDef* unsafe_arena_release_version();
  void unsafe_arena_set_allocated_version(
      ::tensorflow::VersionDef* version);

  // int32 num_shards = 1;
  void clear_num_shards();
  static const int kNumShardsFieldNumber = 1;
  ::google::protobuf::int32 num_shards() const;
  void set_num_shards(::google::protobuf::int32 value);

  // .tensorflow.BundleHeaderProto.Endianness endianness = 2;
  void clear_endianness();
  static const int kEndiannessFieldNumber = 2;
  ::tensorflow::BundleHeaderProto_Endianness endianness() const;
  void set_endianness(::tensorflow::BundleHeaderProto_Endianness value);

  // @@protoc_insertion_point(class_scope:tensorflow.BundleHeaderProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::VersionDef* version_;
  ::google::protobuf::int32 num_shards_;
  int endianness_;
  mutable int _cached_size_;
  friend struct  protobuf_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BundleEntryProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.BundleEntryProto) */ {
 public:
  BundleEntryProto();
  virtual ~BundleEntryProto();

  BundleEntryProto(const BundleEntryProto& from);

  inline BundleEntryProto& operator=(const BundleEntryProto& from) {
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
  static const BundleEntryProto& default_instance();

  static inline const BundleEntryProto* internal_default_instance() {
    return reinterpret_cast<const BundleEntryProto*>(
               &_BundleEntryProto_default_instance_);
  }

  void UnsafeArenaSwap(BundleEntryProto* other);
  void Swap(BundleEntryProto* other);

  // implements Message ----------------------------------------------

  inline BundleEntryProto* New() const PROTOBUF_FINAL { return New(NULL); }

  BundleEntryProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BundleEntryProto& from);
  void MergeFrom(const BundleEntryProto& from);
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
  void InternalSwap(BundleEntryProto* other);
  protected:
  explicit BundleEntryProto(::google::protobuf::Arena* arena);
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

  // repeated .tensorflow.TensorSliceProto slices = 7;
  int slices_size() const;
  void clear_slices();
  static const int kSlicesFieldNumber = 7;
  const ::tensorflow::TensorSliceProto& slices(int index) const;
  ::tensorflow::TensorSliceProto* mutable_slices(int index);
  ::tensorflow::TensorSliceProto* add_slices();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
      mutable_slices();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
      slices() const;

  // .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 2;
  private:
  void _slow_mutable_shape();
  void _slow_set_allocated_shape(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorShapeProto** shape);
  ::tensorflow::TensorShapeProto* _slow_release_shape();
  public:
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* mutable_shape();
  ::tensorflow::TensorShapeProto* release_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  static const int kDtypeFieldNumber = 1;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // int32 shard_id = 3;
  void clear_shard_id();
  static const int kShardIdFieldNumber = 3;
  ::google::protobuf::int32 shard_id() const;
  void set_shard_id(::google::protobuf::int32 value);

  // int64 offset = 4;
  void clear_offset();
  static const int kOffsetFieldNumber = 4;
  ::google::protobuf::int64 offset() const;
  void set_offset(::google::protobuf::int64 value);

  // int64 size = 5;
  void clear_size();
  static const int kSizeFieldNumber = 5;
  ::google::protobuf::int64 size() const;
  void set_size(::google::protobuf::int64 value);

  // fixed32 crc32c = 6;
  void clear_crc32c();
  static const int kCrc32CFieldNumber = 6;
  ::google::protobuf::uint32 crc32c() const;
  void set_crc32c(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.BundleEntryProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto > slices_;
  ::tensorflow::TensorShapeProto* shape_;
  int dtype_;
  ::google::protobuf::int32 shard_id_;
  ::google::protobuf::int64 offset_;
  ::google::protobuf::int64 size_;
  ::google::protobuf::uint32 crc32c_;
  mutable int _cached_size_;
  friend struct  protobuf_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BundleHeaderProto

// int32 num_shards = 1;
inline void BundleHeaderProto::clear_num_shards() {
  num_shards_ = 0;
}
inline ::google::protobuf::int32 BundleHeaderProto::num_shards() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleHeaderProto.num_shards)
  return num_shards_;
}
inline void BundleHeaderProto::set_num_shards(::google::protobuf::int32 value) {
  
  num_shards_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleHeaderProto.num_shards)
}

// .tensorflow.BundleHeaderProto.Endianness endianness = 2;
inline void BundleHeaderProto::clear_endianness() {
  endianness_ = 0;
}
inline ::tensorflow::BundleHeaderProto_Endianness BundleHeaderProto::endianness() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleHeaderProto.endianness)
  return static_cast< ::tensorflow::BundleHeaderProto_Endianness >(endianness_);
}
inline void BundleHeaderProto::set_endianness(::tensorflow::BundleHeaderProto_Endianness value) {
  
  endianness_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleHeaderProto.endianness)
}

// .tensorflow.VersionDef version = 3;
inline bool BundleHeaderProto::has_version() const {
  return this != internal_default_instance() && version_ != NULL;
}
inline void BundleHeaderProto::clear_version() {
  if (GetArenaNoVirtual() == NULL && version_ != NULL) delete version_;
  version_ = NULL;
}
inline const ::tensorflow::VersionDef& BundleHeaderProto::version() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleHeaderProto.version)
  return version_ != NULL ? *version_
                         : *::tensorflow::VersionDef::internal_default_instance();
}
inline ::tensorflow::VersionDef* BundleHeaderProto::mutable_version() {
  
  if (version_ == NULL) {
    _slow_mutable_version();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.BundleHeaderProto.version)
  return version_;
}
inline ::tensorflow::VersionDef* BundleHeaderProto::release_version() {
  // @@protoc_insertion_point(field_release:tensorflow.BundleHeaderProto.version)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_version();
  } else {
    ::tensorflow::VersionDef* temp = version_;
    version_ = NULL;
    return temp;
  }
}
inline  void BundleHeaderProto::set_allocated_version(::tensorflow::VersionDef* version) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete version_;
  }
  if (version != NULL) {
    _slow_set_allocated_version(message_arena, &version);
  }
  version_ = version;
  if (version) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.BundleHeaderProto.version)
}

// -------------------------------------------------------------------

// BundleEntryProto

// .tensorflow.DataType dtype = 1;
inline void BundleEntryProto::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType BundleEntryProto::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void BundleEntryProto::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.dtype)
}

// .tensorflow.TensorShapeProto shape = 2;
inline bool BundleEntryProto::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline void BundleEntryProto::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) delete shape_;
  shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& BundleEntryProto::shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.shape)
  return shape_ != NULL ? *shape_
                         : *::tensorflow::TensorShapeProto::internal_default_instance();
}
inline ::tensorflow::TensorShapeProto* BundleEntryProto::mutable_shape() {
  
  if (shape_ == NULL) {
    _slow_mutable_shape();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.BundleEntryProto.shape)
  return shape_;
}
inline ::tensorflow::TensorShapeProto* BundleEntryProto::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.BundleEntryProto.shape)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_shape();
  } else {
    ::tensorflow::TensorShapeProto* temp = shape_;
    shape_ = NULL;
    return temp;
  }
}
inline  void BundleEntryProto::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete shape_;
  }
  if (shape != NULL) {
    _slow_set_allocated_shape(message_arena, &shape);
  }
  shape_ = shape;
  if (shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.BundleEntryProto.shape)
}

// int32 shard_id = 3;
inline void BundleEntryProto::clear_shard_id() {
  shard_id_ = 0;
}
inline ::google::protobuf::int32 BundleEntryProto::shard_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.shard_id)
  return shard_id_;
}
inline void BundleEntryProto::set_shard_id(::google::protobuf::int32 value) {
  
  shard_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.shard_id)
}

// int64 offset = 4;
inline void BundleEntryProto::clear_offset() {
  offset_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 BundleEntryProto::offset() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.offset)
  return offset_;
}
inline void BundleEntryProto::set_offset(::google::protobuf::int64 value) {
  
  offset_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.offset)
}

// int64 size = 5;
inline void BundleEntryProto::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 BundleEntryProto::size() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.size)
  return size_;
}
inline void BundleEntryProto::set_size(::google::protobuf::int64 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.size)
}

// fixed32 crc32c = 6;
inline void BundleEntryProto::clear_crc32c() {
  crc32c_ = 0u;
}
inline ::google::protobuf::uint32 BundleEntryProto::crc32c() const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.crc32c)
  return crc32c_;
}
inline void BundleEntryProto::set_crc32c(::google::protobuf::uint32 value) {
  
  crc32c_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.BundleEntryProto.crc32c)
}

// repeated .tensorflow.TensorSliceProto slices = 7;
inline int BundleEntryProto::slices_size() const {
  return slices_.size();
}
inline void BundleEntryProto::clear_slices() {
  slices_.Clear();
}
inline const ::tensorflow::TensorSliceProto& BundleEntryProto::slices(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.BundleEntryProto.slices)
  return slices_.Get(index);
}
inline ::tensorflow::TensorSliceProto* BundleEntryProto::mutable_slices(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.BundleEntryProto.slices)
  return slices_.Mutable(index);
}
inline ::tensorflow::TensorSliceProto* BundleEntryProto::add_slices() {
  // @@protoc_insertion_point(field_add:tensorflow.BundleEntryProto.slices)
  return slices_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
BundleEntryProto::mutable_slices() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.BundleEntryProto.slices)
  return &slices_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
BundleEntryProto::slices() const {
  // @@protoc_insertion_point(field_list:tensorflow.BundleEntryProto.slices)
  return slices_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::BundleHeaderProto_Endianness> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::BundleHeaderProto_Endianness>() {
  return ::tensorflow::BundleHeaderProto_Endianness_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fprotobuf_2ftensor_5fbundle_2eproto__INCLUDED
