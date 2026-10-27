// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from simulation_interfaces:msg/SpawnResult.idl
// generated code does not contain a copyright notice
#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simulation_interfaces/msg/detail/spawn_result__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
bool cdr_serialize_simulation_interfaces__msg__SpawnResult(
  const simulation_interfaces__msg__SpawnResult * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
bool cdr_deserialize_simulation_interfaces__msg__SpawnResult(
  eprosima::fastcdr::Cdr &,
  simulation_interfaces__msg__SpawnResult * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_simulation_interfaces__msg__SpawnResult(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_simulation_interfaces__msg__SpawnResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
bool cdr_serialize_key_simulation_interfaces__msg__SpawnResult(
  const simulation_interfaces__msg__SpawnResult * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t get_serialized_size_key_simulation_interfaces__msg__SpawnResult(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
size_t max_serialized_size_key_simulation_interfaces__msg__SpawnResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simulation_interfaces, msg, SpawnResult)();

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
