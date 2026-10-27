// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice

#include "marine_acoustic_msgs/msg/detail/sonar_detections__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_type_hash_t *
marine_acoustic_msgs__msg__SonarDetections__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xe9, 0x46, 0x6b, 0x1d, 0xff, 0x9d, 0x71,
      0xd6, 0xc8, 0xe2, 0x13, 0x79, 0xe8, 0x05, 0x80,
      0x5a, 0x5d, 0x31, 0x5d, 0x89, 0x90, 0x23, 0x96,
      0x1f, 0x18, 0x3b, 0xc3, 0x21, 0x82, 0xe6, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t marine_acoustic_msgs__msg__DetectionFlag__EXPECTED_HASH = {1, {
    0x23, 0x3c, 0x78, 0xcf, 0x2c, 0xc8, 0x72, 0x2d,
    0x83, 0x72, 0x34, 0x8d, 0x0b, 0xf5, 0xc3, 0xe3,
    0x48, 0x39, 0xba, 0xa3, 0x01, 0x0f, 0x88, 0x4a,
    0x73, 0xe1, 0xd2, 0xae, 0x35, 0xb9, 0x00, 0x5c,
  }};
static const rosidl_type_hash_t marine_acoustic_msgs__msg__PingInfo__EXPECTED_HASH = {1, {
    0x61, 0x58, 0x89, 0x4d, 0xb5, 0xc1, 0xe6, 0x73,
    0x87, 0x66, 0x22, 0x87, 0x04, 0xe9, 0xb1, 0x98,
    0x00, 0x1f, 0x58, 0xcf, 0x62, 0xb0, 0x2a, 0xef,
    0x41, 0xe0, 0x4a, 0xe6, 0xa4, 0xf5, 0x09, 0x89,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char marine_acoustic_msgs__msg__SonarDetections__TYPE_NAME[] = "marine_acoustic_msgs/msg/SonarDetections";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char marine_acoustic_msgs__msg__DetectionFlag__TYPE_NAME[] = "marine_acoustic_msgs/msg/DetectionFlag";
static char marine_acoustic_msgs__msg__PingInfo__TYPE_NAME[] = "marine_acoustic_msgs/msg/PingInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__header[] = "header";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__ping_info[] = "ping_info";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__flags[] = "flags";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__two_way_travel_times[] = "two_way_travel_times";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__tx_delays[] = "tx_delays";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__intensities[] = "intensities";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__tx_angles[] = "tx_angles";
static char marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__rx_angles[] = "rx_angles";

static rosidl_runtime_c__type_description__Field marine_acoustic_msgs__msg__SonarDetections__FIELDS[] = {
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__ping_info, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {marine_acoustic_msgs__msg__PingInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {marine_acoustic_msgs__msg__DetectionFlag__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__two_way_travel_times, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__tx_delays, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__intensities, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__tx_angles, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarDetections__FIELD_NAME__rx_angles, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription marine_acoustic_msgs__msg__SonarDetections__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__DetectionFlag__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__PingInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marine_acoustic_msgs__msg__SonarDetections__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marine_acoustic_msgs__msg__SonarDetections__TYPE_NAME, 40, 40},
      {marine_acoustic_msgs__msg__SonarDetections__FIELDS, 8, 8},
    },
    {marine_acoustic_msgs__msg__SonarDetections__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&marine_acoustic_msgs__msg__DetectionFlag__EXPECTED_HASH, marine_acoustic_msgs__msg__DetectionFlag__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = marine_acoustic_msgs__msg__DetectionFlag__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&marine_acoustic_msgs__msg__PingInfo__EXPECTED_HASH, marine_acoustic_msgs__msg__PingInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = marine_acoustic_msgs__msg__PingInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Single ping from a multibeam sonar.\n"
  "#\n"
  "# This message is modeled after WHOI's MultibeamRaw.msg, from the\n"
  "# ds_multibeam_msgs package (released under a BSD license).\n"
  "# Modifications were made by UW-APL.\n"
  "\n"
  "# The header time should be the time the ping was transmitted, not\n"
  "# the time the message was received.\n"
  "# Note that these two could potentially be several seconds apart,\n"
  "# especially in deep water.\n"
  "std_msgs/Header header\n"
  "\n"
  "PingInfo ping_info\n"
  "\n"
  "# Constants declaring whether each beam is good or bad.\n"
  "# This is implemented as an 8-bit masked value; it is possible for more\n"
  "# than one thing to flag beams as bad. To check if a beam is good, simply\n"
  "# check if it is zero.\n"
  "\n"
  "DetectionFlag[] flags\n"
  "\n"
  "# Truly raw multibeam data uses travel times rather than ranges.\n"
  "# reported in seconds\n"
  "float32[] two_way_travel_times\n"
  "\n"
  "# Multi-sector multibeams can transmit different sectors at different times\n"
  "# The Reson doesn't but we include a TX delay for each beam anyway.\n"
  "#\n"
  "# Overall, therefore, our overall time is:\n"
  "#\n"
  "# header.stamp: TX cycle starts\n"
  "# Each beam's TX time: header.stamp + txDelay[i]\n"
  "# Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]\n"
  "# reported in seconds\n"
  "float32[] tx_delays\n"
  "\n"
  "# Sonar-reported intensity.  Usually uncalibrated and crude\n"
  "float32[] intensities\n"
  "\n"
  "# Sonar-reported along-track steering angle (applied to tx beam)\n"
  "# + forward, - aft for a downlooking sonar\n"
  "# reported in radians\n"
  "float32[] tx_angles\n"
  "\n"
  "# Sonar-reported across-track steering angle (applied to rx beam)\n"
  "# + to starboard, - to port for a downlooking sonar\n"
  "# reported in radians\n"
  "float32[] rx_angles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marine_acoustic_msgs__msg__SonarDetections__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marine_acoustic_msgs__msg__SonarDetections__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1594, 1594},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_acoustic_msgs__msg__SonarDetections__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marine_acoustic_msgs__msg__SonarDetections__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *marine_acoustic_msgs__msg__DetectionFlag__get_individual_type_description_source(NULL);
    sources[3] = *marine_acoustic_msgs__msg__PingInfo__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
