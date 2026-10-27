// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/SpawnResult.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/spawn_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__SpawnResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0xc2, 0x77, 0x30, 0x4b, 0x6c, 0x24, 0xbf,
      0xb2, 0xa6, 0x31, 0xce, 0xa8, 0xf5, 0x2e, 0x2b,
      0x00, 0x5d, 0x58, 0x3e, 0xc0, 0xa6, 0xc8, 0x6b,
      0x11, 0x61, 0x3f, 0x5c, 0xe6, 0x48, 0x6d, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "simulation_interfaces/msg/detail/result__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t simulation_interfaces__msg__Result__EXPECTED_HASH = {1, {
    0xcf, 0x43, 0xa3, 0x06, 0xad, 0xff, 0x33, 0x37,
    0xa0, 0xa4, 0x71, 0x43, 0xd8, 0xf5, 0x68, 0x99,
    0x33, 0xbc, 0x70, 0xa3, 0x04, 0x78, 0xf1, 0x3b,
    0x07, 0x7d, 0xc1, 0xfe, 0x3b, 0xc5, 0xad, 0x17,
  }};
#endif

static char simulation_interfaces__msg__SpawnResult__TYPE_NAME[] = "simulation_interfaces/msg/SpawnResult";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";

// Define type names, field names, and default values
static char simulation_interfaces__msg__SpawnResult__FIELD_NAME__result[] = "result";
static char simulation_interfaces__msg__SpawnResult__FIELD_NAME__entity_name[] = "entity_name";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__SpawnResult__FIELDS[] = {
  {
    {simulation_interfaces__msg__SpawnResult__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__SpawnResult__FIELD_NAME__entity_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__msg__SpawnResult__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__SpawnResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__SpawnResult__TYPE_NAME, 37, 37},
      {simulation_interfaces__msg__SpawnResult__FIELDS, 2, 2},
    },
    {simulation_interfaces__msg__SpawnResult__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Result of spawning.\n"
  "uint8 NAME_NOT_UNIQUE       = 101       # Given name is already taken by entity and allow_renaming is false.\n"
  "uint8 NAME_INVALID          = 102       # Given name is invalid in the simulator (e.g. does not meet naming\n"
  "                                        # requirements such as allowed characters). This is also returned if name is\n"
  "                                        # empty and allow_renaming is false.\n"
  "uint8 UNSUPPORTED_FORMAT    = 103       # Format for uri or resource string is unsupported. Check supported formats\n"
  "                                        # through GetSimulatorFeatures service, in spawn_formats field.\n"
  "uint8 NO_RESOURCE           = 104       # Both uri and resource string are empty.\n"
  "uint8 NAMESPACE_INVALID     = 105       # Namespace does not meet namespace naming standards.\n"
  "uint8 RESOURCE_PARSE_ERROR  = 106       # Resource file or string failed to parse.\n"
  "uint8 MISSING_ASSETS        = 107       # At least one of resource assets (such as meshes) was not found.\n"
  "uint8 UNSUPPORTED_ASSETS    = 108       # At least one of resource assets (such as meshes) is not supported.\n"
  "uint8 INVALID_POSE          = 109       # initial_pose is invalid, such as when the quaternion is invalid or position\n"
  "                                        # exceeds simulator world bounds.\n"
  "\n"
  "Result result\n"
  "string entity_name                      # Spawned entity full name, guaranteed to be unique in the simulation.\n"
  "                                        # If allow_renaming is true, it may differ from the request name field.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__SpawnResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__SpawnResult__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1556, 1556},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__SpawnResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__SpawnResult__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
