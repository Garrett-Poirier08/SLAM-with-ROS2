// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from actuator_msgs:msg/ActuatorsPosition.idl
// generated code does not contain a copyright notice

#include "actuator_msgs/msg/detail/actuators_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_type_hash_t *
actuator_msgs__msg__ActuatorsPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x49, 0xf7, 0xcf, 0xd6, 0x5e, 0x60, 0x28,
      0xc0, 0x2e, 0x2d, 0xb7, 0xe3, 0x07, 0xba, 0x73,
      0xe8, 0xd1, 0x0a, 0x25, 0x2d, 0x7e, 0x8d, 0xb1,
      0x6a, 0x9e, 0x0d, 0x03, 0x26, 0x71, 0x7e, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "actuator_msgs/msg/detail/actuators_linear_position__functions.h"
#include "actuator_msgs/msg/detail/actuators_angular_position__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t actuator_msgs__msg__ActuatorsAngularPosition__EXPECTED_HASH = {1, {
    0x47, 0xee, 0x67, 0x3d, 0xb1, 0x49, 0x44, 0x69,
    0x31, 0x32, 0xbe, 0x7b, 0x97, 0xb1, 0x99, 0x18,
    0x53, 0x18, 0x54, 0x8a, 0xda, 0x79, 0x80, 0x4f,
    0x55, 0xe1, 0x5d, 0xa6, 0xe4, 0xdf, 0x24, 0xcd,
  }};
static const rosidl_type_hash_t actuator_msgs__msg__ActuatorsLinearPosition__EXPECTED_HASH = {1, {
    0xba, 0x2e, 0x69, 0x20, 0x52, 0x49, 0xb0, 0x71,
    0x96, 0x02, 0x64, 0x87, 0x19, 0x93, 0xa0, 0x7f,
    0x7b, 0x5a, 0xfa, 0xe3, 0xff, 0xdb, 0x66, 0x5c,
    0x2a, 0x58, 0xda, 0xfb, 0x91, 0x58, 0x38, 0xff,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char actuator_msgs__msg__ActuatorsPosition__TYPE_NAME[] = "actuator_msgs/msg/ActuatorsPosition";
static char actuator_msgs__msg__ActuatorsAngularPosition__TYPE_NAME[] = "actuator_msgs/msg/ActuatorsAngularPosition";
static char actuator_msgs__msg__ActuatorsLinearPosition__TYPE_NAME[] = "actuator_msgs/msg/ActuatorsLinearPosition";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char actuator_msgs__msg__ActuatorsPosition__FIELD_NAME__header[] = "header";
static char actuator_msgs__msg__ActuatorsPosition__FIELD_NAME__angular[] = "angular";
static char actuator_msgs__msg__ActuatorsPosition__FIELD_NAME__linear[] = "linear";

static rosidl_runtime_c__type_description__Field actuator_msgs__msg__ActuatorsPosition__FIELDS[] = {
  {
    {actuator_msgs__msg__ActuatorsPosition__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {actuator_msgs__msg__ActuatorsPosition__FIELD_NAME__angular, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {actuator_msgs__msg__ActuatorsAngularPosition__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {actuator_msgs__msg__ActuatorsPosition__FIELD_NAME__linear, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {actuator_msgs__msg__ActuatorsLinearPosition__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription actuator_msgs__msg__ActuatorsPosition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {actuator_msgs__msg__ActuatorsAngularPosition__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {actuator_msgs__msg__ActuatorsLinearPosition__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
actuator_msgs__msg__ActuatorsPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {actuator_msgs__msg__ActuatorsPosition__TYPE_NAME, 35, 35},
      {actuator_msgs__msg__ActuatorsPosition__FIELDS, 3, 3},
    },
    {actuator_msgs__msg__ActuatorsPosition__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&actuator_msgs__msg__ActuatorsAngularPosition__EXPECTED_HASH, actuator_msgs__msg__ActuatorsAngularPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = actuator_msgs__msg__ActuatorsAngularPosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&actuator_msgs__msg__ActuatorsLinearPosition__EXPECTED_HASH, actuator_msgs__msg__ActuatorsLinearPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = actuator_msgs__msg__ActuatorsLinearPosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# This message defines lowest level commands to be sent\n"
  "# to the actuator(s) for position.\n"
  "\n"
  "ActuatorsAngularPosition angular\\t# Position of the actuators in [rad]\n"
  "\n"
  "ActuatorsLinearPosition linear\\t\\t# Position of the actuators in [m]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
actuator_msgs__msg__ActuatorsPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {actuator_msgs__msg__ActuatorsPosition__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 254, 254},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
actuator_msgs__msg__ActuatorsPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *actuator_msgs__msg__ActuatorsPosition__get_individual_type_description_source(NULL),
    sources[1] = *actuator_msgs__msg__ActuatorsAngularPosition__get_individual_type_description_source(NULL);
    sources[2] = *actuator_msgs__msg__ActuatorsLinearPosition__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
