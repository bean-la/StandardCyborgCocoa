// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/sc3d/video.proto

#include "standard_cyborg/proto/sc3d/video.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_standard_5fcyborg_2fproto_2fmath_2ftensor_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Tensor_standard_5fcyborg_2fproto_2fmath_2ftensor_2eproto;
namespace standard_cyborg {
namespace proto {
namespace sc3d {
class VideoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Video> _instance;
} _Video_default_instance_;
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
static void InitDefaultsscc_info_Video_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::standard_cyborg::proto::sc3d::_Video_default_instance_;
    new (ptr) ::standard_cyborg::proto::sc3d::Video();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::standard_cyborg::proto::sc3d::Video::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Video_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Video_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto}, {
      &scc_info_Tensor_standard_5fcyborg_2fproto_2fmath_2ftensor_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::sc3d::Video, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::sc3d::Video, fileextension_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::sc3d::Video, bytes_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::standard_cyborg::proto::sc3d::Video)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::standard_cyborg::proto::sc3d::_Video_default_instance_),
};

const char descriptor_table_protodef_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&standard_cyborg/proto/sc3d/video.proto"
  "\022\032standard_cyborg.proto.sc3d\032\'standard_c"
  "yborg/proto/math/tensor.proto\"Q\n\005Video\022\025"
  "\n\rfileExtension\030\001 \001(\t\0221\n\005bytes\030\002 \001(\0132\".s"
  "tandard_cyborg.proto.math.Tensorb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_deps[1] = {
  &::descriptor_table_standard_5fcyborg_2fproto_2fmath_2ftensor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_sccs[1] = {
  &scc_info_Video_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_once;
static bool descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto = {
  &descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_initialized, descriptor_table_protodef_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto, "standard_cyborg/proto/sc3d/video.proto", 200,
  &descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_once, descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_sccs, descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto::offsets,
  file_level_metadata_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto, 1, file_level_enum_descriptors_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto, file_level_service_descriptors_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto), true);
namespace standard_cyborg {
namespace proto {
namespace sc3d {

// ===================================================================

void Video::InitAsDefaultInstance() {
  ::standard_cyborg::proto::sc3d::_Video_default_instance_._instance.get_mutable()->bytes_ = const_cast< ::standard_cyborg::proto::math::Tensor*>(
      ::standard_cyborg::proto::math::Tensor::internal_default_instance());
}
class Video::_Internal {
 public:
  static const ::standard_cyborg::proto::math::Tensor& bytes(const Video* msg);
};

const ::standard_cyborg::proto::math::Tensor&
Video::_Internal::bytes(const Video* msg) {
  return *msg->bytes_;
}
void Video::clear_bytes() {
  if (GetArenaNoVirtual() == nullptr && bytes_ != nullptr) {
    delete bytes_;
  }
  bytes_ = nullptr;
}
Video::Video()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:standard_cyborg.proto.sc3d.Video)
}
Video::Video(const Video& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  fileextension_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_fileextension().empty()) {
    fileextension_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.fileextension_);
  }
  if (from._internal_has_bytes()) {
    bytes_ = new ::standard_cyborg::proto::math::Tensor(*from.bytes_);
  } else {
    bytes_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:standard_cyborg.proto.sc3d.Video)
}

void Video::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Video_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto.base);
  fileextension_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  bytes_ = nullptr;
}

Video::~Video() {
  // @@protoc_insertion_point(destructor:standard_cyborg.proto.sc3d.Video)
  SharedDtor();
}

void Video::SharedDtor() {
  fileextension_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete bytes_;
}

void Video::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Video& Video::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Video_standard_5fcyborg_2fproto_2fsc3d_2fvideo_2eproto.base);
  return *internal_default_instance();
}


void Video::Clear() {
// @@protoc_insertion_point(message_clear_start:standard_cyborg.proto.sc3d.Video)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  fileextension_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && bytes_ != nullptr) {
    delete bytes_;
  }
  bytes_ = nullptr;
  _internal_metadata_.Clear();
}

const char* Video::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string fileExtension = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_fileextension();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "standard_cyborg.proto.sc3d.Video.fileExtension"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .standard_cyborg.proto.math.Tensor bytes = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_bytes(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Video::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:standard_cyborg.proto.sc3d.Video)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string fileExtension = 1;
  if (this->fileextension().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_fileextension().data(), static_cast<int>(this->_internal_fileextension().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "standard_cyborg.proto.sc3d.Video.fileExtension");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_fileextension(), target);
  }

  // .standard_cyborg.proto.math.Tensor bytes = 2;
  if (this->has_bytes()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::bytes(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:standard_cyborg.proto.sc3d.Video)
  return target;
}

size_t Video::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:standard_cyborg.proto.sc3d.Video)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string fileExtension = 1;
  if (this->fileextension().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_fileextension());
  }

  // .standard_cyborg.proto.math.Tensor bytes = 2;
  if (this->has_bytes()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *bytes_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Video::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:standard_cyborg.proto.sc3d.Video)
  GOOGLE_DCHECK_NE(&from, this);
  const Video* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Video>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:standard_cyborg.proto.sc3d.Video)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:standard_cyborg.proto.sc3d.Video)
    MergeFrom(*source);
  }
}

void Video::MergeFrom(const Video& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:standard_cyborg.proto.sc3d.Video)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.fileextension().size() > 0) {

    fileextension_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.fileextension_);
  }
  if (from.has_bytes()) {
    _internal_mutable_bytes()->::standard_cyborg::proto::math::Tensor::MergeFrom(from._internal_bytes());
  }
}

void Video::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:standard_cyborg.proto.sc3d.Video)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Video::CopyFrom(const Video& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:standard_cyborg.proto.sc3d.Video)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Video::IsInitialized() const {
  return true;
}

void Video::InternalSwap(Video* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  fileextension_.Swap(&other->fileextension_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(bytes_, other->bytes_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Video::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::standard_cyborg::proto::sc3d::Video* Arena::CreateMaybeMessage< ::standard_cyborg::proto::sc3d::Video >(Arena* arena) {
  return Arena::CreateInternal< ::standard_cyborg::proto::sc3d::Video >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
