// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice

#include "marine_acoustic_msgs/msg/detail/dvl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_type_hash_t *
marine_acoustic_msgs__msg__Dvl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0x60, 0x4b, 0xa1, 0xb1, 0x13, 0xd1, 0xa3,
      0x91, 0x48, 0xd0, 0x95, 0xac, 0x2c, 0xb2, 0x15,
      0x40, 0xde, 0x83, 0xcf, 0xf2, 0xbb, 0xc5, 0x44,
      0x3e, 0x06, 0xe2, 0x52, 0x08, 0xaf, 0xd4, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char marine_acoustic_msgs__msg__Dvl__TYPE_NAME[] = "marine_acoustic_msgs/msg/Dvl";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__header[] = "header";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__velocity_mode[] = "velocity_mode";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__dvl_type[] = "dvl_type";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__velocity[] = "velocity";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__velocity_covar[] = "velocity_covar";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__altitude[] = "altitude";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__course_gnd[] = "course_gnd";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__speed_gnd[] = "speed_gnd";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__num_good_beams[] = "num_good_beams";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__sound_speed[] = "sound_speed";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_ranges_valid[] = "beam_ranges_valid";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_velocities_valid[] = "beam_velocities_valid";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_unit_vec[] = "beam_unit_vec";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__range[] = "range";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__range_covar[] = "range_covar";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_quality[] = "beam_quality";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_velocity[] = "beam_velocity";
static char marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_velocity_covar[] = "beam_velocity_covar";

static rosidl_runtime_c__type_description__Field marine_acoustic_msgs__msg__Dvl__FIELDS[] = {
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__velocity_mode, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__dvl_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__velocity_covar, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__course_gnd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__speed_gnd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__num_good_beams, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__sound_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_ranges_valid, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_velocities_valid, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_unit_vec, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      4,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__range_covar, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_quality, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_velocity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marine_acoustic_msgs__msg__Dvl__FIELD_NAME__beam_velocity_covar, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription marine_acoustic_msgs__msg__Dvl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marine_acoustic_msgs__msg__Dvl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marine_acoustic_msgs__msg__Dvl__TYPE_NAME, 28, 28},
      {marine_acoustic_msgs__msg__Dvl__FIELDS, 18, 18},
    },
    {marine_acoustic_msgs__msg__Dvl__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message for single ground-track ping from a DVL.\n"
  "#\n"
  "# This message is modeled after WHOI's Dvl.msg from the ds_sensor_msgs\n"
  "# repository, which was released under a BSD license.\n"
  "# Modifications were made by UW-APL.\n"
  "\n"
  "# ENUM: Velocity mode\n"
  "uint8 DVL_MODE_BOTTOM=1\n"
  "uint8 DVL_MODE_WATER=2\n"
  "\n"
  "# ENUM: DVL Type; used in sound velocity corrections\n"
  "\n"
  "# Standard (Janus) array with one piston transducer for each beam.\n"
  "# If you have 4-5 individual disks on your DVL, use this one.\n"
  "# Examples include Sonardyne Syrinx, Nortek DVLs, and RDI Workhorse\n"
  "uint8 DVL_TYPE_PISTON=0\n"
  "\n"
  "# Phased-array DVL.  If you have one giant disk with complicated stuff\n"
  "# on it, probably this one.\n"
  "# Examples include newer RDI DVLs such as pathfinder, pioneer, and tasman.\n"
  "uint8 DVL_TYPE_PHASED_ARRAY=1\n"
  "\n"
  "# The standard ROS header.\n"
  "# Timestamp is neither transmit nor receive time -- it is the time that\n"
  "# the velocity should be considered valid at.\n"
  "# Frame convention:\n"
  "# * z-axis in direction DVL is pointing\n"
  "# * x-axis aligned with vehicle forward\n"
  "std_msgs/Header header\n"
  "\n"
  "# Velocity mode (see above)\n"
  "uint8 velocity_mode\n"
  "\n"
  "# Type of DVL array employed (see above).  Necessary when\n"
  "# deciding how to apply sound velocity corrections\n"
  "uint8 dvl_type\n"
  "\n"
  "# Velocities [m/s]\n"
  "geometry_msgs/Vector3 velocity\n"
  "\n"
  "# row-major, xyz axes.  Set to \"-1\" if not known.\n"
  "float64[9] velocity_covar\n"
  "\n"
  "# Average altitude of all good beam returns.\n"
  "# For 30-deg sensor, altitude = (sqrt(3) / 2) * sum(range) / num_good_beams\n"
  "float64 altitude\n"
  "# Calculated from xy velocities: course_gnd = atan2(velocity.y, velocity.x)\n"
  "float64 course_gnd\n"
  "# Calculated from xy velocities: speed_gnd = sqrt(velocity.x^2 + velocity.y^2)\n"
  "float64 speed_gnd\n"
  "\n"
  "uint8 num_good_beams\n"
  "\n"
  "# Speed of sound (m/s) used by the DVL\n"
  "float32 sound_speed\n"
  "\n"
  "# Beam data\n"
  "# Some DVLs/DVL configurations only report the derived velocities.\n"
  "bool beam_ranges_valid\n"
  "bool beam_velocities_valid\n"
  "\n"
  "# Geometry of each of the 4 beams\n"
  "geometry_msgs/Vector3[4] beam_unit_vec\n"
  "\n"
  "# beam_unit_vec[i] * range[i] is the point where the beam hits the seafloor.\n"
  "# For a 30-deg sensor, multiply by sqrt(3)/2 to get altitude.\n"
  "float64[4] range\n"
  "float32[4] range_covar\n"
  "\n"
  "# Beam quality flag.\n"
  "# The meaning of this flag is DVL-specific (at least for now).\n"
  "float32[4] beam_quality\n"
  "\n"
  "# Raw velocities for each beam [m/s].\n"
  "# Will be beam 1,2,3,4 velocity in beam coordinates\n"
  "float32[4] beam_velocity\n"
  "# Covariance, as always, should be -1 if unknown\n"
  "float32[4] beam_velocity_covar";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marine_acoustic_msgs__msg__Dvl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marine_acoustic_msgs__msg__Dvl__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2439, 2439},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_acoustic_msgs__msg__Dvl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marine_acoustic_msgs__msg__Dvl__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
