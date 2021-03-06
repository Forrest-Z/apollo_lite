// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: adapter_config.proto

#ifndef PROTOBUF_INCLUDED_adapter_5fconfig_2eproto
#define PROTOBUF_INCLUDED_adapter_5fconfig_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_adapter_5fconfig_2eproto 

namespace protobuf_adapter_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_adapter_5fconfig_2eproto
namespace apollo {
namespace common {
namespace adapter {
class AdapterConfig;
class AdapterConfigDefaultTypeInternal;
extern AdapterConfigDefaultTypeInternal _AdapterConfig_default_instance_;
class AdapterManagerConfig;
class AdapterManagerConfigDefaultTypeInternal;
extern AdapterManagerConfigDefaultTypeInternal _AdapterManagerConfig_default_instance_;
}  // namespace adapter
}  // namespace common
}  // namespace apollo
namespace google {
namespace protobuf {
template<> ::apollo::common::adapter::AdapterConfig* Arena::CreateMaybeMessage<::apollo::common::adapter::AdapterConfig>(Arena*);
template<> ::apollo::common::adapter::AdapterManagerConfig* Arena::CreateMaybeMessage<::apollo::common::adapter::AdapterManagerConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace apollo {
namespace common {
namespace adapter {

enum AdapterConfig_MessageType {
  AdapterConfig_MessageType_POINT_CLOUD = 1,
  AdapterConfig_MessageType_VLP16_POINT_CLOUD = 58,
  AdapterConfig_MessageType_GPS = 2,
  AdapterConfig_MessageType_IMU = 3,
  AdapterConfig_MessageType_CHASSIS = 4,
  AdapterConfig_MessageType_LOCALIZATION = 5,
  AdapterConfig_MessageType_PLANNING_TRAJECTORY = 6,
  AdapterConfig_MessageType_MONITOR = 7,
  AdapterConfig_MessageType_PAD = 8,
  AdapterConfig_MessageType_CONTROL_COMMAND = 9,
  AdapterConfig_MessageType_PREDICTION = 10,
  AdapterConfig_MessageType_PERCEPTION_OBSTACLES = 11,
  AdapterConfig_MessageType_TRAFFIC_LIGHT_DETECTION = 12,
  AdapterConfig_MessageType_CHASSIS_DETAIL = 13,
  AdapterConfig_MessageType_DECISION PROTOBUF_DEPRECATED = 14,
  AdapterConfig_MessageType_CANBUS = 15,
  AdapterConfig_MessageType_ROUTING_REQUEST = 16,
  AdapterConfig_MessageType_ROUTING_RESPONSE = 17,
  AdapterConfig_MessageType_RELATIVE_ODOMETRY = 18,
  AdapterConfig_MessageType_INS_STAT = 19,
  AdapterConfig_MessageType_HMI_COMMAND PROTOBUF_DEPRECATED = 20,
  AdapterConfig_MessageType_MOBILEYE = 21,
  AdapterConfig_MessageType_DELPHIESR = 22,
  AdapterConfig_MessageType_COMPRESSED_IMAGE = 23,
  AdapterConfig_MessageType_SYSTEM_STATUS = 24,
  AdapterConfig_MessageType_INS_STATUS = 25,
  AdapterConfig_MessageType_GNSS_STATUS = 26,
  AdapterConfig_MessageType_CONTI_RADAR = 27,
  AdapterConfig_MessageType_IMAGE_SHORT = 28,
  AdapterConfig_MessageType_IMAGE_LONG = 29,
  AdapterConfig_MessageType_DRIVE_EVENT = 30,
  AdapterConfig_MessageType_GNSS_RTK_OBS = 31,
  AdapterConfig_MessageType_GNSS_RTK_EPH = 32,
  AdapterConfig_MessageType_GNSS_BEST_POSE = 33,
  AdapterConfig_MessageType_LOCALIZATION_MSF_GNSS = 34,
  AdapterConfig_MessageType_LOCALIZATION_MSF_LIDAR = 35,
  AdapterConfig_MessageType_LOCALIZATION_MSF_SINS_PVA = 36,
  AdapterConfig_MessageType_RAW_IMU = 37,
  AdapterConfig_MessageType_LOCALIZATION_MSF_STATUS = 38,
  AdapterConfig_MessageType_STATIC_INFO = 39,
  AdapterConfig_MessageType_RELATIVE_MAP = 40,
  AdapterConfig_MessageType_NAVIGATION = 41,
  AdapterConfig_MessageType_ULTRASONIC_RADAR = 42,
  AdapterConfig_MessageType_AUDIO_CAPTURE = 43,
  AdapterConfig_MessageType_IMAGE_FRONT = 45,
  AdapterConfig_MessageType_PANDORA_POINT_CLOUD = 46,
  AdapterConfig_MessageType_PANDORA_CAMERA_FRONT_COLOR = 47,
  AdapterConfig_MessageType_PANDORA_CAMERA_RIGHT_GRAY = 48,
  AdapterConfig_MessageType_PANDORA_CAMERA_LEFT_GRAY = 49,
  AdapterConfig_MessageType_PANDORA_CAMERA_FRONT_GRAY = 50,
  AdapterConfig_MessageType_PANDORA_CAMERA_BACK_GRAY = 51,
  AdapterConfig_MessageType_PERCEPTION_LANE_MASK = 52,
  AdapterConfig_MessageType_GUARDIAN = 53,
  AdapterConfig_MessageType_GNSS_RAW_DATA = 54,
  AdapterConfig_MessageType_STREAM_STATUS = 55,
  AdapterConfig_MessageType_GNSS_HEADING = 56,
  AdapterConfig_MessageType_RTCM_DATA = 57,
  AdapterConfig_MessageType_RACOBIT_RADAR = 59,
  AdapterConfig_MessageType_POINT_CLOUD_DENSE = 60,
  AdapterConfig_MessageType_POINT_CLOUD_DENSE_RAW = 61,
  AdapterConfig_MessageType_VELODYNE_SCAN_DENSE = 62,
  AdapterConfig_MessageType_POINT_CLOUD_SPARSE_1 = 63,
  AdapterConfig_MessageType_POINT_CLOUD_SPARSE_RAW_1 = 64,
  AdapterConfig_MessageType_VELODYNE_SCAN_SPARSE_1 = 65,
  AdapterConfig_MessageType_POINT_CLOUD_SPARSE_2 = 66,
  AdapterConfig_MessageType_POINT_CLOUD_SPARSE_RAW_2 = 67,
  AdapterConfig_MessageType_VELODYNE_SCAN_SPARSE_2 = 68,
  AdapterConfig_MessageType_POINT_CLOUD_SPARSE_3 = 69,
  AdapterConfig_MessageType_POINT_CLOUD_SPARSE_RAW_3 = 70,
  AdapterConfig_MessageType_VELODYNE_SCAN_SPARSE_3 = 71,
  AdapterConfig_MessageType_CAMERA_IMAGE_LONG = 72,
  AdapterConfig_MessageType_CAMERA_IMAGE_SHORT = 73,
  AdapterConfig_MessageType_PLANNING_PAD = 74,
  AdapterConfig_MessageType_STORYTELLING = 75
};
bool AdapterConfig_MessageType_IsValid(int value);
const AdapterConfig_MessageType AdapterConfig_MessageType_MessageType_MIN = AdapterConfig_MessageType_POINT_CLOUD;
const AdapterConfig_MessageType AdapterConfig_MessageType_MessageType_MAX = AdapterConfig_MessageType_STORYTELLING;
const int AdapterConfig_MessageType_MessageType_ARRAYSIZE = AdapterConfig_MessageType_MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdapterConfig_MessageType_descriptor();
inline const ::std::string& AdapterConfig_MessageType_Name(AdapterConfig_MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdapterConfig_MessageType_descriptor(), value);
}
inline bool AdapterConfig_MessageType_Parse(
    const ::std::string& name, AdapterConfig_MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdapterConfig_MessageType>(
    AdapterConfig_MessageType_descriptor(), name, value);
}
enum AdapterConfig_Mode {
  AdapterConfig_Mode_RECEIVE_ONLY = 0,
  AdapterConfig_Mode_PUBLISH_ONLY = 1,
  AdapterConfig_Mode_DUPLEX = 2
};
bool AdapterConfig_Mode_IsValid(int value);
const AdapterConfig_Mode AdapterConfig_Mode_Mode_MIN = AdapterConfig_Mode_RECEIVE_ONLY;
const AdapterConfig_Mode AdapterConfig_Mode_Mode_MAX = AdapterConfig_Mode_DUPLEX;
const int AdapterConfig_Mode_Mode_ARRAYSIZE = AdapterConfig_Mode_Mode_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdapterConfig_Mode_descriptor();
inline const ::std::string& AdapterConfig_Mode_Name(AdapterConfig_Mode value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdapterConfig_Mode_descriptor(), value);
}
inline bool AdapterConfig_Mode_Parse(
    const ::std::string& name, AdapterConfig_Mode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdapterConfig_Mode>(
    AdapterConfig_Mode_descriptor(), name, value);
}
// ===================================================================

class AdapterConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.adapter.AdapterConfig) */ {
 public:
  AdapterConfig();
  virtual ~AdapterConfig();

  AdapterConfig(const AdapterConfig& from);

  inline AdapterConfig& operator=(const AdapterConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdapterConfig(AdapterConfig&& from) noexcept
    : AdapterConfig() {
    *this = ::std::move(from);
  }

  inline AdapterConfig& operator=(AdapterConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AdapterConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdapterConfig* internal_default_instance() {
    return reinterpret_cast<const AdapterConfig*>(
               &_AdapterConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AdapterConfig* other);
  friend void swap(AdapterConfig& a, AdapterConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdapterConfig* New() const final {
    return CreateMaybeMessage<AdapterConfig>(NULL);
  }

  AdapterConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdapterConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdapterConfig& from);
  void MergeFrom(const AdapterConfig& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AdapterConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef AdapterConfig_MessageType MessageType;
  static const MessageType POINT_CLOUD =
    AdapterConfig_MessageType_POINT_CLOUD;
  static const MessageType VLP16_POINT_CLOUD =
    AdapterConfig_MessageType_VLP16_POINT_CLOUD;
  static const MessageType GPS =
    AdapterConfig_MessageType_GPS;
  static const MessageType IMU =
    AdapterConfig_MessageType_IMU;
  static const MessageType CHASSIS =
    AdapterConfig_MessageType_CHASSIS;
  static const MessageType LOCALIZATION =
    AdapterConfig_MessageType_LOCALIZATION;
  static const MessageType PLANNING_TRAJECTORY =
    AdapterConfig_MessageType_PLANNING_TRAJECTORY;
  static const MessageType MONITOR =
    AdapterConfig_MessageType_MONITOR;
  static const MessageType PAD =
    AdapterConfig_MessageType_PAD;
  static const MessageType CONTROL_COMMAND =
    AdapterConfig_MessageType_CONTROL_COMMAND;
  static const MessageType PREDICTION =
    AdapterConfig_MessageType_PREDICTION;
  static const MessageType PERCEPTION_OBSTACLES =
    AdapterConfig_MessageType_PERCEPTION_OBSTACLES;
  static const MessageType TRAFFIC_LIGHT_DETECTION =
    AdapterConfig_MessageType_TRAFFIC_LIGHT_DETECTION;
  static const MessageType CHASSIS_DETAIL =
    AdapterConfig_MessageType_CHASSIS_DETAIL;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const MessageType DECISION =
    AdapterConfig_MessageType_DECISION;
  static const MessageType CANBUS =
    AdapterConfig_MessageType_CANBUS;
  static const MessageType ROUTING_REQUEST =
    AdapterConfig_MessageType_ROUTING_REQUEST;
  static const MessageType ROUTING_RESPONSE =
    AdapterConfig_MessageType_ROUTING_RESPONSE;
  static const MessageType RELATIVE_ODOMETRY =
    AdapterConfig_MessageType_RELATIVE_ODOMETRY;
  static const MessageType INS_STAT =
    AdapterConfig_MessageType_INS_STAT;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const MessageType HMI_COMMAND =
    AdapterConfig_MessageType_HMI_COMMAND;
  static const MessageType MOBILEYE =
    AdapterConfig_MessageType_MOBILEYE;
  static const MessageType DELPHIESR =
    AdapterConfig_MessageType_DELPHIESR;
  static const MessageType COMPRESSED_IMAGE =
    AdapterConfig_MessageType_COMPRESSED_IMAGE;
  static const MessageType SYSTEM_STATUS =
    AdapterConfig_MessageType_SYSTEM_STATUS;
  static const MessageType INS_STATUS =
    AdapterConfig_MessageType_INS_STATUS;
  static const MessageType GNSS_STATUS =
    AdapterConfig_MessageType_GNSS_STATUS;
  static const MessageType CONTI_RADAR =
    AdapterConfig_MessageType_CONTI_RADAR;
  static const MessageType IMAGE_SHORT =
    AdapterConfig_MessageType_IMAGE_SHORT;
  static const MessageType IMAGE_LONG =
    AdapterConfig_MessageType_IMAGE_LONG;
  static const MessageType DRIVE_EVENT =
    AdapterConfig_MessageType_DRIVE_EVENT;
  static const MessageType GNSS_RTK_OBS =
    AdapterConfig_MessageType_GNSS_RTK_OBS;
  static const MessageType GNSS_RTK_EPH =
    AdapterConfig_MessageType_GNSS_RTK_EPH;
  static const MessageType GNSS_BEST_POSE =
    AdapterConfig_MessageType_GNSS_BEST_POSE;
  static const MessageType LOCALIZATION_MSF_GNSS =
    AdapterConfig_MessageType_LOCALIZATION_MSF_GNSS;
  static const MessageType LOCALIZATION_MSF_LIDAR =
    AdapterConfig_MessageType_LOCALIZATION_MSF_LIDAR;
  static const MessageType LOCALIZATION_MSF_SINS_PVA =
    AdapterConfig_MessageType_LOCALIZATION_MSF_SINS_PVA;
  static const MessageType RAW_IMU =
    AdapterConfig_MessageType_RAW_IMU;
  static const MessageType LOCALIZATION_MSF_STATUS =
    AdapterConfig_MessageType_LOCALIZATION_MSF_STATUS;
  static const MessageType STATIC_INFO =
    AdapterConfig_MessageType_STATIC_INFO;
  static const MessageType RELATIVE_MAP =
    AdapterConfig_MessageType_RELATIVE_MAP;
  static const MessageType NAVIGATION =
    AdapterConfig_MessageType_NAVIGATION;
  static const MessageType ULTRASONIC_RADAR =
    AdapterConfig_MessageType_ULTRASONIC_RADAR;
  static const MessageType AUDIO_CAPTURE =
    AdapterConfig_MessageType_AUDIO_CAPTURE;
  static const MessageType IMAGE_FRONT =
    AdapterConfig_MessageType_IMAGE_FRONT;
  static const MessageType PANDORA_POINT_CLOUD =
    AdapterConfig_MessageType_PANDORA_POINT_CLOUD;
  static const MessageType PANDORA_CAMERA_FRONT_COLOR =
    AdapterConfig_MessageType_PANDORA_CAMERA_FRONT_COLOR;
  static const MessageType PANDORA_CAMERA_RIGHT_GRAY =
    AdapterConfig_MessageType_PANDORA_CAMERA_RIGHT_GRAY;
  static const MessageType PANDORA_CAMERA_LEFT_GRAY =
    AdapterConfig_MessageType_PANDORA_CAMERA_LEFT_GRAY;
  static const MessageType PANDORA_CAMERA_FRONT_GRAY =
    AdapterConfig_MessageType_PANDORA_CAMERA_FRONT_GRAY;
  static const MessageType PANDORA_CAMERA_BACK_GRAY =
    AdapterConfig_MessageType_PANDORA_CAMERA_BACK_GRAY;
  static const MessageType PERCEPTION_LANE_MASK =
    AdapterConfig_MessageType_PERCEPTION_LANE_MASK;
  static const MessageType GUARDIAN =
    AdapterConfig_MessageType_GUARDIAN;
  static const MessageType GNSS_RAW_DATA =
    AdapterConfig_MessageType_GNSS_RAW_DATA;
  static const MessageType STREAM_STATUS =
    AdapterConfig_MessageType_STREAM_STATUS;
  static const MessageType GNSS_HEADING =
    AdapterConfig_MessageType_GNSS_HEADING;
  static const MessageType RTCM_DATA =
    AdapterConfig_MessageType_RTCM_DATA;
  static const MessageType RACOBIT_RADAR =
    AdapterConfig_MessageType_RACOBIT_RADAR;
  static const MessageType POINT_CLOUD_DENSE =
    AdapterConfig_MessageType_POINT_CLOUD_DENSE;
  static const MessageType POINT_CLOUD_DENSE_RAW =
    AdapterConfig_MessageType_POINT_CLOUD_DENSE_RAW;
  static const MessageType VELODYNE_SCAN_DENSE =
    AdapterConfig_MessageType_VELODYNE_SCAN_DENSE;
  static const MessageType POINT_CLOUD_SPARSE_1 =
    AdapterConfig_MessageType_POINT_CLOUD_SPARSE_1;
  static const MessageType POINT_CLOUD_SPARSE_RAW_1 =
    AdapterConfig_MessageType_POINT_CLOUD_SPARSE_RAW_1;
  static const MessageType VELODYNE_SCAN_SPARSE_1 =
    AdapterConfig_MessageType_VELODYNE_SCAN_SPARSE_1;
  static const MessageType POINT_CLOUD_SPARSE_2 =
    AdapterConfig_MessageType_POINT_CLOUD_SPARSE_2;
  static const MessageType POINT_CLOUD_SPARSE_RAW_2 =
    AdapterConfig_MessageType_POINT_CLOUD_SPARSE_RAW_2;
  static const MessageType VELODYNE_SCAN_SPARSE_2 =
    AdapterConfig_MessageType_VELODYNE_SCAN_SPARSE_2;
  static const MessageType POINT_CLOUD_SPARSE_3 =
    AdapterConfig_MessageType_POINT_CLOUD_SPARSE_3;
  static const MessageType POINT_CLOUD_SPARSE_RAW_3 =
    AdapterConfig_MessageType_POINT_CLOUD_SPARSE_RAW_3;
  static const MessageType VELODYNE_SCAN_SPARSE_3 =
    AdapterConfig_MessageType_VELODYNE_SCAN_SPARSE_3;
  static const MessageType CAMERA_IMAGE_LONG =
    AdapterConfig_MessageType_CAMERA_IMAGE_LONG;
  static const MessageType CAMERA_IMAGE_SHORT =
    AdapterConfig_MessageType_CAMERA_IMAGE_SHORT;
  static const MessageType PLANNING_PAD =
    AdapterConfig_MessageType_PLANNING_PAD;
  static const MessageType STORYTELLING =
    AdapterConfig_MessageType_STORYTELLING;
  static inline bool MessageType_IsValid(int value) {
    return AdapterConfig_MessageType_IsValid(value);
  }
  static const MessageType MessageType_MIN =
    AdapterConfig_MessageType_MessageType_MIN;
  static const MessageType MessageType_MAX =
    AdapterConfig_MessageType_MessageType_MAX;
  static const int MessageType_ARRAYSIZE =
    AdapterConfig_MessageType_MessageType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MessageType_descriptor() {
    return AdapterConfig_MessageType_descriptor();
  }
  static inline const ::std::string& MessageType_Name(MessageType value) {
    return AdapterConfig_MessageType_Name(value);
  }
  static inline bool MessageType_Parse(const ::std::string& name,
      MessageType* value) {
    return AdapterConfig_MessageType_Parse(name, value);
  }

  typedef AdapterConfig_Mode Mode;
  static const Mode RECEIVE_ONLY =
    AdapterConfig_Mode_RECEIVE_ONLY;
  static const Mode PUBLISH_ONLY =
    AdapterConfig_Mode_PUBLISH_ONLY;
  static const Mode DUPLEX =
    AdapterConfig_Mode_DUPLEX;
  static inline bool Mode_IsValid(int value) {
    return AdapterConfig_Mode_IsValid(value);
  }
  static const Mode Mode_MIN =
    AdapterConfig_Mode_Mode_MIN;
  static const Mode Mode_MAX =
    AdapterConfig_Mode_Mode_MAX;
  static const int Mode_ARRAYSIZE =
    AdapterConfig_Mode_Mode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Mode_descriptor() {
    return AdapterConfig_Mode_descriptor();
  }
  static inline const ::std::string& Mode_Name(Mode value) {
    return AdapterConfig_Mode_Name(value);
  }
  static inline bool Mode_Parse(const ::std::string& name,
      Mode* value) {
    return AdapterConfig_Mode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string topic = 5;
  bool has_topic() const;
  void clear_topic();
  static const int kTopicFieldNumber = 5;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  #if LANG_CXX11
  void set_topic(::std::string&& value);
  #endif
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // optional .apollo.common.adapter.AdapterConfig.Mode mode = 2;
  bool has_mode() const;
  void clear_mode();
  static const int kModeFieldNumber = 2;
  ::apollo::common::adapter::AdapterConfig_Mode mode() const;
  void set_mode(::apollo::common::adapter::AdapterConfig_Mode value);

  // optional bool latch = 4 [default = false];
  bool has_latch() const;
  void clear_latch();
  static const int kLatchFieldNumber = 4;
  bool latch() const;
  void set_latch(bool value);

  // optional .apollo.common.adapter.AdapterConfig.MessageType type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::apollo::common::adapter::AdapterConfig_MessageType type() const;
  void set_type(::apollo::common::adapter::AdapterConfig_MessageType value);

  // optional int32 message_history_limit = 3 [default = 10];
  bool has_message_history_limit() const;
  void clear_message_history_limit();
  static const int kMessageHistoryLimitFieldNumber = 3;
  ::google::protobuf::int32 message_history_limit() const;
  void set_message_history_limit(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:apollo.common.adapter.AdapterConfig)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_mode();
  void clear_has_mode();
  void set_has_message_history_limit();
  void clear_has_message_history_limit();
  void set_has_latch();
  void clear_has_latch();
  void set_has_topic();
  void clear_has_topic();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  int mode_;
  bool latch_;
  int type_;
  ::google::protobuf::int32 message_history_limit_;
  friend struct ::protobuf_adapter_5fconfig_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AdapterManagerConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.adapter.AdapterManagerConfig) */ {
 public:
  AdapterManagerConfig();
  virtual ~AdapterManagerConfig();

  AdapterManagerConfig(const AdapterManagerConfig& from);

  inline AdapterManagerConfig& operator=(const AdapterManagerConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdapterManagerConfig(AdapterManagerConfig&& from) noexcept
    : AdapterManagerConfig() {
    *this = ::std::move(from);
  }

  inline AdapterManagerConfig& operator=(AdapterManagerConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AdapterManagerConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdapterManagerConfig* internal_default_instance() {
    return reinterpret_cast<const AdapterManagerConfig*>(
               &_AdapterManagerConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AdapterManagerConfig* other);
  friend void swap(AdapterManagerConfig& a, AdapterManagerConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdapterManagerConfig* New() const final {
    return CreateMaybeMessage<AdapterManagerConfig>(NULL);
  }

  AdapterManagerConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdapterManagerConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdapterManagerConfig& from);
  void MergeFrom(const AdapterManagerConfig& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AdapterManagerConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .apollo.common.adapter.AdapterConfig config = 1;
  int config_size() const;
  void clear_config();
  static const int kConfigFieldNumber = 1;
  ::apollo::common::adapter::AdapterConfig* mutable_config(int index);
  ::google::protobuf::RepeatedPtrField< ::apollo::common::adapter::AdapterConfig >*
      mutable_config();
  const ::apollo::common::adapter::AdapterConfig& config(int index) const;
  ::apollo::common::adapter::AdapterConfig* add_config();
  const ::google::protobuf::RepeatedPtrField< ::apollo::common::adapter::AdapterConfig >&
      config() const;

  // optional bool is_ros = 2;
  bool has_is_ros() const;
  void clear_is_ros();
  static const int kIsRosFieldNumber = 2;
  bool is_ros() const;
  void set_is_ros(bool value);

  // @@protoc_insertion_point(class_scope:apollo.common.adapter.AdapterManagerConfig)
 private:
  void set_has_is_ros();
  void clear_has_is_ros();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::common::adapter::AdapterConfig > config_;
  bool is_ros_;
  friend struct ::protobuf_adapter_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdapterConfig

// optional .apollo.common.adapter.AdapterConfig.MessageType type = 1;
inline bool AdapterConfig::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AdapterConfig::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AdapterConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AdapterConfig::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::apollo::common::adapter::AdapterConfig_MessageType AdapterConfig::type() const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterConfig.type)
  return static_cast< ::apollo::common::adapter::AdapterConfig_MessageType >(type_);
}
inline void AdapterConfig::set_type(::apollo::common::adapter::AdapterConfig_MessageType value) {
  assert(::apollo::common::adapter::AdapterConfig_MessageType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.adapter.AdapterConfig.type)
}

// optional .apollo.common.adapter.AdapterConfig.Mode mode = 2;
inline bool AdapterConfig::has_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AdapterConfig::set_has_mode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AdapterConfig::clear_has_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AdapterConfig::clear_mode() {
  mode_ = 0;
  clear_has_mode();
}
inline ::apollo::common::adapter::AdapterConfig_Mode AdapterConfig::mode() const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterConfig.mode)
  return static_cast< ::apollo::common::adapter::AdapterConfig_Mode >(mode_);
}
inline void AdapterConfig::set_mode(::apollo::common::adapter::AdapterConfig_Mode value) {
  assert(::apollo::common::adapter::AdapterConfig_Mode_IsValid(value));
  set_has_mode();
  mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.adapter.AdapterConfig.mode)
}

// optional int32 message_history_limit = 3 [default = 10];
inline bool AdapterConfig::has_message_history_limit() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AdapterConfig::set_has_message_history_limit() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AdapterConfig::clear_has_message_history_limit() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AdapterConfig::clear_message_history_limit() {
  message_history_limit_ = 10;
  clear_has_message_history_limit();
}
inline ::google::protobuf::int32 AdapterConfig::message_history_limit() const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterConfig.message_history_limit)
  return message_history_limit_;
}
inline void AdapterConfig::set_message_history_limit(::google::protobuf::int32 value) {
  set_has_message_history_limit();
  message_history_limit_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.adapter.AdapterConfig.message_history_limit)
}

// optional bool latch = 4 [default = false];
inline bool AdapterConfig::has_latch() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AdapterConfig::set_has_latch() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AdapterConfig::clear_has_latch() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AdapterConfig::clear_latch() {
  latch_ = false;
  clear_has_latch();
}
inline bool AdapterConfig::latch() const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterConfig.latch)
  return latch_;
}
inline void AdapterConfig::set_latch(bool value) {
  set_has_latch();
  latch_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.adapter.AdapterConfig.latch)
}

// optional string topic = 5;
inline bool AdapterConfig::has_topic() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AdapterConfig::set_has_topic() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AdapterConfig::clear_has_topic() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AdapterConfig::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_topic();
}
inline const ::std::string& AdapterConfig::topic() const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterConfig.topic)
  return topic_.GetNoArena();
}
inline void AdapterConfig::set_topic(const ::std::string& value) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.common.adapter.AdapterConfig.topic)
}
#if LANG_CXX11
inline void AdapterConfig::set_topic(::std::string&& value) {
  set_has_topic();
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.common.adapter.AdapterConfig.topic)
}
#endif
inline void AdapterConfig::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.common.adapter.AdapterConfig.topic)
}
inline void AdapterConfig::set_topic(const char* value, size_t size) {
  set_has_topic();
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.common.adapter.AdapterConfig.topic)
}
inline ::std::string* AdapterConfig::mutable_topic() {
  set_has_topic();
  // @@protoc_insertion_point(field_mutable:apollo.common.adapter.AdapterConfig.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AdapterConfig::release_topic() {
  // @@protoc_insertion_point(field_release:apollo.common.adapter.AdapterConfig.topic)
  if (!has_topic()) {
    return NULL;
  }
  clear_has_topic();
  return topic_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AdapterConfig::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    set_has_topic();
  } else {
    clear_has_topic();
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:apollo.common.adapter.AdapterConfig.topic)
}

// -------------------------------------------------------------------

// AdapterManagerConfig

// repeated .apollo.common.adapter.AdapterConfig config = 1;
inline int AdapterManagerConfig::config_size() const {
  return config_.size();
}
inline void AdapterManagerConfig::clear_config() {
  config_.Clear();
}
inline ::apollo::common::adapter::AdapterConfig* AdapterManagerConfig::mutable_config(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.common.adapter.AdapterManagerConfig.config)
  return config_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::common::adapter::AdapterConfig >*
AdapterManagerConfig::mutable_config() {
  // @@protoc_insertion_point(field_mutable_list:apollo.common.adapter.AdapterManagerConfig.config)
  return &config_;
}
inline const ::apollo::common::adapter::AdapterConfig& AdapterManagerConfig::config(int index) const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterManagerConfig.config)
  return config_.Get(index);
}
inline ::apollo::common::adapter::AdapterConfig* AdapterManagerConfig::add_config() {
  // @@protoc_insertion_point(field_add:apollo.common.adapter.AdapterManagerConfig.config)
  return config_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::common::adapter::AdapterConfig >&
AdapterManagerConfig::config() const {
  // @@protoc_insertion_point(field_list:apollo.common.adapter.AdapterManagerConfig.config)
  return config_;
}

// optional bool is_ros = 2;
inline bool AdapterManagerConfig::has_is_ros() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AdapterManagerConfig::set_has_is_ros() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AdapterManagerConfig::clear_has_is_ros() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AdapterManagerConfig::clear_is_ros() {
  is_ros_ = false;
  clear_has_is_ros();
}
inline bool AdapterManagerConfig::is_ros() const {
  // @@protoc_insertion_point(field_get:apollo.common.adapter.AdapterManagerConfig.is_ros)
  return is_ros_;
}
inline void AdapterManagerConfig::set_is_ros(bool value) {
  set_has_is_ros();
  is_ros_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.adapter.AdapterManagerConfig.is_ros)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace adapter
}  // namespace common
}  // namespace apollo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::common::adapter::AdapterConfig_MessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::adapter::AdapterConfig_MessageType>() {
  return ::apollo::common::adapter::AdapterConfig_MessageType_descriptor();
}
template <> struct is_proto_enum< ::apollo::common::adapter::AdapterConfig_Mode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::adapter::AdapterConfig_Mode>() {
  return ::apollo::common::adapter::AdapterConfig_Mode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_adapter_5fconfig_2eproto
