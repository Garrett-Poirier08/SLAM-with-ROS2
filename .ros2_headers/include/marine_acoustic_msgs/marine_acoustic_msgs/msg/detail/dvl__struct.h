// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/dvl.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DVL_MODE_BOTTOM'.
/**
  * ENUM: Velocity mode
 */
enum
{
  marine_acoustic_msgs__msg__Dvl__DVL_MODE_BOTTOM = 1
};

/// Constant 'DVL_MODE_WATER'.
enum
{
  marine_acoustic_msgs__msg__Dvl__DVL_MODE_WATER = 2
};

/// Constant 'DVL_TYPE_PISTON'.
/**
  * ENUM: DVL Type; used in sound velocity corrections
  * Standard (Janus) array with one piston transducer for each beam.
  * If you have 4-5 individual disks on your DVL, use this one.
  * Examples include Sonardyne Syrinx, Nortek DVLs, and RDI Workhorse
 */
enum
{
  marine_acoustic_msgs__msg__Dvl__DVL_TYPE_PISTON = 0
};

/// Constant 'DVL_TYPE_PHASED_ARRAY'.
/**
  * Phased-array DVL.  If you have one giant disk with complicated stuff
  * on it, probably this one.
  * Examples include newer RDI DVLs such as pathfinder, pioneer, and tasman.
 */
enum
{
  marine_acoustic_msgs__msg__Dvl__DVL_TYPE_PHASED_ARRAY = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'velocity'
// Member 'beam_unit_vec'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Dvl in the package marine_acoustic_msgs.
/**
  * Message for single ground-track ping from a DVL.
  *
  * This message is modeled after WHOI's Dvl.msg from the ds_sensor_msgs
  * repository, which was released under a BSD license.
  * Modifications were made by UW-APL.
 */
typedef struct marine_acoustic_msgs__msg__Dvl
{
  /// The standard ROS header.
  /// Timestamp is neither transmit nor receive time -- it is the time that
  /// the velocity should be considered valid at.
  /// Frame convention:
  /// * z-axis in direction DVL is pointing
  /// * x-axis aligned with vehicle forward
  std_msgs__msg__Header header;
  /// Velocity mode (see above)
  uint8_t velocity_mode;
  /// Type of DVL array employed (see above).  Necessary when
  /// deciding how to apply sound velocity corrections
  uint8_t dvl_type;
  /// Velocities
  geometry_msgs__msg__Vector3 velocity;
  /// row-major, xyz axes.  Set to "-1" if not known.
  double velocity_covar[9];
  /// Average altitude of all good beam returns.
  /// For 30-deg sensor, altitude = (sqrt(3) / 2) * sum(range) / num_good_beams
  double altitude;
  /// Calculated from xy velocities: course_gnd = atan2(velocity.y, velocity.x)
  double course_gnd;
  /// Calculated from xy velocities: speed_gnd = sqrt(velocity.x^2 + velocity.y^2)
  double speed_gnd;
  uint8_t num_good_beams;
  /// Speed of sound (m/s) used by the DVL
  float sound_speed;
  /// Beam data
  /// Some DVLs/DVL configurations only report the derived velocities.
  bool beam_ranges_valid;
  bool beam_velocities_valid;
  /// Geometry of each of the 4 beams
  geometry_msgs__msg__Vector3 beam_unit_vec[4];
  /// beam_unit_vec[i] * range[i] is the point where the beam hits the seafloor.
  /// For a 30-deg sensor, multiply by sqrt(3)/2 to get altitude.
  double range[4];
  float range_covar[4];
  /// Beam quality flag.
  /// The meaning of this flag is DVL-specific (at least for now).
  float beam_quality[4];
  /// Raw velocities for each beam.
  /// Will be beam 1,2,3,4 velocity in beam coordinates
  float beam_velocity[4];
  /// Covariance, as always, should be -1 if unknown
  float beam_velocity_covar[4];
} marine_acoustic_msgs__msg__Dvl;

// Struct for a sequence of marine_acoustic_msgs__msg__Dvl.
typedef struct marine_acoustic_msgs__msg__Dvl__Sequence
{
  marine_acoustic_msgs__msg__Dvl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__Dvl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__STRUCT_H_
