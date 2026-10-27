// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from actuator_msgs:msg/ActuatorsLinearPosition.idl
// generated code does not contain a copyright notice

#include "actuator_msgs/msg/detail/actuators_linear_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_type_hash_t *
actuator_msgs__msg__ActuatorsLinearPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x2e, 0x69, 0x20, 0x52, 0x49, 0xb0, 0x71,
      0x96, 0x02, 0x64, 0x87, 0x19, 0x93, 0xa0, 0x7f,
      0x7b, 0x5a, 0xfa, 0xe3, 0xff, 0xdb, 0x66, 0x5c,
      0x2a, 0x58, 0xda, 0xfb, 0x91, 0x58, 0x38, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char actuator_msgs__msg__ActuatorsLinearPosition__TYPE_NAME[] = "actuator_msgs/msg/ActuatorsLinearPosition";

// Define type names, field names, and default values
static char actuator_msgs__msg__ActuatorsLinearPosition__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field actuator_msgs__msg__ActuatorsLinearPosition__FIELDS[] = {
  {
    {actuator_msgs__msg__ActuatorsLinearPosition__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
actuator_msgs__msg__ActuatorsLinearPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {actuator_msgs__msg__ActuatorsLinearPosition__TYPE_NAME, 41, 41},
      {actuator_msgs__msg__ActuatorsLinearPosition__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message defines lowest level commands to be sent\n"
  "# to the actuator(s) for linear position.\n"
  "\n"
  "float64[] position\\t\\t# Position of the actuators in [m]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
actuator_msgs__msg__ActuatorsLinearPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {actuator_msgs__msg__ActuatorsLinearPosition__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 154, 154},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
actuator_msgs__msg__ActuatorsLinearPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *actuator_msgs__msg__ActuatorsLinearPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
