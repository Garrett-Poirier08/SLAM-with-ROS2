// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice

#include "marine_acoustic_msgs/msg/detail/sonar_image_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_type_hash_t *
marine_acoustic_msgs__msg__SonarImageData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xfb, 0x28, 0xa4, 0x28, 0x28, 0x2c, 0x0c,
      0x37, 0x2a, 0x89, 0x73, 0x99, 0x65, 0x18, 0x36,
      0x89, 0x2f, 0xa1, 0x3d, 0x8d, 0x56, 0xcb, 0x67,
      0xbf, 0xef, 0xfa, 0xc8, 0x80, 0x3e, 0x58, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marine_acoustic_msgs__msg__SonarImageData__TYPE_NAME[] = "marine_acoustic_msgs/msg/SonarImageData";

// Define type names, field names, and default values
static char marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__is_bigendian[] = "is_bigendian";
static char marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__dtype[] = "dtype";
static char marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__beam_count[] = "beam_count";
static char marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field marine_acoustic_msgs__msg__SonarImageData__FIELDS[] = {
  {
    {marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__is_bigendian, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__dtype, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__beam_count, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__SonarImageData__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marine_acoustic_msgs__msg__SonarImageData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marine_acoustic_msgs__msg__SonarImageData__TYPE_NAME, 39, 39},
      {marine_acoustic_msgs__msg__SonarImageData__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool    is_bigendian\n"
  "\n"
  "uint32  DTYPE_UINT8 = 0\n"
  "uint32  DTYPE_INT8 = 1\n"
  "uint32  DTYPE_UINT16 = 2\n"
  "uint32  DTYPE_INT16 = 3\n"
  "uint32  DTYPE_UINT32 = 4\n"
  "uint32  DTYPE_INT32 = 5\n"
  "uint32  DTYPE_UINT64 = 6\n"
  "uint32  DTYPE_INT64 = 7\n"
  "uint32  DTYPE_FLOAT32 = 8\n"
  "uint32  DTYPE_FLOAT64 = 9\n"
  "\n"
  "uint32  dtype\n"
  "\n"
  "# the number of beams associated with the image\n"
  "uint32 beam_count\n"
  "\n"
  "# The actually pixel data in row-major (beam_index major) format\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marine_acoustic_msgs__msg__SonarImageData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marine_acoustic_msgs__msg__SonarImageData__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 429, 429},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_acoustic_msgs__msg__SonarImageData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marine_acoustic_msgs__msg__SonarImageData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
