// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/sonar_ranges__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ping_info`
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"
// Member `flags`
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"
// Member `transmit_delays`
// Member `intensities`
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `beam_unit_vec`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
marine_acoustic_msgs__msg__SonarRanges__init(marine_acoustic_msgs__msg__SonarRanges * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  // ping_info
  if (!marine_acoustic_msgs__msg__PingInfo__init(&msg->ping_info)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  // flags
  if (!marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(&msg->flags, 0)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  // transmit_delays
  if (!rosidl_runtime_c__float__Sequence__init(&msg->transmit_delays, 0)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->intensities, 0)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  // beam_unit_vec
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->beam_unit_vec, 0)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ranges, 0)) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
    return false;
  }
  return true;
}

void
marine_acoustic_msgs__msg__SonarRanges__fini(marine_acoustic_msgs__msg__SonarRanges * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ping_info
  marine_acoustic_msgs__msg__PingInfo__fini(&msg->ping_info);
  // flags
  marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(&msg->flags);
  // transmit_delays
  rosidl_runtime_c__float__Sequence__fini(&msg->transmit_delays);
  // intensities
  rosidl_runtime_c__float__Sequence__fini(&msg->intensities);
  // beam_unit_vec
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->beam_unit_vec);
  // ranges
  rosidl_runtime_c__float__Sequence__fini(&msg->ranges);
}

bool
marine_acoustic_msgs__msg__SonarRanges__are_equal(const marine_acoustic_msgs__msg__SonarRanges * lhs, const marine_acoustic_msgs__msg__SonarRanges * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // ping_info
  if (!marine_acoustic_msgs__msg__PingInfo__are_equal(
      &(lhs->ping_info), &(rhs->ping_info)))
  {
    return false;
  }
  // flags
  if (!marine_acoustic_msgs__msg__DetectionFlag__Sequence__are_equal(
      &(lhs->flags), &(rhs->flags)))
  {
    return false;
  }
  // transmit_delays
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->transmit_delays), &(rhs->transmit_delays)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->intensities), &(rhs->intensities)))
  {
    return false;
  }
  // beam_unit_vec
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->beam_unit_vec), &(rhs->beam_unit_vec)))
  {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  return true;
}

bool
marine_acoustic_msgs__msg__SonarRanges__copy(
  const marine_acoustic_msgs__msg__SonarRanges * input,
  marine_acoustic_msgs__msg__SonarRanges * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // ping_info
  if (!marine_acoustic_msgs__msg__PingInfo__copy(
      &(input->ping_info), &(output->ping_info)))
  {
    return false;
  }
  // flags
  if (!marine_acoustic_msgs__msg__DetectionFlag__Sequence__copy(
      &(input->flags), &(output->flags)))
  {
    return false;
  }
  // transmit_delays
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->transmit_delays), &(output->transmit_delays)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->intensities), &(output->intensities)))
  {
    return false;
  }
  // beam_unit_vec
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->beam_unit_vec), &(output->beam_unit_vec)))
  {
    return false;
  }
  // ranges
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  return true;
}

marine_acoustic_msgs__msg__SonarRanges *
marine_acoustic_msgs__msg__SonarRanges__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__SonarRanges * msg = (marine_acoustic_msgs__msg__SonarRanges *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__SonarRanges), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_acoustic_msgs__msg__SonarRanges));
  bool success = marine_acoustic_msgs__msg__SonarRanges__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_acoustic_msgs__msg__SonarRanges__destroy(marine_acoustic_msgs__msg__SonarRanges * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_acoustic_msgs__msg__SonarRanges__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_acoustic_msgs__msg__SonarRanges__Sequence__init(marine_acoustic_msgs__msg__SonarRanges__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__SonarRanges * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__SonarRanges)) {
      return false;
    }
    data = (marine_acoustic_msgs__msg__SonarRanges *)allocator.zero_allocate(size, sizeof(marine_acoustic_msgs__msg__SonarRanges), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_acoustic_msgs__msg__SonarRanges__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_acoustic_msgs__msg__SonarRanges__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
marine_acoustic_msgs__msg__SonarRanges__Sequence__fini(marine_acoustic_msgs__msg__SonarRanges__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      marine_acoustic_msgs__msg__SonarRanges__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

marine_acoustic_msgs__msg__SonarRanges__Sequence *
marine_acoustic_msgs__msg__SonarRanges__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__SonarRanges__Sequence * array = (marine_acoustic_msgs__msg__SonarRanges__Sequence *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__SonarRanges__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_acoustic_msgs__msg__SonarRanges__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_acoustic_msgs__msg__SonarRanges__Sequence__destroy(marine_acoustic_msgs__msg__SonarRanges__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_acoustic_msgs__msg__SonarRanges__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_acoustic_msgs__msg__SonarRanges__Sequence__are_equal(const marine_acoustic_msgs__msg__SonarRanges__Sequence * lhs, const marine_acoustic_msgs__msg__SonarRanges__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_acoustic_msgs__msg__SonarRanges__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_acoustic_msgs__msg__SonarRanges__Sequence__copy(
  const marine_acoustic_msgs__msg__SonarRanges__Sequence * input,
  marine_acoustic_msgs__msg__SonarRanges__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__SonarRanges)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_acoustic_msgs__msg__SonarRanges);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_acoustic_msgs__msg__SonarRanges * data =
      (marine_acoustic_msgs__msg__SonarRanges *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_acoustic_msgs__msg__SonarRanges__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_acoustic_msgs__msg__SonarRanges__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_acoustic_msgs__msg__SonarRanges__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
