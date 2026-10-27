// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistic.h"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__STRUCT_H_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Statistic in the package pal_statistics_msgs.
typedef struct pal_statistics_msgs__msg__Statistic
{
  rosidl_runtime_c__String name;
  double value;
} pal_statistics_msgs__msg__Statistic;

// Struct for a sequence of pal_statistics_msgs__msg__Statistic.
typedef struct pal_statistics_msgs__msg__Statistic__Sequence
{
  pal_statistics_msgs__msg__Statistic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_statistics_msgs__msg__Statistic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__STRUCT_H_
