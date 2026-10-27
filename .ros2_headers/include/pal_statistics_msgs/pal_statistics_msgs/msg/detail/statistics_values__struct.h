// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_statistics_msgs:msg/StatisticsValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics_values.h"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__STRUCT_H_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__STRUCT_H_

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
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StatisticsValues in the package pal_statistics_msgs.
/**
  * header
 */
typedef struct pal_statistics_msgs__msg__StatisticsValues
{
  std_msgs__msg__Header header;
  /// Statistics
  rosidl_runtime_c__double__Sequence values;
  /// The values vector corresponds to the name vector with the same name
  uint32_t names_version;
} pal_statistics_msgs__msg__StatisticsValues;

// Struct for a sequence of pal_statistics_msgs__msg__StatisticsValues.
typedef struct pal_statistics_msgs__msg__StatisticsValues__Sequence
{
  pal_statistics_msgs__msg__StatisticsValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_statistics_msgs__msg__StatisticsValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__STRUCT_H_
