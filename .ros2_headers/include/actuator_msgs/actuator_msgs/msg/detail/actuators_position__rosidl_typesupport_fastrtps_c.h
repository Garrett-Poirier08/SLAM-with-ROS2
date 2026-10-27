// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from actuator_msgs:msg/ActuatorsPosition.idl
// generated code does not contain a copyright notice
#ifndef ACTUATOR_MSGS__MSG__DETAIL__ACTUATORS_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ACTUATOR_MSGS__MSG__DETAIL__ACTUATORS_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "actuator_msgs/msg/detail/actuators_position__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
bool cdr_serialize_actuator_msgs__msg__ActuatorsPosition(
  const actuator_msgs__msg__ActuatorsPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
bool cdr_deserialize_actuator_msgs__msg__ActuatorsPosition(
  eprosima::fastcdr::Cdr &,
  actuator_msgs__msg__ActuatorsPosition * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
size_t get_serialized_size_actuator_msgs__msg__ActuatorsPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
size_t max_serialized_size_actuator_msgs__msg__ActuatorsPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
bool cdr_serialize_key_actuator_msgs__msg__ActuatorsPosition(
  const actuator_msgs__msg__ActuatorsPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
size_t get_serialized_size_key_actuator_msgs__msg__ActuatorsPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
size_t max_serialized_size_key_actuator_msgs__msg__ActuatorsPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actuator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actuator_msgs, msg, ActuatorsPosition)();

#ifdef __cplusplus
}
#endif

#endif  // ACTUATOR_MSGS__MSG__DETAIL__ACTUATORS_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
