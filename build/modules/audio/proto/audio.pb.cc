// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: audio.proto

#include "audio.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_audio_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_audio_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ChannelData;
}  // namespace protobuf_audio_2eproto
namespace protobuf_header_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_header_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Header;
}  // namespace protobuf_header_2eproto
namespace protobuf_microphone_5fconfig_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_microphone_5fconfig_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_MicrophoneConfig;
}  // namespace protobuf_microphone_5fconfig_2eproto
namespace apollo {
namespace drivers {
namespace microphone {
namespace config {
class ChannelDataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ChannelData>
      _instance;
} _ChannelData_default_instance_;
class AudioDataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AudioData>
      _instance;
} _AudioData_default_instance_;
}  // namespace config
}  // namespace microphone
}  // namespace drivers
}  // namespace apollo
namespace protobuf_audio_2eproto {
static void InitDefaultsChannelData() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::drivers::microphone::config::_ChannelData_default_instance_;
    new (ptr) ::apollo::drivers::microphone::config::ChannelData();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::drivers::microphone::config::ChannelData::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ChannelData =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsChannelData}, {}};

static void InitDefaultsAudioData() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::drivers::microphone::config::_AudioData_default_instance_;
    new (ptr) ::apollo::drivers::microphone::config::AudioData();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::drivers::microphone::config::AudioData::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_AudioData =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsAudioData}, {
      &protobuf_header_2eproto::scc_info_Header.base,
      &protobuf_microphone_5fconfig_2eproto::scc_info_MicrophoneConfig.base,
      &protobuf_audio_2eproto::scc_info_ChannelData.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ChannelData.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AudioData.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::ChannelData, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::ChannelData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::ChannelData, channel_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::ChannelData, data_),
  1,
  0,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::AudioData, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::AudioData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::AudioData, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::AudioData, microphone_config_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::drivers::microphone::config::AudioData, channel_data_),
  0,
  1,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::drivers::microphone::config::ChannelData)},
  { 9, 17, sizeof(::apollo::drivers::microphone::config::AudioData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::apollo::drivers::microphone::config::_ChannelData_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::apollo::drivers::microphone::config::_AudioData_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "audio.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013audio.proto\022 apollo.drivers.microphone"
      ".config\032\014header.proto\032\027microphone_config"
      ".proto\"`\n\013ChannelData\022C\n\014channel_type\030\001 "
      "\001(\0162-.apollo.drivers.microphone.config.C"
      "hannelType\022\014\n\004data\030\002 \001(\014\"\306\001\n\tAudioData\022%"
      "\n\006header\030\001 \001(\0132\025.apollo.common.Header\022M\n"
      "\021microphone_config\030\002 \001(\01322.apollo.driver"
      "s.microphone.config.MicrophoneConfig\022C\n\014"
      "channel_data\030\003 \003(\0132-.apollo.drivers.micr"
      "ophone.config.ChannelData"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 385);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "audio.proto", &protobuf_RegisterTypes);
  ::protobuf_header_2eproto::AddDescriptors();
  ::protobuf_microphone_5fconfig_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_audio_2eproto
namespace apollo {
namespace drivers {
namespace microphone {
namespace config {

// ===================================================================

void ChannelData::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChannelData::kChannelTypeFieldNumber;
const int ChannelData::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChannelData::ChannelData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_audio_2eproto::scc_info_ChannelData.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.drivers.microphone.config.ChannelData)
}
ChannelData::ChannelData(const ChannelData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_data()) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  channel_type_ = from.channel_type_;
  // @@protoc_insertion_point(copy_constructor:apollo.drivers.microphone.config.ChannelData)
}

void ChannelData::SharedCtor() {
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  channel_type_ = 0;
}

ChannelData::~ChannelData() {
  // @@protoc_insertion_point(destructor:apollo.drivers.microphone.config.ChannelData)
  SharedDtor();
}

void ChannelData::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ChannelData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ChannelData::descriptor() {
  ::protobuf_audio_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_audio_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ChannelData& ChannelData::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_audio_2eproto::scc_info_ChannelData.base);
  return *internal_default_instance();
}


void ChannelData::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.drivers.microphone.config.ChannelData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    data_.ClearNonDefaultToEmptyNoArena();
  }
  channel_type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChannelData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.drivers.microphone.config.ChannelData)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.drivers.microphone.config.ChannelType channel_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::drivers::microphone::config::ChannelType_IsValid(value)) {
            set_channel_type(static_cast< ::apollo::drivers::microphone::config::ChannelType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.drivers.microphone.config.ChannelData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.drivers.microphone.config.ChannelData)
  return false;
#undef DO_
}

void ChannelData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.drivers.microphone.config.ChannelData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.drivers.microphone.config.ChannelType channel_type = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->channel_type(), output);
  }

  // optional bytes data = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.drivers.microphone.config.ChannelData)
}

::google::protobuf::uint8* ChannelData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.drivers.microphone.config.ChannelData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.drivers.microphone.config.ChannelType channel_type = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->channel_type(), target);
  }

  // optional bytes data = 2;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.drivers.microphone.config.ChannelData)
  return target;
}

size_t ChannelData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.drivers.microphone.config.ChannelData)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional bytes data = 2;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

    // optional .apollo.drivers.microphone.config.ChannelType channel_type = 1;
    if (has_channel_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->channel_type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChannelData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.drivers.microphone.config.ChannelData)
  GOOGLE_DCHECK_NE(&from, this);
  const ChannelData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ChannelData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.drivers.microphone.config.ChannelData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.drivers.microphone.config.ChannelData)
    MergeFrom(*source);
  }
}

void ChannelData::MergeFrom(const ChannelData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.drivers.microphone.config.ChannelData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_data();
      data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
    }
    if (cached_has_bits & 0x00000002u) {
      channel_type_ = from.channel_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChannelData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.drivers.microphone.config.ChannelData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChannelData::CopyFrom(const ChannelData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.drivers.microphone.config.ChannelData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChannelData::IsInitialized() const {
  return true;
}

void ChannelData::Swap(ChannelData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChannelData::InternalSwap(ChannelData* other) {
  using std::swap;
  data_.Swap(&other->data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(channel_type_, other->channel_type_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ChannelData::GetMetadata() const {
  protobuf_audio_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_audio_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void AudioData::InitAsDefaultInstance() {
  ::apollo::drivers::microphone::config::_AudioData_default_instance_._instance.get_mutable()->header_ = const_cast< ::apollo::common::Header*>(
      ::apollo::common::Header::internal_default_instance());
  ::apollo::drivers::microphone::config::_AudioData_default_instance_._instance.get_mutable()->microphone_config_ = const_cast< ::apollo::drivers::microphone::config::MicrophoneConfig*>(
      ::apollo::drivers::microphone::config::MicrophoneConfig::internal_default_instance());
}
void AudioData::clear_header() {
  if (header_ != NULL) header_->Clear();
  clear_has_header();
}
void AudioData::clear_microphone_config() {
  if (microphone_config_ != NULL) microphone_config_->Clear();
  clear_has_microphone_config();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AudioData::kHeaderFieldNumber;
const int AudioData::kMicrophoneConfigFieldNumber;
const int AudioData::kChannelDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AudioData::AudioData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_audio_2eproto::scc_info_AudioData.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.drivers.microphone.config.AudioData)
}
AudioData::AudioData(const AudioData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      channel_data_(from.channel_data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_microphone_config()) {
    microphone_config_ = new ::apollo::drivers::microphone::config::MicrophoneConfig(*from.microphone_config_);
  } else {
    microphone_config_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.drivers.microphone.config.AudioData)
}

void AudioData::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&microphone_config_) -
      reinterpret_cast<char*>(&header_)) + sizeof(microphone_config_));
}

AudioData::~AudioData() {
  // @@protoc_insertion_point(destructor:apollo.drivers.microphone.config.AudioData)
  SharedDtor();
}

void AudioData::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete microphone_config_;
}

void AudioData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AudioData::descriptor() {
  ::protobuf_audio_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_audio_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AudioData& AudioData::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_audio_2eproto::scc_info_AudioData.base);
  return *internal_default_instance();
}


void AudioData::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.drivers.microphone.config.AudioData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  channel_data_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(header_ != NULL);
      header_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(microphone_config_ != NULL);
      microphone_config_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AudioData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.drivers.microphone.config.AudioData)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.drivers.microphone.config.MicrophoneConfig microphone_config = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_microphone_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.drivers.microphone.config.ChannelData channel_data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_channel_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.drivers.microphone.config.AudioData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.drivers.microphone.config.AudioData)
  return false;
#undef DO_
}

void AudioData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.drivers.microphone.config.AudioData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // optional .apollo.drivers.microphone.config.MicrophoneConfig microphone_config = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_microphone_config(), output);
  }

  // repeated .apollo.drivers.microphone.config.ChannelData channel_data = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->channel_data_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->channel_data(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.drivers.microphone.config.AudioData)
}

::google::protobuf::uint8* AudioData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.drivers.microphone.config.AudioData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // optional .apollo.drivers.microphone.config.MicrophoneConfig microphone_config = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_microphone_config(), deterministic, target);
  }

  // repeated .apollo.drivers.microphone.config.ChannelData channel_data = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->channel_data_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->channel_data(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.drivers.microphone.config.AudioData)
  return target;
}

size_t AudioData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.drivers.microphone.config.AudioData)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .apollo.drivers.microphone.config.ChannelData channel_data = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->channel_data_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->channel_data(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional .apollo.common.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *header_);
    }

    // optional .apollo.drivers.microphone.config.MicrophoneConfig microphone_config = 2;
    if (has_microphone_config()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *microphone_config_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AudioData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.drivers.microphone.config.AudioData)
  GOOGLE_DCHECK_NE(&from, this);
  const AudioData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AudioData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.drivers.microphone.config.AudioData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.drivers.microphone.config.AudioData)
    MergeFrom(*source);
  }
}

void AudioData::MergeFrom(const AudioData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.drivers.microphone.config.AudioData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  channel_data_.MergeFrom(from.channel_data_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_header()->::apollo::common::Header::MergeFrom(from.header());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_microphone_config()->::apollo::drivers::microphone::config::MicrophoneConfig::MergeFrom(from.microphone_config());
    }
  }
}

void AudioData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.drivers.microphone.config.AudioData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AudioData::CopyFrom(const AudioData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.drivers.microphone.config.AudioData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AudioData::IsInitialized() const {
  return true;
}

void AudioData::Swap(AudioData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AudioData::InternalSwap(AudioData* other) {
  using std::swap;
  CastToBase(&channel_data_)->InternalSwap(CastToBase(&other->channel_data_));
  swap(header_, other->header_);
  swap(microphone_config_, other->microphone_config_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AudioData::GetMetadata() const {
  protobuf_audio_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_audio_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace config
}  // namespace microphone
}  // namespace drivers
}  // namespace apollo
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::apollo::drivers::microphone::config::ChannelData* Arena::CreateMaybeMessage< ::apollo::drivers::microphone::config::ChannelData >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::drivers::microphone::config::ChannelData >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::apollo::drivers::microphone::config::AudioData* Arena::CreateMaybeMessage< ::apollo::drivers::microphone::config::AudioData >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::drivers::microphone::config::AudioData >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
