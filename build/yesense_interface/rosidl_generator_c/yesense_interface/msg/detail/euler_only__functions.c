// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/EulerOnly.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/euler_only__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tid`
#include "yesense_interface/msg/detail/tid__functions.h"
// Member `euler`
#include "yesense_interface/msg/detail/euler_angle__functions.h"

bool
yesense_interface__msg__EulerOnly__init(yesense_interface__msg__EulerOnly * msg)
{
  if (!msg) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__init(&msg->tid)) {
    yesense_interface__msg__EulerOnly__fini(msg);
    return false;
  }
  // euler
  if (!yesense_interface__msg__EulerAngle__init(&msg->euler)) {
    yesense_interface__msg__EulerOnly__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__EulerOnly__fini(yesense_interface__msg__EulerOnly * msg)
{
  if (!msg) {
    return;
  }
  // tid
  yesense_interface__msg__Tid__fini(&msg->tid);
  // euler
  yesense_interface__msg__EulerAngle__fini(&msg->euler);
}

bool
yesense_interface__msg__EulerOnly__are_equal(const yesense_interface__msg__EulerOnly * lhs, const yesense_interface__msg__EulerOnly * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__are_equal(
      &(lhs->tid), &(rhs->tid)))
  {
    return false;
  }
  // euler
  if (!yesense_interface__msg__EulerAngle__are_equal(
      &(lhs->euler), &(rhs->euler)))
  {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__EulerOnly__copy(
  const yesense_interface__msg__EulerOnly * input,
  yesense_interface__msg__EulerOnly * output)
{
  if (!input || !output) {
    return false;
  }
  // tid
  if (!yesense_interface__msg__Tid__copy(
      &(input->tid), &(output->tid)))
  {
    return false;
  }
  // euler
  if (!yesense_interface__msg__EulerAngle__copy(
      &(input->euler), &(output->euler)))
  {
    return false;
  }
  return true;
}

yesense_interface__msg__EulerOnly *
yesense_interface__msg__EulerOnly__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__EulerOnly * msg = (yesense_interface__msg__EulerOnly *)allocator.allocate(sizeof(yesense_interface__msg__EulerOnly), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__EulerOnly));
  bool success = yesense_interface__msg__EulerOnly__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__EulerOnly__destroy(yesense_interface__msg__EulerOnly * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__EulerOnly__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__EulerOnly__Sequence__init(yesense_interface__msg__EulerOnly__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__EulerOnly * data = NULL;

  if (size) {
    data = (yesense_interface__msg__EulerOnly *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__EulerOnly), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__EulerOnly__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__EulerOnly__fini(&data[i - 1]);
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
yesense_interface__msg__EulerOnly__Sequence__fini(yesense_interface__msg__EulerOnly__Sequence * array)
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
      yesense_interface__msg__EulerOnly__fini(&array->data[i]);
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

yesense_interface__msg__EulerOnly__Sequence *
yesense_interface__msg__EulerOnly__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__EulerOnly__Sequence * array = (yesense_interface__msg__EulerOnly__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__EulerOnly__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__EulerOnly__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__EulerOnly__Sequence__destroy(yesense_interface__msg__EulerOnly__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__EulerOnly__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__EulerOnly__Sequence__are_equal(const yesense_interface__msg__EulerOnly__Sequence * lhs, const yesense_interface__msg__EulerOnly__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__EulerOnly__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__EulerOnly__Sequence__copy(
  const yesense_interface__msg__EulerOnly__Sequence * input,
  yesense_interface__msg__EulerOnly__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__EulerOnly);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__EulerOnly * data =
      (yesense_interface__msg__EulerOnly *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__EulerOnly__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__EulerOnly__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__EulerOnly__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
