// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/detection_flag.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DETECT_OK'.
enum
{
  marine_acoustic_msgs__msg__DetectionFlag__DETECT_OK = 0
};

/// Constant 'DETECT_BAD_SONAR'.
/**
  * Beam is flagged as bad by the sonar.  Think hard before second-guessing
 */
enum
{
  marine_acoustic_msgs__msg__DetectionFlag__DETECT_BAD_SONAR = 1
};

/// Constant 'DETECT_BAD_FILTER'.
/**
  * Beam is flagged as bad by some automated filter applied during processing.
 */
enum
{
  marine_acoustic_msgs__msg__DetectionFlag__DETECT_BAD_FILTER = 2
};

/// Constant 'DETECT_BAD_USER'.
/**
  * Beam is flagged as bad by the user. This is probably not happening in
  * realtime, but is included here so the same message can be used throughout
  * a post-processing pipeline.
 */
enum
{
  marine_acoustic_msgs__msg__DetectionFlag__DETECT_BAD_USER = 4
};

/// Struct defined in msg/DetectionFlag in the package marine_acoustic_msgs.
/**
  * Beam is OK
 */
typedef struct marine_acoustic_msgs__msg__DetectionFlag
{
  /// These arrays should have the same dimensions, and should match
  /// the number of beams for this sonar.
  ///
  /// Some fields are optional.  Those should have 0 length.
  /// Flag values for every beam
  uint8_t flag;
} marine_acoustic_msgs__msg__DetectionFlag;

// Struct for a sequence of marine_acoustic_msgs__msg__DetectionFlag.
typedef struct marine_acoustic_msgs__msg__DetectionFlag__Sequence
{
  marine_acoustic_msgs__msg__DetectionFlag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__DetectionFlag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__STRUCT_H_
