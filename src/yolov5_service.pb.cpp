// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: yolov5_service.proto

#include "yolov5_service.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace yolov5 {
constexpr ImageData::ImageData(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : image_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , width_(0)
  , height_(0)
  , channels_(0){}
struct ImageDataDefaultTypeInternal {
  constexpr ImageDataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ImageDataDefaultTypeInternal() {}
  union {
    ImageData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ImageDataDefaultTypeInternal _ImageData_default_instance_;
constexpr InferenceResult::InferenceResult(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : detections_(){}
struct InferenceResultDefaultTypeInternal {
  constexpr InferenceResultDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~InferenceResultDefaultTypeInternal() {}
  union {
    InferenceResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT InferenceResultDefaultTypeInternal _InferenceResult_default_instance_;
constexpr ObjectDetection::ObjectDetection(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : xmin_(0)
  , ymin_(0)
  , xmax_(0)
  , ymax_(0)
  , label_(0)
  , score_(0){}
struct ObjectDetectionDefaultTypeInternal {
  constexpr ObjectDetectionDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ObjectDetectionDefaultTypeInternal() {}
  union {
    ObjectDetection _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ObjectDetectionDefaultTypeInternal _ObjectDetection_default_instance_;
}  // namespace yolov5
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_yolov5_5fservice_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_yolov5_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_yolov5_5fservice_2eproto = nullptr;

const uint32_t TableStruct_yolov5_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::yolov5::ImageData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::yolov5::ImageData, image_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ImageData, width_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ImageData, height_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ImageData, channels_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::yolov5::InferenceResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::yolov5::InferenceResult, detections_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, xmin_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, ymin_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, xmax_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, ymax_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, label_),
  PROTOBUF_FIELD_OFFSET(::yolov5::ObjectDetection, score_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::yolov5::ImageData)},
  { 10, -1, -1, sizeof(::yolov5::InferenceResult)},
  { 17, -1, -1, sizeof(::yolov5::ObjectDetection)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::yolov5::_ImageData_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::yolov5::_InferenceResult_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::yolov5::_ObjectDetection_default_instance_),
};

const char descriptor_table_protodef_yolov5_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024yolov5_service.proto\022\006yolov5\"K\n\tImageD"
  "ata\022\r\n\005image\030\001 \001(\014\022\r\n\005width\030\002 \001(\005\022\016\n\006hei"
  "ght\030\003 \001(\005\022\020\n\010channels\030\004 \001(\005\">\n\017Inference"
  "Result\022+\n\ndetections\030\001 \003(\0132\027.yolov5.Obje"
  "ctDetection\"g\n\017ObjectDetection\022\014\n\004xmin\030\001"
  " \001(\002\022\014\n\004ymin\030\002 \001(\002\022\014\n\004xmax\030\003 \001(\002\022\014\n\004ymax"
  "\030\004 \001(\002\022\r\n\005label\030\005 \001(\005\022\r\n\005score\030\006 \001(\0022F\n\r"
  "YOLOv5Service\0225\n\005Infer\022\021.yolov5.ImageDat"
  "a\032\027.yolov5.InferenceResult\"\000b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_yolov5_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_yolov5_5fservice_2eproto = {
  false, false, 356, descriptor_table_protodef_yolov5_5fservice_2eproto, "yolov5_service.proto", 
  &descriptor_table_yolov5_5fservice_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_yolov5_5fservice_2eproto::offsets,
  file_level_metadata_yolov5_5fservice_2eproto, file_level_enum_descriptors_yolov5_5fservice_2eproto, file_level_service_descriptors_yolov5_5fservice_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_yolov5_5fservice_2eproto_getter() {
  return &descriptor_table_yolov5_5fservice_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_yolov5_5fservice_2eproto(&descriptor_table_yolov5_5fservice_2eproto);
namespace yolov5 {

// ===================================================================

class ImageData::_Internal {
 public:
};

ImageData::ImageData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:yolov5.ImageData)
}
ImageData::ImageData(const ImageData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    image_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_image().empty()) {
    image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_image(), 
      GetArenaForAllocation());
  }
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&channels_) -
    reinterpret_cast<char*>(&width_)) + sizeof(channels_));
  // @@protoc_insertion_point(copy_constructor:yolov5.ImageData)
}

inline void ImageData::SharedCtor() {
image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  image_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&width_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&channels_) -
    reinterpret_cast<char*>(&width_)) + sizeof(channels_));
}

ImageData::~ImageData() {
  // @@protoc_insertion_point(destructor:yolov5.ImageData)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ImageData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  image_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ImageData::ArenaDtor(void* object) {
  ImageData* _this = reinterpret_cast< ImageData* >(object);
  (void)_this;
}
void ImageData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ImageData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ImageData::Clear() {
// @@protoc_insertion_point(message_clear_start:yolov5.ImageData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  image_.ClearToEmpty();
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&channels_) -
      reinterpret_cast<char*>(&width_)) + sizeof(channels_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ImageData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes image = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_image();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 width = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 height = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 channels = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          channels_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ImageData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:yolov5.ImageData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes image = 1;
  if (!this->_internal_image().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_image(), target);
  }

  // int32 width = 2;
  if (this->_internal_width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_width(), target);
  }

  // int32 height = 3;
  if (this->_internal_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_height(), target);
  }

  // int32 channels = 4;
  if (this->_internal_channels() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_channels(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:yolov5.ImageData)
  return target;
}

size_t ImageData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:yolov5.ImageData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image = 1;
  if (!this->_internal_image().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image());
  }

  // int32 width = 2;
  if (this->_internal_width() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_width());
  }

  // int32 height = 3;
  if (this->_internal_height() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_height());
  }

  // int32 channels = 4;
  if (this->_internal_channels() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_channels());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ImageData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ImageData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ImageData::GetClassData() const { return &_class_data_; }

void ImageData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ImageData *>(to)->MergeFrom(
      static_cast<const ImageData &>(from));
}


void ImageData::MergeFrom(const ImageData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:yolov5.ImageData)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image().empty()) {
    _internal_set_image(from._internal_image());
  }
  if (from._internal_width() != 0) {
    _internal_set_width(from._internal_width());
  }
  if (from._internal_height() != 0) {
    _internal_set_height(from._internal_height());
  }
  if (from._internal_channels() != 0) {
    _internal_set_channels(from._internal_channels());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ImageData::CopyFrom(const ImageData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:yolov5.ImageData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageData::IsInitialized() const {
  return true;
}

void ImageData::InternalSwap(ImageData* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &image_, lhs_arena,
      &other->image_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ImageData, channels_)
      + sizeof(ImageData::channels_)
      - PROTOBUF_FIELD_OFFSET(ImageData, width_)>(
          reinterpret_cast<char*>(&width_),
          reinterpret_cast<char*>(&other->width_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ImageData::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_yolov5_5fservice_2eproto_getter, &descriptor_table_yolov5_5fservice_2eproto_once,
      file_level_metadata_yolov5_5fservice_2eproto[0]);
}

// ===================================================================

class InferenceResult::_Internal {
 public:
};

InferenceResult::InferenceResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  detections_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:yolov5.InferenceResult)
}
InferenceResult::InferenceResult(const InferenceResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      detections_(from.detections_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:yolov5.InferenceResult)
}

inline void InferenceResult::SharedCtor() {
}

InferenceResult::~InferenceResult() {
  // @@protoc_insertion_point(destructor:yolov5.InferenceResult)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void InferenceResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void InferenceResult::ArenaDtor(void* object) {
  InferenceResult* _this = reinterpret_cast< InferenceResult* >(object);
  (void)_this;
}
void InferenceResult::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void InferenceResult::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void InferenceResult::Clear() {
// @@protoc_insertion_point(message_clear_start:yolov5.InferenceResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  detections_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InferenceResult::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .yolov5.ObjectDetection detections = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_detections(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* InferenceResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:yolov5.InferenceResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .yolov5.ObjectDetection detections = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_detections_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_detections(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:yolov5.InferenceResult)
  return target;
}

size_t InferenceResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:yolov5.InferenceResult)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .yolov5.ObjectDetection detections = 1;
  total_size += 1UL * this->_internal_detections_size();
  for (const auto& msg : this->detections_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InferenceResult::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    InferenceResult::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InferenceResult::GetClassData() const { return &_class_data_; }

void InferenceResult::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<InferenceResult *>(to)->MergeFrom(
      static_cast<const InferenceResult &>(from));
}


void InferenceResult::MergeFrom(const InferenceResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:yolov5.InferenceResult)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  detections_.MergeFrom(from.detections_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InferenceResult::CopyFrom(const InferenceResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:yolov5.InferenceResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InferenceResult::IsInitialized() const {
  return true;
}

void InferenceResult::InternalSwap(InferenceResult* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  detections_.InternalSwap(&other->detections_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InferenceResult::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_yolov5_5fservice_2eproto_getter, &descriptor_table_yolov5_5fservice_2eproto_once,
      file_level_metadata_yolov5_5fservice_2eproto[1]);
}

// ===================================================================

class ObjectDetection::_Internal {
 public:
};

ObjectDetection::ObjectDetection(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:yolov5.ObjectDetection)
}
ObjectDetection::ObjectDetection(const ObjectDetection& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&xmin_, &from.xmin_,
    static_cast<size_t>(reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&xmin_)) + sizeof(score_));
  // @@protoc_insertion_point(copy_constructor:yolov5.ObjectDetection)
}

inline void ObjectDetection::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&xmin_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&xmin_)) + sizeof(score_));
}

ObjectDetection::~ObjectDetection() {
  // @@protoc_insertion_point(destructor:yolov5.ObjectDetection)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ObjectDetection::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ObjectDetection::ArenaDtor(void* object) {
  ObjectDetection* _this = reinterpret_cast< ObjectDetection* >(object);
  (void)_this;
}
void ObjectDetection::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ObjectDetection::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ObjectDetection::Clear() {
// @@protoc_insertion_point(message_clear_start:yolov5.ObjectDetection)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&xmin_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&score_) -
      reinterpret_cast<char*>(&xmin_)) + sizeof(score_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ObjectDetection::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float xmin = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          xmin_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float ymin = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          ymin_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float xmax = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          xmax_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float ymax = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 37)) {
          ymax_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // int32 label = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          label_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float score = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 53)) {
          score_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ObjectDetection::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:yolov5.ObjectDetection)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float xmin = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_xmin = this->_internal_xmin();
  uint32_t raw_xmin;
  memcpy(&raw_xmin, &tmp_xmin, sizeof(tmp_xmin));
  if (raw_xmin != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_xmin(), target);
  }

  // float ymin = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_ymin = this->_internal_ymin();
  uint32_t raw_ymin;
  memcpy(&raw_ymin, &tmp_ymin, sizeof(tmp_ymin));
  if (raw_ymin != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_ymin(), target);
  }

  // float xmax = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_xmax = this->_internal_xmax();
  uint32_t raw_xmax;
  memcpy(&raw_xmax, &tmp_xmax, sizeof(tmp_xmax));
  if (raw_xmax != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_xmax(), target);
  }

  // float ymax = 4;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_ymax = this->_internal_ymax();
  uint32_t raw_ymax;
  memcpy(&raw_ymax, &tmp_ymax, sizeof(tmp_ymax));
  if (raw_ymax != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_ymax(), target);
  }

  // int32 label = 5;
  if (this->_internal_label() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_label(), target);
  }

  // float score = 6;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_score = this->_internal_score();
  uint32_t raw_score;
  memcpy(&raw_score, &tmp_score, sizeof(tmp_score));
  if (raw_score != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_score(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:yolov5.ObjectDetection)
  return target;
}

size_t ObjectDetection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:yolov5.ObjectDetection)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float xmin = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_xmin = this->_internal_xmin();
  uint32_t raw_xmin;
  memcpy(&raw_xmin, &tmp_xmin, sizeof(tmp_xmin));
  if (raw_xmin != 0) {
    total_size += 1 + 4;
  }

  // float ymin = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_ymin = this->_internal_ymin();
  uint32_t raw_ymin;
  memcpy(&raw_ymin, &tmp_ymin, sizeof(tmp_ymin));
  if (raw_ymin != 0) {
    total_size += 1 + 4;
  }

  // float xmax = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_xmax = this->_internal_xmax();
  uint32_t raw_xmax;
  memcpy(&raw_xmax, &tmp_xmax, sizeof(tmp_xmax));
  if (raw_xmax != 0) {
    total_size += 1 + 4;
  }

  // float ymax = 4;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_ymax = this->_internal_ymax();
  uint32_t raw_ymax;
  memcpy(&raw_ymax, &tmp_ymax, sizeof(tmp_ymax));
  if (raw_ymax != 0) {
    total_size += 1 + 4;
  }

  // int32 label = 5;
  if (this->_internal_label() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_label());
  }

  // float score = 6;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_score = this->_internal_score();
  uint32_t raw_score;
  memcpy(&raw_score, &tmp_score, sizeof(tmp_score));
  if (raw_score != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ObjectDetection::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ObjectDetection::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ObjectDetection::GetClassData() const { return &_class_data_; }

void ObjectDetection::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ObjectDetection *>(to)->MergeFrom(
      static_cast<const ObjectDetection &>(from));
}


void ObjectDetection::MergeFrom(const ObjectDetection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:yolov5.ObjectDetection)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_xmin = from._internal_xmin();
  uint32_t raw_xmin;
  memcpy(&raw_xmin, &tmp_xmin, sizeof(tmp_xmin));
  if (raw_xmin != 0) {
    _internal_set_xmin(from._internal_xmin());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_ymin = from._internal_ymin();
  uint32_t raw_ymin;
  memcpy(&raw_ymin, &tmp_ymin, sizeof(tmp_ymin));
  if (raw_ymin != 0) {
    _internal_set_ymin(from._internal_ymin());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_xmax = from._internal_xmax();
  uint32_t raw_xmax;
  memcpy(&raw_xmax, &tmp_xmax, sizeof(tmp_xmax));
  if (raw_xmax != 0) {
    _internal_set_xmax(from._internal_xmax());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_ymax = from._internal_ymax();
  uint32_t raw_ymax;
  memcpy(&raw_ymax, &tmp_ymax, sizeof(tmp_ymax));
  if (raw_ymax != 0) {
    _internal_set_ymax(from._internal_ymax());
  }
  if (from._internal_label() != 0) {
    _internal_set_label(from._internal_label());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_score = from._internal_score();
  uint32_t raw_score;
  memcpy(&raw_score, &tmp_score, sizeof(tmp_score));
  if (raw_score != 0) {
    _internal_set_score(from._internal_score());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ObjectDetection::CopyFrom(const ObjectDetection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:yolov5.ObjectDetection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ObjectDetection::IsInitialized() const {
  return true;
}

void ObjectDetection::InternalSwap(ObjectDetection* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ObjectDetection, score_)
      + sizeof(ObjectDetection::score_)
      - PROTOBUF_FIELD_OFFSET(ObjectDetection, xmin_)>(
          reinterpret_cast<char*>(&xmin_),
          reinterpret_cast<char*>(&other->xmin_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ObjectDetection::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_yolov5_5fservice_2eproto_getter, &descriptor_table_yolov5_5fservice_2eproto_once,
      file_level_metadata_yolov5_5fservice_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace yolov5
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::yolov5::ImageData* Arena::CreateMaybeMessage< ::yolov5::ImageData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::yolov5::ImageData >(arena);
}
template<> PROTOBUF_NOINLINE ::yolov5::InferenceResult* Arena::CreateMaybeMessage< ::yolov5::InferenceResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::yolov5::InferenceResult >(arena);
}
template<> PROTOBUF_NOINLINE ::yolov5::ObjectDetection* Arena::CreateMaybeMessage< ::yolov5::ObjectDetection >(Arena* arena) {
  return Arena::CreateMessageInternal< ::yolov5::ObjectDetection >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
