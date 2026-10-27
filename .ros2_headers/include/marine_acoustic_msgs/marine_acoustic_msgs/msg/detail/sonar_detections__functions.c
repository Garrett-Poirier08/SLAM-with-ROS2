// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/sonar_detections__functions.h"

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
// Member `two_way_travel_times`
// Member `tx_delays`
// Member `intensities`
// Member `tx_angles`
// Member `rx_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
marine_acoustic_msgs__msg__SonarDetections__init(marine_acoustic_msgs__msg__SonarDetections * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // ping_info
  if (!marine_acoustic_msgs__msg__PingInfo__init(&msg->ping_info)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // flags
  if (!marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(&msg->flags, 0)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // two_way_travel_times
  if (!rosidl_runtime_c__float__Sequence__init(&msg->two_way_travel_times, 0)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // tx_delays
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tx_delays, 0)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->intensities, 0)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // tx_angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tx_angles, 0)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  // rx_angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rx_angles, 0)) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
    return false;
  }
  return true;
}

void
marine_acoustic_msgs__msg__SonarDetections__fini(marine_acoustic_msgs__msg__SonarDetections * msg)
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
  // two_way_travel_times
  rosidl_runtime_c__float__Sequence__fini(&msg->two_way_travel_times);
  // tx_delays
  rosidl_runtime_c__float__Sequence__fini(&msg->tx_delays);
  // intensities
  rosidl_runtime_c__float__Sequence__fini(&msg->intensities);
  // tx_angles
  rosidl_runtime_c__float__Sequence__fini(&msg->tx_angles);
  // rx_angles
  rosidl_runtime_c__float__Sequence__fini(&msg->rx_angles);
}

bool
marine_acoustic_msgs__msg__SonarDetections__are_equal(const marine_acoustic_msgs__msg__SonarDetections * lhs, const marine_acoustic_msgs__msg__SonarDetections * rhs)
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
  // two_way_travel_times
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->two_way_travel_times), &(rhs->two_way_travel_times)))
  {
    return false;
  }
  // tx_delays
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tx_delays), &(rhs->tx_delays)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->intensities), &(rhs->intensities)))
  {
    return false;
  }
  // tx_angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tx_angles), &(rhs->tx_angles)))
  {
    return false;
  }
  // rx_angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->rx_angles), &(rhs->rx_angles)))
  {
    return false;
  }
  return true;
}

bool
marine_acoustic_msgs__msg__SonarDetections__copy(
  const marine_acoustic_msgs__msg__SonarDetections * input,
  marine_acoustic_msgs__msg__SonarDetections * output)
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
  // two_way_travel_times
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->two_way_travel_times), &(output->two_way_travel_times)))
  {
    return false;
  }
  // tx_delays
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tx_delays), &(output->tx_delays)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->intensities), &(output->intensities)))
  {
    return false;
  }
  // tx_angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tx_angles), &(output->tx_angles)))
  {
    return false;
  }
  // rx_angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->rx_angles), &(output->rx_angles)))
  {
    return false;
  }
  return true;
}

marine_acoustic_msgs__msg__SonarDetections *
marine_acoustic_msgs__msg__SonarDetections__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__SonarDetections * msg = (marine_acoustic_msgs__msg__SonarDetections *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__SonarDetections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_acoustic_msgs__msg__SonarDetections));
  bool success = marine_acoustic_msgs__msg__SonarDetections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_acoustic_msgs__msg__SonarDetections__destroy(marine_acoustic_msgs__msg__SonarDetections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_acoustic_msgs__msg__SonarDetections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_acoustic_msgs__msg__SonarDetections__Sequence__init(marine_acoustic_msgs__msg__SonarDetections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__SonarDetections * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__SonarDetections)) {
      return false;
    }
    data = (marine_acoustic_msgs__msg__SonarDetections *)allocator.zero_allocate(size, sizeof(marine_acoustic_msgs__msg__SonarDetections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_acoustic_msgs__msg__SonarDetections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_acoustic_msgs__msg__SonarDetections__fini(&data[i - 1]);
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
marine_acoustic_msgs__msg__SonarDetections__Sequence__fini(marine_acoustic_msgs__msg__SonarDetections__Sequence * array)
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
      marine_acoustic_msgs__msg__SonarDetections__fini(&array->data[i]);
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

marine_acoustic_msgs__msg__SonarDetections__Sequence *
marine_acoustic_msgs__msg__SonarDetections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__SonarDetections__Sequence * array = (marine_acoustic_msgs__msg__SonarDetections__Sequence *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__SonarDetections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_acoustic_msgs__msg__SonarDetections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_acoustic_msgs__msg__SonarDetections__Sequence__destroy(marine_acoustic_msgs__msg__SonarDetections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_acoustic_msgs__msg__SonarDetections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_acoustic_msgs__msg__SonarDetections__Sequence__are_equal(const marine_acoustic_msgs__msg__SonarDetections__Sequence * lhs, const marine_acoustic_msgs__msg__SonarDetections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_acoustic_msgs__msg__SonarDetections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_acoustic_msgs__msg__SonarDetections__Sequence__copy(
  const marine_acoustic_msgs__msg__SonarDetections__Sequence * input,
  marine_acoustic_msgs__msg__SonarDetections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__SonarDetections)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_acoustic_msgs__msg__SonarDetections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_acoustic_msgs__msg__SonarDetections * data =
      (marine_acoustic_msgs__msg__SonarDetections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_acoustic_msgs__msg__SonarDetections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_acoustic_msgs__msg__SonarDetections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_acoustic_msgs__msg__SonarDetections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
