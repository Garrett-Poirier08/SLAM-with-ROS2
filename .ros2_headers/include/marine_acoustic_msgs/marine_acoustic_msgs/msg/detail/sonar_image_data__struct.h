// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_image_data.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__STRUCT_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DTYPE_UINT8'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_UINT8 = 0ul
};

/// Constant 'DTYPE_INT8'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_INT8 = 1ul
};

/// Constant 'DTYPE_UINT16'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_UINT16 = 2ul
};

/// Constant 'DTYPE_INT16'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_INT16 = 3ul
};

/// Constant 'DTYPE_UINT32'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_UINT32 = 4ul
};

/// Constant 'DTYPE_INT32'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_INT32 = 5ul
};

/// Constant 'DTYPE_UINT64'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_UINT64 = 6ul
};

/// Constant 'DTYPE_INT64'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_INT64 = 7ul
};

/// Constant 'DTYPE_FLOAT32'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_FLOAT32 = 8ul
};

/// Constant 'DTYPE_FLOAT64'.
enum
{
  marine_acoustic_msgs__msg__SonarImageData__DTYPE_FLOAT64 = 9ul
};

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SonarImageData in the package marine_acoustic_msgs.
typedef struct marine_acoustic_msgs__msg__SonarImageData
{
  bool is_bigendian;
  uint32_t dtype;
  /// the number of beams associated with the image
  uint32_t beam_count;
  /// The actually pixel data in row-major (beam_index major) format
  rosidl_runtime_c__uint8__Sequence data;
} marine_acoustic_msgs__msg__SonarImageData;

// Struct for a sequence of marine_acoustic_msgs__msg__SonarImageData.
typedef struct marine_acoustic_msgs__msg__SonarImageData__Sequence
{
  marine_acoustic_msgs__msg__SonarImageData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_acoustic_msgs__msg__SonarImageData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__STRUCT_H_
