// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tx_beamwidths`
// Member `rx_beamwidths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
marine_acoustic_msgs__msg__PingInfo__init(marine_acoustic_msgs__msg__PingInfo * msg)
{
  if (!msg) {
    return false;
  }
  // frequency
  // sound_speed
  // tx_beamwidths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tx_beamwidths, 0)) {
    marine_acoustic_msgs__msg__PingInfo__fini(msg);
    return false;
  }
  // rx_beamwidths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rx_beamwidths, 0)) {
    marine_acoustic_msgs__msg__PingInfo__fini(msg);
    return false;
  }
  return true;
}

void
marine_acoustic_msgs__msg__PingInfo__fini(marine_acoustic_msgs__msg__PingInfo * msg)
{
  if (!msg) {
    return;
  }
  // frequency
  // sound_speed
  // tx_beamwidths
  rosidl_runtime_c__float__Sequence__fini(&msg->tx_beamwidths);
  // rx_beamwidths
  rosidl_runtime_c__float__Sequence__fini(&msg->rx_beamwidths);
}

bool
marine_acoustic_msgs__msg__PingInfo__are_equal(const marine_acoustic_msgs__msg__PingInfo * lhs, const marine_acoustic_msgs__msg__PingInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // sound_speed
  if (lhs->sound_speed != rhs->sound_speed) {
    return false;
  }
  // tx_beamwidths
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tx_beamwidths), &(rhs->tx_beamwidths)))
  {
    return false;
  }
  // rx_beamwidths
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->rx_beamwidths), &(rhs->rx_beamwidths)))
  {
    return false;
  }
  return true;
}

bool
marine_acoustic_msgs__msg__PingInfo__copy(
  const marine_acoustic_msgs__msg__PingInfo * input,
  marine_acoustic_msgs__msg__PingInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // sound_speed
  output->sound_speed = input->sound_speed;
  // tx_beamwidths
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tx_beamwidths), &(output->tx_beamwidths)))
  {
    return false;
  }
  // rx_beamwidths
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->rx_beamwidths), &(output->rx_beamwidths)))
  {
    return false;
  }
  return true;
}

marine_acoustic_msgs__msg__PingInfo *
marine_acoustic_msgs__msg__PingInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__PingInfo * msg = (marine_acoustic_msgs__msg__PingInfo *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__PingInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_acoustic_msgs__msg__PingInfo));
  bool success = marine_acoustic_msgs__msg__PingInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_acoustic_msgs__msg__PingInfo__destroy(marine_acoustic_msgs__msg__PingInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_acoustic_msgs__msg__PingInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_acoustic_msgs__msg__PingInfo__Sequence__init(marine_acoustic_msgs__msg__PingInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__PingInfo * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__PingInfo)) {
      return false;
    }
    data = (marine_acoustic_msgs__msg__PingInfo *)allocator.zero_allocate(size, sizeof(marine_acoustic_msgs__msg__PingInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_acoustic_msgs__msg__PingInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_acoustic_msgs__msg__PingInfo__fini(&data[i - 1]);
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
marine_acoustic_msgs__msg__PingInfo__Sequence__fini(marine_acoustic_msgs__msg__PingInfo__Sequence * array)
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
      marine_acoustic_msgs__msg__PingInfo__fini(&array->data[i]);
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

marine_acoustic_msgs__msg__PingInfo__Sequence *
marine_acoustic_msgs__msg__PingInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__PingInfo__Sequence * array = (marine_acoustic_msgs__msg__PingInfo__Sequence *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__PingInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_acoustic_msgs__msg__PingInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_acoustic_msgs__msg__PingInfo__Sequence__destroy(marine_acoustic_msgs__msg__PingInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_acoustic_msgs__msg__PingInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_acoustic_msgs__msg__PingInfo__Sequence__are_equal(const marine_acoustic_msgs__msg__PingInfo__Sequence * lhs, const marine_acoustic_msgs__msg__PingInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_acoustic_msgs__msg__PingInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_acoustic_msgs__msg__PingInfo__Sequence__copy(
  const marine_acoustic_msgs__msg__PingInfo__Sequence * input,
  marine_acoustic_msgs__msg__PingInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__PingInfo)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_acoustic_msgs__msg__PingInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_acoustic_msgs__msg__PingInfo * data =
      (marine_acoustic_msgs__msg__PingInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_acoustic_msgs__msg__PingInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_acoustic_msgs__msg__PingInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_acoustic_msgs__msg__PingInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
