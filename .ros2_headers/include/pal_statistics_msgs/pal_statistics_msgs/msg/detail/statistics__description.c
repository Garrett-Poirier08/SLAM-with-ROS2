// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

#include "pal_statistics_msgs/msg/detail/statistics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pal_statistics_msgs
const rosidl_type_hash_t *
pal_statistics_msgs__msg__Statistics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0xf6, 0xfa, 0xd7, 0xef, 0x98, 0xef, 0x83,
      0x02, 0xd8, 0x9f, 0xca, 0x17, 0x65, 0x8d, 0x0e,
      0x0b, 0x69, 0x22, 0x11, 0x6b, 0xc0, 0x17, 0x32,
      0xa9, 0x25, 0xe5, 0xc7, 0x33, 0x9f, 0xd8, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "pal_statistics_msgs/msg/detail/statistic__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t pal_statistics_msgs__msg__Statistic__EXPECTED_HASH = {1, {
    0x05, 0xb6, 0x30, 0x2f, 0x24, 0x00, 0xf4, 0x4b,
    0xd8, 0xea, 0x51, 0xdf, 0x13, 0x13, 0x7f, 0x60,
    0xf1, 0x1b, 0xa0, 0x09, 0x37, 0xd6, 0x63, 0xfd,
    0xbb, 0x60, 0x62, 0x6d, 0xfb, 0xf9, 0xda, 0xd7,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char pal_statistics_msgs__msg__Statistics__TYPE_NAME[] = "pal_statistics_msgs/msg/Statistics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char pal_statistics_msgs__msg__Statistic__TYPE_NAME[] = "pal_statistics_msgs/msg/Statistic";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char pal_statistics_msgs__msg__Statistics__FIELD_NAME__header[] = "header";
static char pal_statistics_msgs__msg__Statistics__FIELD_NAME__statistics[] = "statistics";

static rosidl_runtime_c__type_description__Field pal_statistics_msgs__msg__Statistics__FIELDS[] = {
  {
    {pal_statistics_msgs__msg__Statistics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {pal_statistics_msgs__msg__Statistics__FIELD_NAME__statistics, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {pal_statistics_msgs__msg__Statistic__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pal_statistics_msgs__msg__Statistics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pal_statistics_msgs__msg__Statistic__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pal_statistics_msgs__msg__Statistics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pal_statistics_msgs__msg__Statistics__TYPE_NAME, 34, 34},
      {pal_statistics_msgs__msg__Statistics__FIELDS, 2, 2},
    },
    {pal_statistics_msgs__msg__Statistics__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pal_statistics_msgs__msg__Statistic__EXPECTED_HASH, pal_statistics_msgs__msg__Statistic__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = pal_statistics_msgs__msg__Statistic__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# header\n"
  "std_msgs/Header header\n"
  "\n"
  "# Statistics\n"
  "Statistic[] statistics";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pal_statistics_msgs__msg__Statistics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pal_statistics_msgs__msg__Statistics__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pal_statistics_msgs__msg__Statistics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pal_statistics_msgs__msg__Statistics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pal_statistics_msgs__msg__Statistic__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
