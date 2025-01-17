// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/sc3d/bounding_box_label.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto

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
#include "standard_cyborg/proto/sc3d/qc_status.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto;
namespace standard_cyborg {
namespace proto {
namespace sc3d {
class BoundingBoxLabel;
class BoundingBoxLabelDefaultTypeInternal;
extern BoundingBoxLabelDefaultTypeInternal _BoundingBoxLabel_default_instance_;
class BoundingBoxLabel_SubBoundingBox;
class BoundingBoxLabel_SubBoundingBoxDefaultTypeInternal;
extern BoundingBoxLabel_SubBoundingBoxDefaultTypeInternal _BoundingBoxLabel_SubBoundingBox_default_instance_;
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> ::standard_cyborg::proto::sc3d::BoundingBoxLabel* Arena::CreateMaybeMessage<::standard_cyborg::proto::sc3d::BoundingBoxLabel>(Arena*);
template<> ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* Arena::CreateMaybeMessage<::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace standard_cyborg {
namespace proto {
namespace sc3d {

// ===================================================================

class BoundingBoxLabel_SubBoundingBox :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox) */ {
 public:
  BoundingBoxLabel_SubBoundingBox();
  virtual ~BoundingBoxLabel_SubBoundingBox();

  BoundingBoxLabel_SubBoundingBox(const BoundingBoxLabel_SubBoundingBox& from);
  BoundingBoxLabel_SubBoundingBox(BoundingBoxLabel_SubBoundingBox&& from) noexcept
    : BoundingBoxLabel_SubBoundingBox() {
    *this = ::std::move(from);
  }

  inline BoundingBoxLabel_SubBoundingBox& operator=(const BoundingBoxLabel_SubBoundingBox& from) {
    CopyFrom(from);
    return *this;
  }
  inline BoundingBoxLabel_SubBoundingBox& operator=(BoundingBoxLabel_SubBoundingBox&& from) noexcept {
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
  static const BoundingBoxLabel_SubBoundingBox& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BoundingBoxLabel_SubBoundingBox* internal_default_instance() {
    return reinterpret_cast<const BoundingBoxLabel_SubBoundingBox*>(
               &_BoundingBoxLabel_SubBoundingBox_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BoundingBoxLabel_SubBoundingBox& a, BoundingBoxLabel_SubBoundingBox& b) {
    a.Swap(&b);
  }
  inline void Swap(BoundingBoxLabel_SubBoundingBox* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BoundingBoxLabel_SubBoundingBox* New() const final {
    return CreateMaybeMessage<BoundingBoxLabel_SubBoundingBox>(nullptr);
  }

  BoundingBoxLabel_SubBoundingBox* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BoundingBoxLabel_SubBoundingBox>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BoundingBoxLabel_SubBoundingBox& from);
  void MergeFrom(const BoundingBoxLabel_SubBoundingBox& from);
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
  void InternalSwap(BoundingBoxLabel_SubBoundingBox* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto);
    return ::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTopLeftCornerFieldNumber = 20,
    kBottomRightCornerFieldNumber = 21,
    kFlagFieldNumber = 3,
  };
  // .standard_cyborg.proto.math.Vec2 topLeftCorner = 20;
  bool has_topleftcorner() const;
  private:
  bool _internal_has_topleftcorner() const;
  public:
  void clear_topleftcorner();
  const ::standard_cyborg::proto::math::Vec2& topleftcorner() const;
  ::standard_cyborg::proto::math::Vec2* release_topleftcorner();
  ::standard_cyborg::proto::math::Vec2* mutable_topleftcorner();
  void set_allocated_topleftcorner(::standard_cyborg::proto::math::Vec2* topleftcorner);
  private:
  const ::standard_cyborg::proto::math::Vec2& _internal_topleftcorner() const;
  ::standard_cyborg::proto::math::Vec2* _internal_mutable_topleftcorner();
  public:

  // .standard_cyborg.proto.math.Vec2 bottomRightCorner = 21;
  bool has_bottomrightcorner() const;
  private:
  bool _internal_has_bottomrightcorner() const;
  public:
  void clear_bottomrightcorner();
  const ::standard_cyborg::proto::math::Vec2& bottomrightcorner() const;
  ::standard_cyborg::proto::math::Vec2* release_bottomrightcorner();
  ::standard_cyborg::proto::math::Vec2* mutable_bottomrightcorner();
  void set_allocated_bottomrightcorner(::standard_cyborg::proto::math::Vec2* bottomrightcorner);
  private:
  const ::standard_cyborg::proto::math::Vec2& _internal_bottomrightcorner() const;
  ::standard_cyborg::proto::math::Vec2* _internal_mutable_bottomrightcorner();
  public:

  // bool flag = 3;
  void clear_flag();
  bool flag() const;
  void set_flag(bool value);
  private:
  bool _internal_flag() const;
  void _internal_set_flag(bool value);
  public:

  // @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::standard_cyborg::proto::math::Vec2* topleftcorner_;
  ::standard_cyborg::proto::math::Vec2* bottomrightcorner_;
  bool flag_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto;
};
// -------------------------------------------------------------------

class BoundingBoxLabel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:standard_cyborg.proto.sc3d.BoundingBoxLabel) */ {
 public:
  BoundingBoxLabel();
  virtual ~BoundingBoxLabel();

  BoundingBoxLabel(const BoundingBoxLabel& from);
  BoundingBoxLabel(BoundingBoxLabel&& from) noexcept
    : BoundingBoxLabel() {
    *this = ::std::move(from);
  }

  inline BoundingBoxLabel& operator=(const BoundingBoxLabel& from) {
    CopyFrom(from);
    return *this;
  }
  inline BoundingBoxLabel& operator=(BoundingBoxLabel&& from) noexcept {
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
  static const BoundingBoxLabel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BoundingBoxLabel* internal_default_instance() {
    return reinterpret_cast<const BoundingBoxLabel*>(
               &_BoundingBoxLabel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(BoundingBoxLabel& a, BoundingBoxLabel& b) {
    a.Swap(&b);
  }
  inline void Swap(BoundingBoxLabel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BoundingBoxLabel* New() const final {
    return CreateMaybeMessage<BoundingBoxLabel>(nullptr);
  }

  BoundingBoxLabel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BoundingBoxLabel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BoundingBoxLabel& from);
  void MergeFrom(const BoundingBoxLabel& from);
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
  void InternalSwap(BoundingBoxLabel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "standard_cyborg.proto.sc3d.BoundingBoxLabel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto);
    return ::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef BoundingBoxLabel_SubBoundingBox SubBoundingBox;

  // accessors -------------------------------------------------------

  enum : int {
    kSubBoundingBoxesFieldNumber = 2,
    kScImagePathFieldNumber = 4,
    kQcStatusFieldNumber = 11,
  };
  // repeated .standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox subBoundingBoxes = 2;
  int subboundingboxes_size() const;
  private:
  int _internal_subboundingboxes_size() const;
  public:
  void clear_subboundingboxes();
  ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* mutable_subboundingboxes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox >*
      mutable_subboundingboxes();
  private:
  const ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox& _internal_subboundingboxes(int index) const;
  ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* _internal_add_subboundingboxes();
  public:
  const ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox& subboundingboxes(int index) const;
  ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* add_subboundingboxes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox >&
      subboundingboxes() const;

  // string scImagePath = 4;
  void clear_scimagepath();
  const std::string& scimagepath() const;
  void set_scimagepath(const std::string& value);
  void set_scimagepath(std::string&& value);
  void set_scimagepath(const char* value);
  void set_scimagepath(const char* value, size_t size);
  std::string* mutable_scimagepath();
  std::string* release_scimagepath();
  void set_allocated_scimagepath(std::string* scimagepath);
  private:
  const std::string& _internal_scimagepath() const;
  void _internal_set_scimagepath(const std::string& value);
  std::string* _internal_mutable_scimagepath();
  public:

  // .standard_cyborg.proto.sc3d.QcStatus qcStatus = 11;
  void clear_qcstatus();
  ::standard_cyborg::proto::sc3d::QcStatus qcstatus() const;
  void set_qcstatus(::standard_cyborg::proto::sc3d::QcStatus value);
  private:
  ::standard_cyborg::proto::sc3d::QcStatus _internal_qcstatus() const;
  void _internal_set_qcstatus(::standard_cyborg::proto::sc3d::QcStatus value);
  public:

  // @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.BoundingBoxLabel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox > subboundingboxes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr scimagepath_;
  int qcstatus_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BoundingBoxLabel_SubBoundingBox

// .standard_cyborg.proto.math.Vec2 topLeftCorner = 20;
inline bool BoundingBoxLabel_SubBoundingBox::_internal_has_topleftcorner() const {
  return this != internal_default_instance() && topleftcorner_ != nullptr;
}
inline bool BoundingBoxLabel_SubBoundingBox::has_topleftcorner() const {
  return _internal_has_topleftcorner();
}
inline const ::standard_cyborg::proto::math::Vec2& BoundingBoxLabel_SubBoundingBox::_internal_topleftcorner() const {
  const ::standard_cyborg::proto::math::Vec2* p = topleftcorner_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Vec2*>(
      &::standard_cyborg::proto::math::_Vec2_default_instance_);
}
inline const ::standard_cyborg::proto::math::Vec2& BoundingBoxLabel_SubBoundingBox::topleftcorner() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.topLeftCorner)
  return _internal_topleftcorner();
}
inline ::standard_cyborg::proto::math::Vec2* BoundingBoxLabel_SubBoundingBox::release_topleftcorner() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.topLeftCorner)
  
  ::standard_cyborg::proto::math::Vec2* temp = topleftcorner_;
  topleftcorner_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Vec2* BoundingBoxLabel_SubBoundingBox::_internal_mutable_topleftcorner() {
  
  if (topleftcorner_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Vec2>(GetArenaNoVirtual());
    topleftcorner_ = p;
  }
  return topleftcorner_;
}
inline ::standard_cyborg::proto::math::Vec2* BoundingBoxLabel_SubBoundingBox::mutable_topleftcorner() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.topLeftCorner)
  return _internal_mutable_topleftcorner();
}
inline void BoundingBoxLabel_SubBoundingBox::set_allocated_topleftcorner(::standard_cyborg::proto::math::Vec2* topleftcorner) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(topleftcorner_);
  }
  if (topleftcorner) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      topleftcorner = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, topleftcorner, submessage_arena);
    }
    
  } else {
    
  }
  topleftcorner_ = topleftcorner;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.topLeftCorner)
}

// .standard_cyborg.proto.math.Vec2 bottomRightCorner = 21;
inline bool BoundingBoxLabel_SubBoundingBox::_internal_has_bottomrightcorner() const {
  return this != internal_default_instance() && bottomrightcorner_ != nullptr;
}
inline bool BoundingBoxLabel_SubBoundingBox::has_bottomrightcorner() const {
  return _internal_has_bottomrightcorner();
}
inline const ::standard_cyborg::proto::math::Vec2& BoundingBoxLabel_SubBoundingBox::_internal_bottomrightcorner() const {
  const ::standard_cyborg::proto::math::Vec2* p = bottomrightcorner_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Vec2*>(
      &::standard_cyborg::proto::math::_Vec2_default_instance_);
}
inline const ::standard_cyborg::proto::math::Vec2& BoundingBoxLabel_SubBoundingBox::bottomrightcorner() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.bottomRightCorner)
  return _internal_bottomrightcorner();
}
inline ::standard_cyborg::proto::math::Vec2* BoundingBoxLabel_SubBoundingBox::release_bottomrightcorner() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.bottomRightCorner)
  
  ::standard_cyborg::proto::math::Vec2* temp = bottomrightcorner_;
  bottomrightcorner_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Vec2* BoundingBoxLabel_SubBoundingBox::_internal_mutable_bottomrightcorner() {
  
  if (bottomrightcorner_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Vec2>(GetArenaNoVirtual());
    bottomrightcorner_ = p;
  }
  return bottomrightcorner_;
}
inline ::standard_cyborg::proto::math::Vec2* BoundingBoxLabel_SubBoundingBox::mutable_bottomrightcorner() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.bottomRightCorner)
  return _internal_mutable_bottomrightcorner();
}
inline void BoundingBoxLabel_SubBoundingBox::set_allocated_bottomrightcorner(::standard_cyborg::proto::math::Vec2* bottomrightcorner) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(bottomrightcorner_);
  }
  if (bottomrightcorner) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      bottomrightcorner = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bottomrightcorner, submessage_arena);
    }
    
  } else {
    
  }
  bottomrightcorner_ = bottomrightcorner;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.bottomRightCorner)
}

// bool flag = 3;
inline void BoundingBoxLabel_SubBoundingBox::clear_flag() {
  flag_ = false;
}
inline bool BoundingBoxLabel_SubBoundingBox::_internal_flag() const {
  return flag_;
}
inline bool BoundingBoxLabel_SubBoundingBox::flag() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.flag)
  return _internal_flag();
}
inline void BoundingBoxLabel_SubBoundingBox::_internal_set_flag(bool value) {
  
  flag_ = value;
}
inline void BoundingBoxLabel_SubBoundingBox::set_flag(bool value) {
  _internal_set_flag(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox.flag)
}

// -------------------------------------------------------------------

// BoundingBoxLabel

// repeated .standard_cyborg.proto.sc3d.BoundingBoxLabel.SubBoundingBox subBoundingBoxes = 2;
inline int BoundingBoxLabel::_internal_subboundingboxes_size() const {
  return subboundingboxes_.size();
}
inline int BoundingBoxLabel::subboundingboxes_size() const {
  return _internal_subboundingboxes_size();
}
inline void BoundingBoxLabel::clear_subboundingboxes() {
  subboundingboxes_.Clear();
}
inline ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* BoundingBoxLabel::mutable_subboundingboxes(int index) {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.BoundingBoxLabel.subBoundingBoxes)
  return subboundingboxes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox >*
BoundingBoxLabel::mutable_subboundingboxes() {
  // @@protoc_insertion_point(field_mutable_list:standard_cyborg.proto.sc3d.BoundingBoxLabel.subBoundingBoxes)
  return &subboundingboxes_;
}
inline const ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox& BoundingBoxLabel::_internal_subboundingboxes(int index) const {
  return subboundingboxes_.Get(index);
}
inline const ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox& BoundingBoxLabel::subboundingboxes(int index) const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.BoundingBoxLabel.subBoundingBoxes)
  return _internal_subboundingboxes(index);
}
inline ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* BoundingBoxLabel::_internal_add_subboundingboxes() {
  return subboundingboxes_.Add();
}
inline ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox* BoundingBoxLabel::add_subboundingboxes() {
  // @@protoc_insertion_point(field_add:standard_cyborg.proto.sc3d.BoundingBoxLabel.subBoundingBoxes)
  return _internal_add_subboundingboxes();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::sc3d::BoundingBoxLabel_SubBoundingBox >&
BoundingBoxLabel::subboundingboxes() const {
  // @@protoc_insertion_point(field_list:standard_cyborg.proto.sc3d.BoundingBoxLabel.subBoundingBoxes)
  return subboundingboxes_;
}

// string scImagePath = 4;
inline void BoundingBoxLabel::clear_scimagepath() {
  scimagepath_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& BoundingBoxLabel::scimagepath() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
  return _internal_scimagepath();
}
inline void BoundingBoxLabel::set_scimagepath(const std::string& value) {
  _internal_set_scimagepath(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
}
inline std::string* BoundingBoxLabel::mutable_scimagepath() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
  return _internal_mutable_scimagepath();
}
inline const std::string& BoundingBoxLabel::_internal_scimagepath() const {
  return scimagepath_.GetNoArena();
}
inline void BoundingBoxLabel::_internal_set_scimagepath(const std::string& value) {
  
  scimagepath_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void BoundingBoxLabel::set_scimagepath(std::string&& value) {
  
  scimagepath_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
}
inline void BoundingBoxLabel::set_scimagepath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  scimagepath_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
}
inline void BoundingBoxLabel::set_scimagepath(const char* value, size_t size) {
  
  scimagepath_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
}
inline std::string* BoundingBoxLabel::_internal_mutable_scimagepath() {
  
  return scimagepath_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* BoundingBoxLabel::release_scimagepath() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
  
  return scimagepath_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void BoundingBoxLabel::set_allocated_scimagepath(std::string* scimagepath) {
  if (scimagepath != nullptr) {
    
  } else {
    
  }
  scimagepath_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), scimagepath);
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.BoundingBoxLabel.scImagePath)
}

// .standard_cyborg.proto.sc3d.QcStatus qcStatus = 11;
inline void BoundingBoxLabel::clear_qcstatus() {
  qcstatus_ = 0;
}
inline ::standard_cyborg::proto::sc3d::QcStatus BoundingBoxLabel::_internal_qcstatus() const {
  return static_cast< ::standard_cyborg::proto::sc3d::QcStatus >(qcstatus_);
}
inline ::standard_cyborg::proto::sc3d::QcStatus BoundingBoxLabel::qcstatus() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.BoundingBoxLabel.qcStatus)
  return _internal_qcstatus();
}
inline void BoundingBoxLabel::_internal_set_qcstatus(::standard_cyborg::proto::sc3d::QcStatus value) {
  
  qcstatus_ = value;
}
inline void BoundingBoxLabel::set_qcstatus(::standard_cyborg::proto::sc3d::QcStatus value) {
  _internal_set_qcstatus(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.BoundingBoxLabel.qcStatus)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fbounding_5fbox_5flabel_2eproto
