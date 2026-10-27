// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/ping_info.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'tx_beamwidths'
// Member 'rx_beamwidths'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PingInfo in the package marine_acoustic_msgs.
/**
  * Center frequency of sonar in Hz
  * Set to 0 if unavailable
 */
typedef struct marine_acoustic_msgs__msg__PingInfo
{
  float frequency;
  /// Speed of sound (m/s) used to calculate ranges;
  /// Set to 0 if unavailable
  float sound_speed;
  /// Sonar reported -3db beamwidths
  /// May be empty if not reported
  /// reported in radians
  rosidl_runtime_c__float__Sequence tx_beamwidths;
  rosidl_runtime_c__float__Sequence rx_beamwidths;
} marine_acoustic_msgs__msg__PingInfo;

// Struct for a sequence of marine_acoustic_msgs__msg__PingInfo.
typedef struct marine_acoustic_msgs__msg__PingInfo__Sequence
{
  marine_acoustic_msgs__msg__PingInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__PingInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__STRUCT_H_
