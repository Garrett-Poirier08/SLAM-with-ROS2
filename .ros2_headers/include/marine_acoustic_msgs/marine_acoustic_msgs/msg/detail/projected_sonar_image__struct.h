// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/projected_sonar_image.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ping_info'
#include "marine_acoustic_msgs/msg/detail/ping_info__struct.h"
// Member 'beam_directions'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'image'
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.h"

/// Struct defined in msg/ProjectedSonarImage in the package marine_acoustic_msgs.
/**
  * Single scan from an imaging sonar
  *
  * The Z-axis is centered in the plane of the fan ("forward"), with X up,
  * in order to be consistent with the NED for traditional multibeam profilers.
  *
  * For sonars with a 1D array, the beams lie on the Y-Z plane, and
  * and each beam has an azimuth (rotation about X) value.  Zero azimuth
  * is in the direction of the Z-axis, typically "straight out" from the sonar.
  * Elevation is the orthogonal direction (rotation about Y),
  * often termed the "vertical aperture"
 */
typedef struct marine_acoustic_msgs__msg__ProjectedSonarImage
{
  /// The header time should be the time the ping was transmitted, not
  /// the time the message was received.
  /// Note that these two could potentially be several seconds apart,
  /// especially in deep water.
  std_msgs__msg__Header header;
  marine_acoustic_msgs__msg__PingInfo ping_info;
  geometry_msgs__msg__Vector3__Sequence beam_directions;
  /// Center of each range bin in meters. Note this these may not be equally
  /// spaced, and do not necessarily start at zero range.
  rosidl_runtime_c__float__Sequence ranges;
  marine_acoustic_msgs__msg__SonarImageData image;
} marine_acoustic_msgs__msg__ProjectedSonarImage;

// Struct for a sequence of marine_acoustic_msgs__msg__ProjectedSonarImage.
typedef struct marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence
{
  marine_acoustic_msgs__msg__ProjectedSonarImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__STRUCT_H_
