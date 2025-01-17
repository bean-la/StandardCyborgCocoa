// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/sc3d/label_3d.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto

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
#include "standard_cyborg/proto/math/core.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto;
namespace standard_cyborg {
namespace proto {
namespace sc3d {
class Label3D;
class Label3DDefaultTypeInternal;
extern Label3DDefaultTypeInternal _Label3D_default_instance_;
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> ::standard_cyborg::proto::sc3d::Label3D* Arena::CreateMaybeMessage<::standard_cyborg::proto::sc3d::Label3D>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace standard_cyborg {
namespace proto {
namespace sc3d {

// ===================================================================

class Label3D :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:standard_cyborg.proto.sc3d.Label3D) */ {
 public:
  Label3D();
  virtual ~Label3D();

  Label3D(const Label3D& from);
  Label3D(Label3D&& from) noexcept
    : Label3D() {
    *this = ::std::move(from);
  }

  inline Label3D& operator=(const Label3D& from) {
    CopyFrom(from);
    return *this;
  }
  inline Label3D& operator=(Label3D&& from) noexcept {
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
  static const Label3D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Label3D* internal_default_instance() {
    return reinterpret_cast<const Label3D*>(
               &_Label3D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Label3D& a, Label3D& b) {
    a.Swap(&b);
  }
  inline void Swap(Label3D* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Label3D* New() const final {
    return CreateMaybeMessage<Label3D>(nullptr);
  }

  Label3D* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Label3D>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Label3D& from);
  void MergeFrom(const Label3D& from);
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
  void InternalSwap(Label3D* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "standard_cyborg.proto.sc3d.Label3D";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto);
    return ::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPosition3DFieldNumber = 1,
  };
  // .standard_cyborg.proto.math.Vec3 position3D = 1;
  bool has_position3d() const;
  private:
  bool _internal_has_position3d() const;
  public:
  void clear_position3d();
  const ::standard_cyborg::proto::math::Vec3& position3d() const;
  ::standard_cyborg::proto::math::Vec3* release_position3d();
  ::standard_cyborg::proto::math::Vec3* mutable_position3d();
  void set_allocated_position3d(::standard_cyborg::proto::math::Vec3* position3d);
  private:
  const ::standard_cyborg::proto::math::Vec3& _internal_position3d() const;
  ::standard_cyborg::proto::math::Vec3* _internal_mutable_position3d();
  public:

  // @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.Label3D)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::standard_cyborg::proto::math::Vec3* position3d_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Label3D

// .standard_cyborg.proto.math.Vec3 position3D = 1;
inline bool Label3D::_internal_has_position3d() const {
  return this != internal_default_instance() && position3d_ != nullptr;
}
inline bool Label3D::has_position3d() const {
  return _internal_has_position3d();
}
inline const ::standard_cyborg::proto::math::Vec3& Label3D::_internal_position3d() const {
  const ::standard_cyborg::proto::math::Vec3* p = position3d_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Vec3*>(
      &::standard_cyborg::proto::math::_Vec3_default_instance_);
}
inline const ::standard_cyborg::proto::math::Vec3& Label3D::position3d() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.Label3D.position3D)
  return _internal_position3d();
}
inline ::standard_cyborg::proto::math::Vec3* Label3D::release_position3d() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.Label3D.position3D)
  
  ::standard_cyborg::proto::math::Vec3* temp = position3d_;
  position3d_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Vec3* Label3D::_internal_mutable_position3d() {
  
  if (position3d_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Vec3>(GetArenaNoVirtual());
    position3d_ = p;
  }
  return position3d_;
}
inline ::standard_cyborg::proto::math::Vec3* Label3D::mutable_position3d() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.Label3D.position3D)
  return _internal_mutable_position3d();
}
inline void Label3D::set_allocated_position3d(::standard_cyborg::proto::math::Vec3* position3d) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position3d_);
  }
  if (position3d) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      position3d = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position3d, submessage_arena);
    }
    
  } else {
    
  }
  position3d_ = position3d;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.Label3D.position3D)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2flabel_5f3d_2eproto
