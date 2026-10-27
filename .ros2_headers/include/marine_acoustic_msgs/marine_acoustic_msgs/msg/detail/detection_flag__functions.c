// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
marine_acoustic_msgs__msg__DetectionFlag__init(marine_acoustic_msgs__msg__DetectionFlag * msg)
{
  if (!msg) {
    return false;
  }
  // flag
  return true;
}

void
marine_acoustic_msgs__msg__DetectionFlag__fini(marine_acoustic_msgs__msg__DetectionFlag * msg)
{
  if (!msg) {
    return;
  }
  // flag
}

bool
marine_acoustic_msgs__msg__DetectionFlag__are_equal(const marine_acoustic_msgs__msg__DetectionFlag * lhs, const marine_acoustic_msgs__msg__DetectionFlag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  return true;
}

bool
marine_acoustic_msgs__msg__DetectionFlag__copy(
  const marine_acoustic_msgs__msg__DetectionFlag * input,
  marine_acoustic_msgs__msg__DetectionFlag * output)
{
  if (!input || !output) {
    return false;
  }
  // flag
  output->flag = input->flag;
  return true;
}

marine_acoustic_msgs__msg__DetectionFlag *
marine_acoustic_msgs__msg__DetectionFlag__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__DetectionFlag * msg = (marine_acoustic_msgs__msg__DetectionFlag *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__DetectionFlag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_acoustic_msgs__msg__DetectionFlag));
  bool success = marine_acoustic_msgs__msg__DetectionFlag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_acoustic_msgs__msg__DetectionFlag__destroy(marine_acoustic_msgs__msg__DetectionFlag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_acoustic_msgs__msg__DetectionFlag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(marine_acoustic_msgs__msg__DetectionFlag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__DetectionFlag * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__DetectionFlag)) {
      return false;
    }
    data = (marine_acoustic_msgs__msg__DetectionFlag *)allocator.zero_allocate(size, sizeof(marine_acoustic_msgs__msg__DetectionFlag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_acoustic_msgs__msg__DetectionFlag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_acoustic_msgs__msg__DetectionFlag__fini(&data[i - 1]);
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
marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(marine_acoustic_msgs__msg__DetectionFlag__Sequence * array)
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
      marine_acoustic_msgs__msg__DetectionFlag__fini(&array->data[i]);
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

marine_acoustic_msgs__msg__DetectionFlag__Sequence *
marine_acoustic_msgs__msg__DetectionFlag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__DetectionFlag__Sequence * array = (marine_acoustic_msgs__msg__DetectionFlag__Sequence *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__DetectionFlag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_acoustic_msgs__msg__DetectionFlag__Sequence__destroy(marine_acoustic_msgs__msg__DetectionFlag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_acoustic_msgs__msg__DetectionFlag__Sequence__are_equal(const marine_acoustic_msgs__msg__DetectionFlag__Sequence * lhs, const marine_acoustic_msgs__msg__DetectionFlag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_acoustic_msgs__msg__DetectionFlag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_acoustic_msgs__msg__DetectionFlag__Sequence__copy(
  const marine_acoustic_msgs__msg__DetectionFlag__Sequence * input,
  marine_acoustic_msgs__msg__DetectionFlag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__DetectionFlag)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_acoustic_msgs__msg__DetectionFlag);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_acoustic_msgs__msg__DetectionFlag * data =
      (marine_acoustic_msgs__msg__DetectionFlag *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_acoustic_msgs__msg__DetectionFlag__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_acoustic_msgs__msg__DetectionFlag__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_acoustic_msgs__msg__DetectionFlag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
