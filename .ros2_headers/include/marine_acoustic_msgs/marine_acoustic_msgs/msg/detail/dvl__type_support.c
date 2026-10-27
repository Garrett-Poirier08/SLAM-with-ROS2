// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_acoustic_msgs/msg/detail/dvl__rosidl_typesupport_introspection_c.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_acoustic_msgs/msg/detail/dvl__functions.h"
#include "marine_acoustic_msgs/msg/detail/dvl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `beam_unit_vec`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
// Member `beam_unit_vec`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_acoustic_msgs__msg__Dvl__init(message_memory);
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_fini_function(void * message_memory)
{
  marine_acoustic_msgs__msg__Dvl__fini(message_memory);
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__velocity_covar(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__velocity_covar(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__velocity_covar(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__velocity_covar(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__velocity_covar(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__velocity_covar(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__velocity_covar(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_unit_vec(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_unit_vec(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3 * member =
    (const geometry_msgs__msg__Vector3 *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_unit_vec(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3 * member =
    (geometry_msgs__msg__Vector3 *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_unit_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_unit_vec(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_unit_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_unit_vec(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__range(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__range(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__range(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__range(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__range(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__range_covar(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__range_covar(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__range_covar(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__range_covar(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__range_covar(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__range_covar(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__range_covar(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_quality(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_quality(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_quality(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_quality(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_quality(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_quality(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_quality(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_velocity_covar(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_velocity_covar(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_velocity_covar(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_velocity_covar(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_velocity_covar(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_velocity_covar(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_velocity_covar(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_member_array[18] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, velocity_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dvl_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, dvl_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_covar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, velocity_covar),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__velocity_covar,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__velocity_covar,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__velocity_covar,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__velocity_covar,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__velocity_covar,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "course_gnd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, course_gnd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_gnd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, speed_gnd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_good_beams",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, num_good_beams),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sound_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, sound_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_ranges_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, beam_ranges_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_velocities_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, beam_velocities_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_unit_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, beam_unit_vec),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_unit_vec,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_unit_vec,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_unit_vec,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_unit_vec,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_unit_vec,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, range),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__range,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__range,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__range,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__range,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__range,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_covar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, range_covar),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__range_covar,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__range_covar,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__range_covar,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__range_covar,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__range_covar,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, beam_quality),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_quality,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_quality,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_quality,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_quality,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_quality,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, beam_velocity),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_velocity,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_velocity,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_velocity,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_velocity,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_velocity_covar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__Dvl, beam_velocity_covar),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__size_function__Dvl__beam_velocity_covar,  // size() function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_const_function__Dvl__beam_velocity_covar,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__get_function__Dvl__beam_velocity_covar,  // get(index) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__fetch_function__Dvl__beam_velocity_covar,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__assign_function__Dvl__beam_velocity_covar,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_members = {
  "marine_acoustic_msgs__msg",  // message namespace
  "Dvl",  // message name
  18,  // number of fields
  sizeof(marine_acoustic_msgs__msg__Dvl),
  false,  // has_any_key_member_
  marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_member_array,  // message members
  marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_type_support_handle = {
  0,
  &marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__Dvl__get_type_hash,
  &marine_acoustic_msgs__msg__Dvl__get_type_description,
  &marine_acoustic_msgs__msg__Dvl__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, Dvl)() {
  marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_type_support_handle.typesupport_identifier) {
    marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_acoustic_msgs__msg__Dvl__rosidl_typesupport_introspection_c__Dvl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
