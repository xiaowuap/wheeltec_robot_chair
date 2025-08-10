// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/Quat.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/quat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yesense_interface__msg__Quat__init(yesense_interface__msg__Quat * msg)
{
  if (!msg) {
    return false;
  }
  // q0
  // q1
  // q2
  // q3
  return true;
}

void
yesense_interface__msg__Quat__fini(yesense_interface__msg__Quat * msg)
{
  if (!msg) {
    return;
  }
  // q0
  // q1
  // q2
  // q3
}

bool
yesense_interface__msg__Quat__are_equal(const yesense_interface__msg__Quat * lhs, const yesense_interface__msg__Quat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q0
  if (lhs->q0 != rhs->q0) {
    return false;
  }
  // q1
  if (lhs->q1 != rhs->q1) {
    return false;
  }
  // q2
  if (lhs->q2 != rhs->q2) {
    return false;
  }
  // q3
  if (lhs->q3 != rhs->q3) {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__Quat__copy(
  const yesense_interface__msg__Quat * input,
  yesense_interface__msg__Quat * output)
{
  if (!input || !output) {
    return false;
  }
  // q0
  output->q0 = input->q0;
  // q1
  output->q1 = input->q1;
  // q2
  output->q2 = input->q2;
  // q3
  output->q3 = input->q3;
  return true;
}

yesense_interface__msg__Quat *
yesense_interface__msg__Quat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__Quat * msg = (yesense_interface__msg__Quat *)allocator.allocate(sizeof(yesense_interface__msg__Quat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__Quat));
  bool success = yesense_interface__msg__Quat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__Quat__destroy(yesense_interface__msg__Quat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__Quat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__Quat__Sequence__init(yesense_interface__msg__Quat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__Quat * data = NULL;

  if (size) {
    data = (yesense_interface__msg__Quat *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__Quat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__Quat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__Quat__fini(&data[i - 1]);
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
yesense_interface__msg__Quat__Sequence__fini(yesense_interface__msg__Quat__Sequence * array)
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
      yesense_interface__msg__Quat__fini(&array->data[i]);
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

yesense_interface__msg__Quat__Sequence *
yesense_interface__msg__Quat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__Quat__Sequence * array = (yesense_interface__msg__Quat__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__Quat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__Quat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__Quat__Sequence__destroy(yesense_interface__msg__Quat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__Quat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__Quat__Sequence__are_equal(const yesense_interface__msg__Quat__Sequence * lhs, const yesense_interface__msg__Quat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__Quat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__Quat__Sequence__copy(
  const yesense_interface__msg__Quat__Sequence * input,
  yesense_interface__msg__Quat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__Quat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__Quat * data =
      (yesense_interface__msg__Quat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__Quat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__Quat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__Quat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
