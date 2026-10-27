// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_acoustic_msgs/msg/detail/sonar_detections__rosidl_typesupport_introspection_c.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ping_info`
#include "marine_acoustic_msgs/msg/ping_info.h"
// Member `ping_info`
#include "marine_acoustic_msgs/msg/detail/ping_info__rosidl_typesupport_introspection_c.h"
// Member `flags`
#include "marine_acoustic_msgs/msg/detection_flag.h"
// Member `flags`
#include "marine_acoustic_msgs/msg/detail/detection_flag__rosidl_typesupport_introspection_c.h"
// Member `two_way_travel_times`
// Member `tx_delays`
// Member `intensities`
// Member `tx_angles`
// Member `rx_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_acoustic_msgs__msg__SonarDetections__init(message_memory);
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_fini_function(void * message_memory)
{
  marine_acoustic_msgs__msg__SonarDetections__fini(message_memory);
}

size_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__flags(
  const void * untyped_member)
{
  const marine_acoustic_msgs__msg__DetectionFlag__Sequence * member =
    (const marine_acoustic_msgs__msg__DetectionFlag__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__flags(
  const void * untyped_member, size_t index)
{
  const marine_acoustic_msgs__msg__DetectionFlag__Sequence * member =
    (const marine_acoustic_msgs__msg__DetectionFlag__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__flags(
  void * untyped_member, size_t index)
{
  marine_acoustic_msgs__msg__DetectionFlag__Sequence * member =
    (marine_acoustic_msgs__msg__DetectionFlag__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marine_acoustic_msgs__msg__DetectionFlag * item =
    ((const marine_acoustic_msgs__msg__DetectionFlag *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__flags(untyped_member, index));
  marine_acoustic_msgs__msg__DetectionFlag * value =
    (marine_acoustic_msgs__msg__DetectionFlag *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marine_acoustic_msgs__msg__DetectionFlag * item =
    ((marine_acoustic_msgs__msg__DetectionFlag *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__flags(untyped_member, index));
  const marine_acoustic_msgs__msg__DetectionFlag * value =
    (const marine_acoustic_msgs__msg__DetectionFlag *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__flags(
  void * untyped_member, size_t size)
{
  marine_acoustic_msgs__msg__DetectionFlag__Sequence * member =
    (marine_acoustic_msgs__msg__DetectionFlag__Sequence *)(untyped_member);
  marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(member);
  return marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__two_way_travel_times(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__two_way_travel_times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__two_way_travel_times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__two_way_travel_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__two_way_travel_times(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__two_way_travel_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__two_way_travel_times(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__two_way_travel_times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__tx_delays(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__tx_delays(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__tx_delays(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__tx_delays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__tx_delays(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__tx_delays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__tx_delays(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__tx_delays(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__intensities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__intensities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__intensities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__intensities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__intensities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__intensities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__tx_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__tx_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__tx_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__tx_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__tx_angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__tx_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__tx_angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__tx_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__rx_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__rx_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__rx_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__rx_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__rx_angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__rx_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__rx_angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__rx_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ping_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, ping_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, flags),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__flags,  // size() function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__flags,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__flags,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__flags,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__flags,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__flags  // resize(index) function pointer
  },
  {
    "two_way_travel_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, two_way_travel_times),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__two_way_travel_times,  // size() function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__two_way_travel_times,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__two_way_travel_times,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__two_way_travel_times,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__two_way_travel_times,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__two_way_travel_times  // resize(index) function pointer
  },
  {
    "tx_delays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, tx_delays),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__tx_delays,  // size() function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__tx_delays,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__tx_delays,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__tx_delays,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__tx_delays,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__tx_delays  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, intensities),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__intensities,  // size() function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__intensities,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__intensities,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__intensities,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__intensities,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__intensities  // resize(index) function pointer
  },
  {
    "tx_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, tx_angles),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__tx_angles,  // size() function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__tx_angles,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__tx_angles,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__tx_angles,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__tx_angles,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__tx_angles  // resize(index) function pointer
  },
  {
    "rx_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarDetections, rx_angles),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__size_function__SonarDetections__rx_angles,  // size() function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_const_function__SonarDetections__rx_angles,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__get_function__SonarDetections__rx_angles,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__fetch_function__SonarDetections__rx_angles,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__assign_function__SonarDetections__rx_angles,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__resize_function__SonarDetections__rx_angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_members = {
  "marine_acoustic_msgs__msg",  // message namespace
  "SonarDetections",  // message name
  8,  // number of fields
  sizeof(marine_acoustic_msgs__msg__SonarDetections),
  false,  // has_any_key_member_
  marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_member_array,  // message members
  marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_type_support_handle = {
  0,
  &marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_hash,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, SonarDetections)() {
  marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, PingInfo)();
  marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, DetectionFlag)();
  if (!marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_type_support_handle.typesupport_identifier) {
    marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_acoustic_msgs__msg__SonarDetections__rosidl_typesupport_introspection_c__SonarDetections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
