// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/EulerAngle.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/euler_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yesense_interface__msg__EulerAngle__init(yesense_interface__msg__EulerAngle * msg)
{
  if (!msg) {
    return false;
  }
  // pitch
  // roll
  // yaw
  return true;
}

void
yesense_interface__msg__EulerAngle__fini(yesense_interface__msg__EulerAngle * msg)
{
  if (!msg) {
    return;
  }
  // pitch
  // roll
  // yaw
}

bool
yesense_interface__msg__EulerAngle__are_equal(const yesense_interface__msg__EulerAngle * lhs, const yesense_interface__msg__EulerAngle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__EulerAngle__copy(
  const yesense_interface__msg__EulerAngle * input,
  yesense_interface__msg__EulerAngle * output)
{
  if (!input || !output) {
    return false;
  }
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // yaw
  output->yaw = input->yaw;
  return true;
}

yesense_interface__msg__EulerAngle *
yesense_interface__msg__EulerAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__EulerAngle * msg = (yesense_interface__msg__EulerAngle *)allocator.allocate(sizeof(yesense_interface__msg__EulerAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__EulerAngle));
  bool success = yesense_interface__msg__EulerAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__EulerAngle__destroy(yesense_interface__msg__EulerAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__EulerAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__EulerAngle__Sequence__init(yesense_interface__msg__EulerAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__EulerAngle * data = NULL;

  if (size) {
    data = (yesense_interface__msg__EulerAngle *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__EulerAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__EulerAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__EulerAngle__fini(&data[i - 1]);
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
yesense_interface__msg__EulerAngle__Sequence__fini(yesense_interface__msg__EulerAngle__Sequence * array)
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
      yesense_interface__msg__EulerAngle__fini(&array->data[i]);
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

yesense_interface__msg__EulerAngle__Sequence *
yesense_interface__msg__EulerAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__EulerAngle__Sequence * array = (yesense_interface__msg__EulerAngle__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__EulerAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__EulerAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__EulerAngle__Sequence__destroy(yesense_interface__msg__EulerAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__EulerAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__EulerAngle__Sequence__are_equal(const yesense_interface__msg__EulerAngle__Sequence * lhs, const yesense_interface__msg__EulerAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__EulerAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__EulerAngle__Sequence__copy(
  const yesense_interface__msg__EulerAngle__Sequence * input,
  yesense_interface__msg__EulerAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__EulerAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__EulerAngle * data =
      (yesense_interface__msg__EulerAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__EulerAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__EulerAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__EulerAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
