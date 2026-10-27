// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_ranges.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__STRUCT_H_

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
// Member 'flags'
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.h"
// Member 'transmit_delays'
// Member 'intensities'
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'beam_unit_vec'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SonarRanges in the package marine_acoustic_msgs.
/**
  * Single ping from a profiling sonar.
  *
  * This message is modeled after WHOI's MultibeamRaw.msg, from the
  * ds_multibeam_msgs package (released under a BSD license).
  * Modifications were made by UW-APL.
 */
typedef struct marine_acoustic_msgs__msg__SonarRanges
{
  /// The header time should be the time the ping was transmitted, not
  /// the time the message was received.
  /// Note that these two could potentially be several seconds apart,
  /// especially in deep water.
  std_msgs__msg__Header header;
  marine_acoustic_msgs__msg__PingInfo ping_info;
  /// Constants declaring whether each beam is good or bad.
  /// This is implemented as an 8-bit masked value; it is possible for more
  /// than one thing to flag beams as bad. To check if a beam is good, simply
  /// check if it is zero.
  marine_acoustic_msgs__msg__DetectionFlag__Sequence flags;
  /// Multi-sector multibeams can transmit different sectors at different times
  /// The Reson doesn't but we include a TX delay for each beam anyway.
  ///
  /// Overall, therefore, our overall time is:
  ///
  /// header.stamp: TX cycle starts
  /// Each beam's TX time: header.stamp + txDelay[i]
  /// Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]
  rosidl_runtime_c__float__Sequence transmit_delays;
  /// Sonar-reported intensity.  Usually uncalibrated and crude
  rosidl_runtime_c__float__Sequence intensities;
  geometry_msgs__msg__Vector3__Sequence beam_unit_vec;
  rosidl_runtime_c__float__Sequence ranges;
} marine_acoustic_msgs__msg__SonarRanges;

// Struct for a sequence of marine_acoustic_msgs__msg__SonarRanges.
typedef struct marine_acoustic_msgs__msg__SonarRanges__Sequence
{
  marine_acoustic_msgs__msg__SonarRanges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__SonarRanges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__STRUCT_H_
