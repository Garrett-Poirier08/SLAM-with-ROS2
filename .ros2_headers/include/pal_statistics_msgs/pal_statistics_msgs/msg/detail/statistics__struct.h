// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics.h"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__STRUCT_H_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__STRUCT_H_

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
// Member 'statistics'
#include "pal_statistics_msgs/msg/detail/statistic__struct.h"

/// Struct defined in msg/Statistics in the package pal_statistics_msgs.
/**
  * header
 */
typedef struct pal_statistics_msgs__msg__Statistics
{
  std_msgs__msg__Header header;
  /// Statistics
  pal_statistics_msgs__msg__Statistic__Sequence statistics;
} pal_statistics_msgs__msg__Statistics;

// Struct for a sequence of pal_statistics_msgs__msg__Statistics.
typedef struct pal_statistics_msgs__msg__Statistics__Sequence
{
  pal_statistics_msgs__msg__Statistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_statistics_msgs__msg__Statistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__STRUCT_H_
