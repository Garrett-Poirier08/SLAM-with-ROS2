// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/projected_sonar_image.h"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__FUNCTIONS_H_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__FUNCTIONS_H_

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
#include "marine_acoustic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.h"

/// Initialize msg/ProjectedSonarImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marine_acoustic_msgs__msg__ProjectedSonarImage
 * )) before or use
 * marine_acoustic_msgs__msg__ProjectedSonarImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
bool
marine_acoustic_msgs__msg__ProjectedSonarImage__init(marine_acoustic_msgs__msg__ProjectedSonarImage * msg);

/// Finalize msg/ProjectedSonarImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
void
marine_acoustic_msgs__msg__ProjectedSonarImage__fini(marine_acoustic_msgs__msg__ProjectedSonarImage * msg);

/// Create msg/ProjectedSonarImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marine_acoustic_msgs__msg__ProjectedSonarImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
marine_acoustic_msgs__msg__ProjectedSonarImage *
marine_acoustic_msgs__msg__ProjectedSonarImage__create(void);

/// Destroy msg/ProjectedSonarImage message.
/**
 * It calls
 * marine_acoustic_msgs__msg__ProjectedSonarImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
void
marine_acoustic_msgs__msg__ProjectedSonarImage__destroy(marine_acoustic_msgs__msg__ProjectedSonarImage * msg);

/// Check for msg/ProjectedSonarImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
bool
marine_acoustic_msgs__msg__ProjectedSonarImage__are_equal(const marine_acoustic_msgs__msg__ProjectedSonarImage * lhs, const marine_acoustic_msgs__msg__ProjectedSonarImage * rhs);

/// Copy a msg/ProjectedSonarImage message.
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
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
bool
marine_acoustic_msgs__msg__ProjectedSonarImage__copy(
  const marine_acoustic_msgs__msg__ProjectedSonarImage * input,
  marine_acoustic_msgs__msg__ProjectedSonarImage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_type_hash_t *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_runtime_c__type_description__TypeSource *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ProjectedSonarImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * marine_acoustic_msgs__msg__ProjectedSonarImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
bool
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__init(marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * array, size_t size);

/// Finalize array of msg/ProjectedSonarImage messages.
/**
 * It calls
 * marine_acoustic_msgs__msg__ProjectedSonarImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
void
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__fini(marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * array);

/// Create array of msg/ProjectedSonarImage messages.
/**
 * It allocates the memory for the array and calls
 * marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence *
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__create(size_t size);

/// Destroy array of msg/ProjectedSonarImage messages.
/**
 * It calls
 * marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
void
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__destroy(marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * array);

/// Check for msg/ProjectedSonarImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
bool
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__are_equal(const marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * lhs, const marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * rhs);

/// Copy an array of msg/ProjectedSonarImage messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marine_acoustic_msgs
bool
marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__copy(
  const marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * input,
  marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__FUNCTIONS_H_
