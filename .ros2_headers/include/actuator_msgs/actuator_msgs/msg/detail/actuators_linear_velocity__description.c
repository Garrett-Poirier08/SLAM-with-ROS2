// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from actuator_msgs:msg/ActuatorsLinearVelocity.idl
// generated code does not contain a copyright notice

#include "actuator_msgs/msg/detail/actuators_linear_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_type_hash_t *
actuator_msgs__msg__ActuatorsLinearVelocity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0xe6, 0xe9, 0x9d, 0x4d, 0x8f, 0x5f, 0xe7,
      0x54, 0x83, 0x59, 0x25, 0x37, 0x7d, 0x19, 0xa8,
      0xc5, 0xcc, 0xa8, 0x89, 0xaa, 0xd1, 0x9b, 0xac,
      0x1c, 0xd8, 0xa8, 0x01, 0x27, 0xab, 0x6f, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char actuator_msgs__msg__ActuatorsLinearVelocity__TYPE_NAME[] = "actuator_msgs/msg/ActuatorsLinearVelocity";

// Define type names, field names, and default values
static char actuator_msgs__msg__ActuatorsLinearVelocity__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field actuator_msgs__msg__ActuatorsLinearVelocity__FIELDS[] = {
  {
    {actuator_msgs__msg__ActuatorsLinearVelocity__FIELD_NAME__velocity, 8, 8},
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
actuator_msgs__msg__ActuatorsLinearVelocity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {actuator_msgs__msg__ActuatorsLinearVelocity__TYPE_NAME, 41, 41},
      {actuator_msgs__msg__ActuatorsLinearVelocity__FIELDS, 1, 1},
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
  "# to the actuator(s) for linear velocity.\n"
  "\n"
  "float64[] velocity\\t\\t# Velocity of the actuators in [m/s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
actuator_msgs__msg__ActuatorsLinearVelocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {actuator_msgs__msg__ActuatorsLinearVelocity__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 156, 156},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
actuator_msgs__msg__ActuatorsLinearVelocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *actuator_msgs__msg__ActuatorsLinearVelocity__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
