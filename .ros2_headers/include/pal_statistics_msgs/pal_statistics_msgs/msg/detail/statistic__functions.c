// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice
#include "pal_statistics_msgs/msg/detail/statistic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
pal_statistics_msgs__msg__Statistic__init(pal_statistics_msgs__msg__Statistic * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    pal_statistics_msgs__msg__Statistic__fini(msg);
    return false;
  }
  // value
  return true;
}

void
pal_statistics_msgs__msg__Statistic__fini(pal_statistics_msgs__msg__Statistic * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
}

bool
pal_statistics_msgs__msg__Statistic__are_equal(const pal_statistics_msgs__msg__Statistic * lhs, const pal_statistics_msgs__msg__Statistic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
pal_statistics_msgs__msg__Statistic__copy(
  const pal_statistics_msgs__msg__Statistic * input,
  pal_statistics_msgs__msg__Statistic * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

pal_statistics_msgs__msg__Statistic *
pal_statistics_msgs__msg__Statistic__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__Statistic * msg = (pal_statistics_msgs__msg__Statistic *)allocator.allocate(sizeof(pal_statistics_msgs__msg__Statistic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_statistics_msgs__msg__Statistic));
  bool success = pal_statistics_msgs__msg__Statistic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_statistics_msgs__msg__Statistic__destroy(pal_statistics_msgs__msg__Statistic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_statistics_msgs__msg__Statistic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_statistics_msgs__msg__Statistic__Sequence__init(pal_statistics_msgs__msg__Statistic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__Statistic * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pal_statistics_msgs__msg__Statistic)) {
      return false;
    }
    data = (pal_statistics_msgs__msg__Statistic *)allocator.zero_allocate(size, sizeof(pal_statistics_msgs__msg__Statistic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_statistics_msgs__msg__Statistic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_statistics_msgs__msg__Statistic__fini(&data[i - 1]);
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
pal_statistics_msgs__msg__Statistic__Sequence__fini(pal_statistics_msgs__msg__Statistic__Sequence * array)
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
      pal_statistics_msgs__msg__Statistic__fini(&array->data[i]);
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

pal_statistics_msgs__msg__Statistic__Sequence *
pal_statistics_msgs__msg__Statistic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__Statistic__Sequence * array = (pal_statistics_msgs__msg__Statistic__Sequence *)allocator.allocate(sizeof(pal_statistics_msgs__msg__Statistic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_statistics_msgs__msg__Statistic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_statistics_msgs__msg__Statistic__Sequence__destroy(pal_statistics_msgs__msg__Statistic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_statistics_msgs__msg__Statistic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_statistics_msgs__msg__Statistic__Sequence__are_equal(const pal_statistics_msgs__msg__Statistic__Sequence * lhs, const pal_statistics_msgs__msg__Statistic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_statistics_msgs__msg__Statistic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_statistics_msgs__msg__Statistic__Sequence__copy(
  const pal_statistics_msgs__msg__Statistic__Sequence * input,
  pal_statistics_msgs__msg__Statistic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pal_statistics_msgs__msg__Statistic)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pal_statistics_msgs__msg__Statistic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_statistics_msgs__msg__Statistic * data =
      (pal_statistics_msgs__msg__Statistic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_statistics_msgs__msg__Statistic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_statistics_msgs__msg__Statistic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_statistics_msgs__msg__Statistic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
