// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_type_hash_t *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xd0, 0xb9, 0x34, 0xee, 0x83, 0x32, 0xc9,
      0xf7, 0x9e, 0x04, 0xc3, 0x61, 0xde, 0x07, 0x93,
      0xc1, 0x65, 0xb2, 0xde, 0xe1, 0x4f, 0x2c, 0x0d,
      0x25, 0xc3, 0x22, 0x7c, 0xd5, 0x0d, 0x46, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t marine_acoustic_msgs__msg__PingInfo__EXPECTED_HASH = {1, {
    0x61, 0x58, 0x89, 0x4d, 0xb5, 0xc1, 0xe6, 0x73,
    0x87, 0x66, 0x22, 0x87, 0x04, 0xe9, 0xb1, 0x98,
    0x00, 0x1f, 0x58, 0xcf, 0x62, 0xb0, 0x2a, 0xef,
    0x41, 0xe0, 0x4a, 0xe6, 0xa4, 0xf5, 0x09, 0x89,
  }};
static const rosidl_type_hash_t marine_acoustic_msgs__msg__SonarImageData__EXPECTED_HASH = {1, {
    0x50, 0xfb, 0x28, 0xa4, 0x28, 0x28, 0x2c, 0x0c,
    0x37, 0x2a, 0x89, 0x73, 0x99, 0x65, 0x18, 0x36,
    0x89, 0x2f, 0xa1, 0x3d, 0x8d, 0x56, 0xcb, 0x67,
    0xbf, 0xef, 0xfa, 0xc8, 0x80, 0x3e, 0x58, 0xf7,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char marine_acoustic_msgs__msg__ProjectedSonarImage__TYPE_NAME[] = "marine_acoustic_msgs/msg/ProjectedSonarImage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char marine_acoustic_msgs__msg__PingInfo__TYPE_NAME[] = "marine_acoustic_msgs/msg/PingInfo";
static char marine_acoustic_msgs__msg__SonarImageData__TYPE_NAME[] = "marine_acoustic_msgs/msg/SonarImageData";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__header[] = "header";
static char marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__ping_info[] = "ping_info";
static char marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__beam_directions[] = "beam_directions";
static char marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__ranges[] = "ranges";
static char marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__image[] = "image";

static rosidl_runtime_c__type_description__Field marine_acoustic_msgs__msg__ProjectedSonarImage__FIELDS[] = {
  {
    {marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__ping_info, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {marine_acoustic_msgs__msg__PingInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__beam_directions, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__ranges, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__ProjectedSonarImage__FIELD_NAME__image, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {marine_acoustic_msgs__msg__SonarImageData__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription marine_acoustic_msgs__msg__ProjectedSonarImage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__PingInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarImageData__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marine_acoustic_msgs__msg__ProjectedSonarImage__TYPE_NAME, 44, 44},
      {marine_acoustic_msgs__msg__ProjectedSonarImage__FIELDS, 5, 5},
    },
    {marine_acoustic_msgs__msg__ProjectedSonarImage__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&marine_acoustic_msgs__msg__PingInfo__EXPECTED_HASH, marine_acoustic_msgs__msg__PingInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = marine_acoustic_msgs__msg__PingInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&marine_acoustic_msgs__msg__SonarImageData__EXPECTED_HASH, marine_acoustic_msgs__msg__SonarImageData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = marine_acoustic_msgs__msg__SonarImageData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Single scan from an imaging sonar\n"
  "#\n"
  "# The Z-axis is centered in the plane of the fan (\"forward\"), with X up,\n"
  "# in order to be consistent with the NED for traditional multibeam profilers.\n"
  "#\n"
  "# For sonars with a 1D array, the beams lie on the Y-Z plane, and\n"
  "# and each beam has an azimuth (rotation about X) value.  Zero azimuth\n"
  "# is in the direction of the Z-axis, typically \"straight out\" from the sonar.\n"
  "# Elevation is the orthogonal direction (rotation about Y),\n"
  "# often termed the \"vertical aperture\"\n"
  "\n"
  "# The header time should be the time the ping was transmitted, not\n"
  "# the time the message was received.\n"
  "# Note that these two could potentially be several seconds apart,\n"
  "# especially in deep water.\n"
  "std_msgs/Header header\n"
  "\n"
  "PingInfo ping_info\n"
  "\n"
  "geometry_msgs/Vector3[] beam_directions\n"
  "\n"
  "# Center of each range bin in meters. Note this these may not be equally\n"
  "# spaced, and do not necessarily start at zero range.\n"
  "float32[] ranges\n"
  "\n"
  "SonarImageData image";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marine_acoustic_msgs__msg__ProjectedSonarImage__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 955, 955},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marine_acoustic_msgs__msg__ProjectedSonarImage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *marine_acoustic_msgs__msg__PingInfo__get_individual_type_description_source(NULL);
    sources[4] = *marine_acoustic_msgs__msg__SonarImageData__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
