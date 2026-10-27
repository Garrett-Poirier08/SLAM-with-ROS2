// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_statistics_msgs:msg/StatisticsNames.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics_names.h"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_NAMES__STRUCT_H_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_NAMES__STRUCT_H_

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
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StatisticsNames in the package pal_statistics_msgs.
/**
  * header
 */
typedef struct pal_statistics_msgs__msg__StatisticsNames
{
  std_msgs__msg__Header header;
  /// Statistics names
  rosidl_runtime_c__String__Sequence names;
  /// This is increased each time names change
  uint32_t names_version;
} pal_statistics_msgs__msg__StatisticsNames;

// Struct for a sequence of pal_statistics_msgs__msg__StatisticsNames.
typedef struct pal_statistics_msgs__msg__StatisticsNames__Sequence
{
  pal_statistics_msgs__msg__StatisticsNames * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_statistics_msgs__msg__StatisticsNames__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_NAMES__STRUCT_H_
