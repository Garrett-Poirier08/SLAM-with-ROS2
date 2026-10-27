// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_type_hash_t *
marine_acoustic_msgs__msg__DetectionFlag__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0x3c, 0x78, 0xcf, 0x2c, 0xc8, 0x72, 0x2d,
      0x83, 0x72, 0x34, 0x8d, 0x0b, 0xf5, 0xc3, 0xe3,
      0x48, 0x39, 0xba, 0xa3, 0x01, 0x0f, 0x88, 0x4a,
      0x73, 0xe1, 0xd2, 0xae, 0x35, 0xb9, 0x00, 0x5c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marine_acoustic_msgs__msg__DetectionFlag__TYPE_NAME[] = "marine_acoustic_msgs/msg/DetectionFlag";

// Define type names, field names, and default values
static char marine_acoustic_msgs__msg__DetectionFlag__FIELD_NAME__flag[] = "flag";

static rosidl_runtime_c__type_description__Field marine_acoustic_msgs__msg__DetectionFlag__FIELDS[] = {
  {
    {marine_acoustic_msgs__msg__DetectionFlag__FIELD_NAME__flag, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marine_acoustic_msgs__msg__DetectionFlag__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marine_acoustic_msgs__msg__DetectionFlag__TYPE_NAME, 38, 38},
      {marine_acoustic_msgs__msg__DetectionFlag__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Beam is OK\n"
  "uint8 DETECT_OK = 0\n"
  "# Beam is flagged as bad by the sonar.  Think hard before second-guessing\n"
  "uint8 DETECT_BAD_SONAR = 1\n"
  "# Beam is flagged as bad by some automated filter applied during processing.\n"
  "uint8 DETECT_BAD_FILTER = 2\n"
  "# Beam is flagged as bad by the user. This is probably not happening in\n"
  "# realtime, but is included here so the same message can be used throughout\n"
  "# a post-processing pipeline.\n"
  "uint8 DETECT_BAD_USER = 4\n"
  "\n"
  "# These arrays should have the same dimensions, and should match\n"
  "# the number of beams for this sonar.\n"
  "#\n"
  "# Some fields are optional.  Those should have 0 length.\n"
  "\n"
  "# Flag values for every beam\n"
  "uint8 flag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marine_acoustic_msgs__msg__DetectionFlag__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marine_acoustic_msgs__msg__DetectionFlag__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 647, 647},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_acoustic_msgs__msg__DetectionFlag__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marine_acoustic_msgs__msg__DetectionFlag__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
