// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/sc3d/triangle_mesh.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
#include "standard_cyborg/proto/math/tensor.pb.h"
#include "standard_cyborg/proto/sc3d/image.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto;
namespace standard_cyborg {
namespace proto {
namespace sc3d {
class TriangleMesh;
class TriangleMeshDefaultTypeInternal;
extern TriangleMeshDefaultTypeInternal _TriangleMesh_default_instance_;
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> ::standard_cyborg::proto::sc3d::TriangleMesh* Arena::CreateMaybeMessage<::standard_cyborg::proto::sc3d::TriangleMesh>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace standard_cyborg {
namespace proto {
namespace sc3d {

// ===================================================================

class TriangleMesh :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:standard_cyborg.proto.sc3d.TriangleMesh) */ {
 public:
  TriangleMesh();
  virtual ~TriangleMesh();

  TriangleMesh(const TriangleMesh& from);
  TriangleMesh(TriangleMesh&& from) noexcept
    : TriangleMesh() {
    *this = ::std::move(from);
  }

  inline TriangleMesh& operator=(const TriangleMesh& from) {
    CopyFrom(from);
    return *this;
  }
  inline TriangleMesh& operator=(TriangleMesh&& from) noexcept {
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
  static const TriangleMesh& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TriangleMesh* internal_default_instance() {
    return reinterpret_cast<const TriangleMesh*>(
               &_TriangleMesh_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TriangleMesh& a, TriangleMesh& b) {
    a.Swap(&b);
  }
  inline void Swap(TriangleMesh* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TriangleMesh* New() const final {
    return CreateMaybeMessage<TriangleMesh>(nullptr);
  }

  TriangleMesh* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TriangleMesh>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TriangleMesh& from);
  void MergeFrom(const TriangleMesh& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TriangleMesh* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "standard_cyborg.proto.sc3d.TriangleMesh";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto);
    return ::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFrameFieldNumber = 1,
    kPositionsFieldNumber = 2,
    kNormalsFieldNumber = 3,
    kColorsFieldNumber = 4,
    kTexCoordsFieldNumber = 5,
    kFacesFieldNumber = 6,
    kTextureFieldNumber = 7,
    kDistanceValuesFieldNumber = 9,
  };
  // string frame = 1;
  void clear_frame();
  const std::string& frame() const;
  void set_frame(const std::string& value);
  void set_frame(std::string&& value);
  void set_frame(const char* value);
  void set_frame(const char* value, size_t size);
  std::string* mutable_frame();
  std::string* release_frame();
  void set_allocated_frame(std::string* frame);
  private:
  const std::string& _internal_frame() const;
  void _internal_set_frame(const std::string& value);
  std::string* _internal_mutable_frame();
  public:

  // .standard_cyborg.proto.math.Tensor positions = 2;
  bool has_positions() const;
  private:
  bool _internal_has_positions() const;
  public:
  void clear_positions();
  const ::standard_cyborg::proto::math::Tensor& positions() const;
  ::standard_cyborg::proto::math::Tensor* release_positions();
  ::standard_cyborg::proto::math::Tensor* mutable_positions();
  void set_allocated_positions(::standard_cyborg::proto::math::Tensor* positions);
  private:
  const ::standard_cyborg::proto::math::Tensor& _internal_positions() const;
  ::standard_cyborg::proto::math::Tensor* _internal_mutable_positions();
  public:

  // .standard_cyborg.proto.math.Tensor normals = 3;
  bool has_normals() const;
  private:
  bool _internal_has_normals() const;
  public:
  void clear_normals();
  const ::standard_cyborg::proto::math::Tensor& normals() const;
  ::standard_cyborg::proto::math::Tensor* release_normals();
  ::standard_cyborg::proto::math::Tensor* mutable_normals();
  void set_allocated_normals(::standard_cyborg::proto::math::Tensor* normals);
  private:
  const ::standard_cyborg::proto::math::Tensor& _internal_normals() const;
  ::standard_cyborg::proto::math::Tensor* _internal_mutable_normals();
  public:

  // .standard_cyborg.proto.math.Tensor colors = 4;
  bool has_colors() const;
  private:
  bool _internal_has_colors() const;
  public:
  void clear_colors();
  const ::standard_cyborg::proto::math::Tensor& colors() const;
  ::standard_cyborg::proto::math::Tensor* release_colors();
  ::standard_cyborg::proto::math::Tensor* mutable_colors();
  void set_allocated_colors(::standard_cyborg::proto::math::Tensor* colors);
  private:
  const ::standard_cyborg::proto::math::Tensor& _internal_colors() const;
  ::standard_cyborg::proto::math::Tensor* _internal_mutable_colors();
  public:

  // .standard_cyborg.proto.math.Tensor tex_coords = 5;
  bool has_tex_coords() const;
  private:
  bool _internal_has_tex_coords() const;
  public:
  void clear_tex_coords();
  const ::standard_cyborg::proto::math::Tensor& tex_coords() const;
  ::standard_cyborg::proto::math::Tensor* release_tex_coords();
  ::standard_cyborg::proto::math::Tensor* mutable_tex_coords();
  void set_allocated_tex_coords(::standard_cyborg::proto::math::Tensor* tex_coords);
  private:
  const ::standard_cyborg::proto::math::Tensor& _internal_tex_coords() const;
  ::standard_cyborg::proto::math::Tensor* _internal_mutable_tex_coords();
  public:

  // .standard_cyborg.proto.math.Tensor faces = 6;
  bool has_faces() const;
  private:
  bool _internal_has_faces() const;
  public:
  void clear_faces();
  const ::standard_cyborg::proto::math::Tensor& faces() const;
  ::standard_cyborg::proto::math::Tensor* release_faces();
  ::standard_cyborg::proto::math::Tensor* mutable_faces();
  void set_allocated_faces(::standard_cyborg::proto::math::Tensor* faces);
  private:
  const ::standard_cyborg::proto::math::Tensor& _internal_faces() const;
  ::standard_cyborg::proto::math::Tensor* _internal_mutable_faces();
  public:

  // .standard_cyborg.proto.sc3d.Image texture = 7;
  bool has_texture() const;
  private:
  bool _internal_has_texture() const;
  public:
  void clear_texture();
  const ::standard_cyborg::proto::sc3d::Image& texture() const;
  ::standard_cyborg::proto::sc3d::Image* release_texture();
  ::standard_cyborg::proto::sc3d::Image* mutable_texture();
  void set_allocated_texture(::standard_cyborg::proto::sc3d::Image* texture);
  private:
  const ::standard_cyborg::proto::sc3d::Image& _internal_texture() const;
  ::standard_cyborg::proto::sc3d::Image* _internal_mutable_texture();
  public:

  // .standard_cyborg.proto.math.Tensor distance_values = 9;
  bool has_distance_values() const;
  private:
  bool _internal_has_distance_values() const;
  public:
  void clear_distance_values();
  const ::standard_cyborg::proto::math::Tensor& distance_values() const;
  ::standard_cyborg::proto::math::Tensor* release_distance_values();
  ::standard_cyborg::proto::math::Tensor* mutable_distance_values();
  void set_allocated_distance_values(::standard_cyborg::proto::math::Tensor* distance_values);
  private:
  const ::standard_cyborg::proto::math::Tensor& _internal_distance_values() const;
  ::standard_cyborg::proto::math::Tensor* _internal_mutable_distance_values();
  public:

  // @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.TriangleMesh)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_;
  ::standard_cyborg::proto::math::Tensor* positions_;
  ::standard_cyborg::proto::math::Tensor* normals_;
  ::standard_cyborg::proto::math::Tensor* colors_;
  ::standard_cyborg::proto::math::Tensor* tex_coords_;
  ::standard_cyborg::proto::math::Tensor* faces_;
  ::standard_cyborg::proto::sc3d::Image* texture_;
  ::standard_cyborg::proto::math::Tensor* distance_values_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TriangleMesh

// string frame = 1;
inline void TriangleMesh::clear_frame() {
  frame_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TriangleMesh::frame() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.frame)
  return _internal_frame();
}
inline void TriangleMesh::set_frame(const std::string& value) {
  _internal_set_frame(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.TriangleMesh.frame)
}
inline std::string* TriangleMesh::mutable_frame() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.frame)
  return _internal_mutable_frame();
}
inline const std::string& TriangleMesh::_internal_frame() const {
  return frame_.GetNoArena();
}
inline void TriangleMesh::_internal_set_frame(const std::string& value) {
  
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TriangleMesh::set_frame(std::string&& value) {
  
  frame_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:standard_cyborg.proto.sc3d.TriangleMesh.frame)
}
inline void TriangleMesh::set_frame(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:standard_cyborg.proto.sc3d.TriangleMesh.frame)
}
inline void TriangleMesh::set_frame(const char* value, size_t size) {
  
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:standard_cyborg.proto.sc3d.TriangleMesh.frame)
}
inline std::string* TriangleMesh::_internal_mutable_frame() {
  
  return frame_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TriangleMesh::release_frame() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.frame)
  
  return frame_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TriangleMesh::set_allocated_frame(std::string* frame) {
  if (frame != nullptr) {
    
  } else {
    
  }
  frame_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frame);
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.frame)
}

// .standard_cyborg.proto.math.Tensor positions = 2;
inline bool TriangleMesh::_internal_has_positions() const {
  return this != internal_default_instance() && positions_ != nullptr;
}
inline bool TriangleMesh::has_positions() const {
  return _internal_has_positions();
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::_internal_positions() const {
  const ::standard_cyborg::proto::math::Tensor* p = positions_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Tensor*>(
      &::standard_cyborg::proto::math::_Tensor_default_instance_);
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::positions() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.positions)
  return _internal_positions();
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::release_positions() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.positions)
  
  ::standard_cyborg::proto::math::Tensor* temp = positions_;
  positions_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::_internal_mutable_positions() {
  
  if (positions_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Tensor>(GetArenaNoVirtual());
    positions_ = p;
  }
  return positions_;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::mutable_positions() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.positions)
  return _internal_mutable_positions();
}
inline void TriangleMesh::set_allocated_positions(::standard_cyborg::proto::math::Tensor* positions) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(positions_);
  }
  if (positions) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      positions = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, positions, submessage_arena);
    }
    
  } else {
    
  }
  positions_ = positions;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.positions)
}

// .standard_cyborg.proto.math.Tensor normals = 3;
inline bool TriangleMesh::_internal_has_normals() const {
  return this != internal_default_instance() && normals_ != nullptr;
}
inline bool TriangleMesh::has_normals() const {
  return _internal_has_normals();
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::_internal_normals() const {
  const ::standard_cyborg::proto::math::Tensor* p = normals_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Tensor*>(
      &::standard_cyborg::proto::math::_Tensor_default_instance_);
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::normals() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.normals)
  return _internal_normals();
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::release_normals() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.normals)
  
  ::standard_cyborg::proto::math::Tensor* temp = normals_;
  normals_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::_internal_mutable_normals() {
  
  if (normals_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Tensor>(GetArenaNoVirtual());
    normals_ = p;
  }
  return normals_;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::mutable_normals() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.normals)
  return _internal_mutable_normals();
}
inline void TriangleMesh::set_allocated_normals(::standard_cyborg::proto::math::Tensor* normals) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(normals_);
  }
  if (normals) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      normals = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, normals, submessage_arena);
    }
    
  } else {
    
  }
  normals_ = normals;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.normals)
}

// .standard_cyborg.proto.math.Tensor colors = 4;
inline bool TriangleMesh::_internal_has_colors() const {
  return this != internal_default_instance() && colors_ != nullptr;
}
inline bool TriangleMesh::has_colors() const {
  return _internal_has_colors();
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::_internal_colors() const {
  const ::standard_cyborg::proto::math::Tensor* p = colors_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Tensor*>(
      &::standard_cyborg::proto::math::_Tensor_default_instance_);
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::colors() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.colors)
  return _internal_colors();
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::release_colors() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.colors)
  
  ::standard_cyborg::proto::math::Tensor* temp = colors_;
  colors_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::_internal_mutable_colors() {
  
  if (colors_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Tensor>(GetArenaNoVirtual());
    colors_ = p;
  }
  return colors_;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::mutable_colors() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.colors)
  return _internal_mutable_colors();
}
inline void TriangleMesh::set_allocated_colors(::standard_cyborg::proto::math::Tensor* colors) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(colors_);
  }
  if (colors) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      colors = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, colors, submessage_arena);
    }
    
  } else {
    
  }
  colors_ = colors;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.colors)
}

// .standard_cyborg.proto.math.Tensor tex_coords = 5;
inline bool TriangleMesh::_internal_has_tex_coords() const {
  return this != internal_default_instance() && tex_coords_ != nullptr;
}
inline bool TriangleMesh::has_tex_coords() const {
  return _internal_has_tex_coords();
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::_internal_tex_coords() const {
  const ::standard_cyborg::proto::math::Tensor* p = tex_coords_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Tensor*>(
      &::standard_cyborg::proto::math::_Tensor_default_instance_);
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::tex_coords() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.tex_coords)
  return _internal_tex_coords();
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::release_tex_coords() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.tex_coords)
  
  ::standard_cyborg::proto::math::Tensor* temp = tex_coords_;
  tex_coords_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::_internal_mutable_tex_coords() {
  
  if (tex_coords_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Tensor>(GetArenaNoVirtual());
    tex_coords_ = p;
  }
  return tex_coords_;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::mutable_tex_coords() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.tex_coords)
  return _internal_mutable_tex_coords();
}
inline void TriangleMesh::set_allocated_tex_coords(::standard_cyborg::proto::math::Tensor* tex_coords) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(tex_coords_);
  }
  if (tex_coords) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      tex_coords = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, tex_coords, submessage_arena);
    }
    
  } else {
    
  }
  tex_coords_ = tex_coords;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.tex_coords)
}

// .standard_cyborg.proto.math.Tensor faces = 6;
inline bool TriangleMesh::_internal_has_faces() const {
  return this != internal_default_instance() && faces_ != nullptr;
}
inline bool TriangleMesh::has_faces() const {
  return _internal_has_faces();
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::_internal_faces() const {
  const ::standard_cyborg::proto::math::Tensor* p = faces_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Tensor*>(
      &::standard_cyborg::proto::math::_Tensor_default_instance_);
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::faces() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.faces)
  return _internal_faces();
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::release_faces() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.faces)
  
  ::standard_cyborg::proto::math::Tensor* temp = faces_;
  faces_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::_internal_mutable_faces() {
  
  if (faces_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Tensor>(GetArenaNoVirtual());
    faces_ = p;
  }
  return faces_;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::mutable_faces() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.faces)
  return _internal_mutable_faces();
}
inline void TriangleMesh::set_allocated_faces(::standard_cyborg::proto::math::Tensor* faces) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(faces_);
  }
  if (faces) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      faces = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, faces, submessage_arena);
    }
    
  } else {
    
  }
  faces_ = faces;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.faces)
}

// .standard_cyborg.proto.math.Tensor distance_values = 9;
inline bool TriangleMesh::_internal_has_distance_values() const {
  return this != internal_default_instance() && distance_values_ != nullptr;
}
inline bool TriangleMesh::has_distance_values() const {
  return _internal_has_distance_values();
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::_internal_distance_values() const {
  const ::standard_cyborg::proto::math::Tensor* p = distance_values_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Tensor*>(
      &::standard_cyborg::proto::math::_Tensor_default_instance_);
}
inline const ::standard_cyborg::proto::math::Tensor& TriangleMesh::distance_values() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.distance_values)
  return _internal_distance_values();
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::release_distance_values() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.distance_values)
  
  ::standard_cyborg::proto::math::Tensor* temp = distance_values_;
  distance_values_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::_internal_mutable_distance_values() {
  
  if (distance_values_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Tensor>(GetArenaNoVirtual());
    distance_values_ = p;
  }
  return distance_values_;
}
inline ::standard_cyborg::proto::math::Tensor* TriangleMesh::mutable_distance_values() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.distance_values)
  return _internal_mutable_distance_values();
}
inline void TriangleMesh::set_allocated_distance_values(::standard_cyborg::proto::math::Tensor* distance_values) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(distance_values_);
  }
  if (distance_values) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      distance_values = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, distance_values, submessage_arena);
    }
    
  } else {
    
  }
  distance_values_ = distance_values;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.distance_values)
}

// .standard_cyborg.proto.sc3d.Image texture = 7;
inline bool TriangleMesh::_internal_has_texture() const {
  return this != internal_default_instance() && texture_ != nullptr;
}
inline bool TriangleMesh::has_texture() const {
  return _internal_has_texture();
}
inline const ::standard_cyborg::proto::sc3d::Image& TriangleMesh::_internal_texture() const {
  const ::standard_cyborg::proto::sc3d::Image* p = texture_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::sc3d::Image*>(
      &::standard_cyborg::proto::sc3d::_Image_default_instance_);
}
inline const ::standard_cyborg::proto::sc3d::Image& TriangleMesh::texture() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.TriangleMesh.texture)
  return _internal_texture();
}
inline ::standard_cyborg::proto::sc3d::Image* TriangleMesh::release_texture() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.TriangleMesh.texture)
  
  ::standard_cyborg::proto::sc3d::Image* temp = texture_;
  texture_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::sc3d::Image* TriangleMesh::_internal_mutable_texture() {
  
  if (texture_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::sc3d::Image>(GetArenaNoVirtual());
    texture_ = p;
  }
  return texture_;
}
inline ::standard_cyborg::proto::sc3d::Image* TriangleMesh::mutable_texture() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.TriangleMesh.texture)
  return _internal_mutable_texture();
}
inline void TriangleMesh::set_allocated_texture(::standard_cyborg::proto::sc3d::Image* texture) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(texture_);
  }
  if (texture) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      texture = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, texture, submessage_arena);
    }
    
  } else {
    
  }
  texture_ = texture;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.TriangleMesh.texture)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2ftriangle_5fmesh_2eproto
