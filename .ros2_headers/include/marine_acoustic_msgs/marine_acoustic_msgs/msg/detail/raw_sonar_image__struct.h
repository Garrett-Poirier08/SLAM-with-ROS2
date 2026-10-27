// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/RawSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/raw_sonar_image.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__STRUCT_H_

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
// Member 'tx_delays'
// Member 'tx_angles'
// Member 'rx_angles'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'image'
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.h"

/// Struct defined in msg/RawSonarImage in the package marine_acoustic_msgs.
typedef struct marine_acoustic_msgs__msg__RawSonarImage
{
  /// The header time should be the time the ping was transmitted, not
  /// the time the message was received.
  /// Note that these two could potentially be several seconds apart,
  /// especially in deep water.
  std_msgs__msg__Header header;
  marine_acoustic_msgs__msg__PingInfo ping_info;
  /// hz
  float sample_rate;
  /// the number of samples in each beam
  uint32_t samples_per_beam;
  /// Many sonars have some kind of upper gate for water column data
  /// this represents the sample number of the first non empty sample
  /// for beam n
  uint32_t sample0;
  /// Multi-sector multibeams can transmit different sectors at different times
  /// The Reson doesn't but we include a TX delay for each beam anyway.
  ///
  /// Overall, therefore, our overall time is:
  ///
  /// header.stamp: TX cycle starts
  /// Each beam's TX time: header.stamp + transmit_delay[i]
  /// Each beam's RX time: header.stamp + transmit_delay[i] + sample_rate*image_row
  rosidl_runtime_c__float__Sequence tx_delays;
  /// Steering angle applied to tx beam
  /// reported in radians
  rosidl_runtime_c__float__Sequence tx_angles;
  /// Steering angle applied to rx beam
  /// reported in radians
  rosidl_runtime_c__float__Sequence rx_angles;
  marine_acoustic_msgs__msg__SonarImageData image;
} marine_acoustic_msgs__msg__RawSonarImage;

// Struct for a sequence of marine_acoustic_msgs__msg__RawSonarImage.
typedef struct marine_acoustic_msgs__msg__RawSonarImage__Sequence
{
  marine_acoustic_msgs__msg__RawSonarImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__RawSonarImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__STRUCT_H_
