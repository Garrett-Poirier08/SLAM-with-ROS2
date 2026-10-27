// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice

#include "pal_statistics_msgs/msg/detail/statistic__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pal_statistics_msgs
const rosidl_type_hash_t *
pal_statistics_msgs__msg__Statistic__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xb6, 0x30, 0x2f, 0x24, 0x00, 0xf4, 0x4b,
      0xd8, 0xea, 0x51, 0xdf, 0x13, 0x13, 0x7f, 0x60,
      0xf1, 0x1b, 0xa0, 0x09, 0x37, 0xd6, 0x63, 0xfd,
      0xbb, 0x60, 0x62, 0x6d, 0xfb, 0xf9, 0xda, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pal_statistics_msgs__msg__Statistic__TYPE_NAME[] = "pal_statistics_msgs/msg/Statistic";

// Define type names, field names, and default values
static char pal_statistics_msgs__msg__Statistic__FIELD_NAME__name[] = "name";
static char pal_statistics_msgs__msg__Statistic__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field pal_statistics_msgs__msg__Statistic__FIELDS[] = {
  {
    {pal_statistics_msgs__msg__Statistic__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pal_statistics_msgs__msg__Statistic__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pal_statistics_msgs__msg__Statistic__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pal_statistics_msgs__msg__Statistic__TYPE_NAME, 33, 33},
      {pal_statistics_msgs__msg__Statistic__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pal_statistics_msgs__msg__Statistic__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pal_statistics_msgs__msg__Statistic__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pal_statistics_msgs__msg__Statistic__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pal_statistics_msgs__msg__Statistic__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
