// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from actuator_msgs:msg/ActuatorsAngularVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "actuator_msgs/msg/actuators_angular_velocity.h"


#ifndef ACTUATOR_MSGS__MSG__DETAIL__ACTUATORS_ANGULAR_VELOCITY__FUNCTIONS_H_
#define ACTUATOR_MSGS__MSG__DETAIL__ACTUATORS_ANGULAR_VELOCITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "actuator_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "actuator_msgs/msg/detail/actuators_angular_velocity__struct.h"

/// Initialize msg/ActuatorsAngularVelocity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * actuator_msgs__msg__ActuatorsAngularVelocity
 * )) before or use
 * actuator_msgs__msg__ActuatorsAngularVelocity__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
bool
actuator_msgs__msg__ActuatorsAngularVelocity__init(actuator_msgs__msg__ActuatorsAngularVelocity * msg);

/// Finalize msg/ActuatorsAngularVelocity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
void
actuator_msgs__msg__ActuatorsAngularVelocity__fini(actuator_msgs__msg__ActuatorsAngularVelocity * msg);

/// Create msg/ActuatorsAngularVelocity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * actuator_msgs__msg__ActuatorsAngularVelocity__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
actuator_msgs__msg__ActuatorsAngularVelocity *
actuator_msgs__msg__ActuatorsAngularVelocity__create(void);

/// Destroy msg/ActuatorsAngularVelocity message.
/**
 * It calls
 * actuator_msgs__msg__ActuatorsAngularVelocity__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
void
actuator_msgs__msg__ActuatorsAngularVelocity__destroy(actuator_msgs__msg__ActuatorsAngularVelocity * msg);

/// Check for msg/ActuatorsAngularVelocity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
bool
actuator_msgs__msg__ActuatorsAngularVelocity__are_equal(const actuator_msgs__msg__ActuatorsAngularVelocity * lhs, const actuator_msgs__msg__ActuatorsAngularVelocity * rhs);

/// Copy a msg/ActuatorsAngularVelocity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
bool
actuator_msgs__msg__ActuatorsAngularVelocity__copy(
  const actuator_msgs__msg__ActuatorsAngularVelocity * input,
  actuator_msgs__msg__ActuatorsAngularVelocity * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_type_hash_t *
actuator_msgs__msg__ActuatorsAngularVelocity__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_runtime_c__type_description__TypeDescription *
actuator_msgs__msg__ActuatorsAngularVelocity__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_runtime_c__type_description__TypeSource *
actuator_msgs__msg__ActuatorsAngularVelocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
actuator_msgs__msg__ActuatorsAngularVelocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ActuatorsAngularVelocity messages.
/**
 * It allocates the memory for the number of elements and calls
 * actuator_msgs__msg__ActuatorsAngularVelocity__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
bool
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__init(actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * array, size_t size);

/// Finalize array of msg/ActuatorsAngularVelocity messages.
/**
 * It calls
 * actuator_msgs__msg__ActuatorsAngularVelocity__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
void
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__fini(actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * array);

/// Create array of msg/ActuatorsAngularVelocity messages.
/**
 * It allocates the memory for the array and calls
 * actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence *
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__create(size_t size);

/// Destroy array of msg/ActuatorsAngularVelocity messages.
/**
 * It calls
 * actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
void
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__destroy(actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * array);

/// Check for msg/ActuatorsAngularVelocity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
bool
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__are_equal(const actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * lhs, const actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * rhs);

/// Copy an array of msg/ActuatorsAngularVelocity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_actuator_msgs
bool
actuator_msgs__msg__ActuatorsAngularVelocity__Sequence__copy(
  const actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * input,
  actuator_msgs__msg__ActuatorsAngularVelocity__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ACTUATOR_MSGS__MSG__DETAIL__ACTUATORS_ANGULAR_VELOCITY__FUNCTIONS_H_
