// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/Tid.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/tid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yesense_interface__msg__Tid__init(yesense_interface__msg__Tid * msg)
{
  if (!msg) {
    return false;
  }
  // tid
  return true;
}

void
yesense_interface__msg__Tid__fini(yesense_interface__msg__Tid * msg)
{
  if (!msg) {
    return;
  }
  // tid
}

bool
yesense_interface__msg__Tid__are_equal(const yesense_interface__msg__Tid * lhs, const yesense_interface__msg__Tid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tid
  if (lhs->tid != rhs->tid) {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__Tid__copy(
  const yesense_interface__msg__Tid * input,
  yesense_interface__msg__Tid * output)
{
  if (!input || !output) {
    return false;
  }
  // tid
  output->tid = input->tid;
  return true;
}

yesense_interface__msg__Tid *
yesense_interface__msg__Tid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__Tid * msg = (yesense_interface__msg__Tid *)allocator.allocate(sizeof(yesense_interface__msg__Tid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__Tid));
  bool success = yesense_interface__msg__Tid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__Tid__destroy(yesense_interface__msg__Tid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__Tid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__Tid__Sequence__init(yesense_interface__msg__Tid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__Tid * data = NULL;

  if (size) {
    data = (yesense_interface__msg__Tid *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__Tid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__Tid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__Tid__fini(&data[i - 1]);
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
yesense_interface__msg__Tid__Sequence__fini(yesense_interface__msg__Tid__Sequence * array)
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
      yesense_interface__msg__Tid__fini(&array->data[i]);
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

yesense_interface__msg__Tid__Sequence *
yesense_interface__msg__Tid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__Tid__Sequence * array = (yesense_interface__msg__Tid__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__Tid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__Tid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__Tid__Sequence__destroy(yesense_interface__msg__Tid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__Tid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__Tid__Sequence__are_equal(const yesense_interface__msg__Tid__Sequence * lhs, const yesense_interface__msg__Tid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__Tid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__Tid__Sequence__copy(
  const yesense_interface__msg__Tid__Sequence * input,
  yesense_interface__msg__Tid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__Tid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__Tid * data =
      (yesense_interface__msg__Tid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__Tid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__Tid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__Tid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
