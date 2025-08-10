// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/lockedmaskwh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bodyreader_msg__msg__Lockedmaskwh__init(bodyreader_msg__msg__Lockedmaskwh * msg)
{
  if (!msg) {
    return false;
  }
  // width_l
  // width_r
  // height_t
  // height_b
  return true;
}

void
bodyreader_msg__msg__Lockedmaskwh__fini(bodyreader_msg__msg__Lockedmaskwh * msg)
{
  if (!msg) {
    return;
  }
  // width_l
  // width_r
  // height_t
  // height_b
}

bool
bodyreader_msg__msg__Lockedmaskwh__are_equal(const bodyreader_msg__msg__Lockedmaskwh * lhs, const bodyreader_msg__msg__Lockedmaskwh * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width_l
  if (lhs->width_l != rhs->width_l) {
    return false;
  }
  // width_r
  if (lhs->width_r != rhs->width_r) {
    return false;
  }
  // height_t
  if (lhs->height_t != rhs->height_t) {
    return false;
  }
  // height_b
  if (lhs->height_b != rhs->height_b) {
    return false;
  }
  return true;
}

bool
bodyreader_msg__msg__Lockedmaskwh__copy(
  const bodyreader_msg__msg__Lockedmaskwh * input,
  bodyreader_msg__msg__Lockedmaskwh * output)
{
  if (!input || !output) {
    return false;
  }
  // width_l
  output->width_l = input->width_l;
  // width_r
  output->width_r = input->width_r;
  // height_t
  output->height_t = input->height_t;
  // height_b
  output->height_b = input->height_b;
  return true;
}

bodyreader_msg__msg__Lockedmaskwh *
bodyreader_msg__msg__Lockedmaskwh__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Lockedmaskwh * msg = (bodyreader_msg__msg__Lockedmaskwh *)allocator.allocate(sizeof(bodyreader_msg__msg__Lockedmaskwh), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyreader_msg__msg__Lockedmaskwh));
  bool success = bodyreader_msg__msg__Lockedmaskwh__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyreader_msg__msg__Lockedmaskwh__destroy(bodyreader_msg__msg__Lockedmaskwh * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyreader_msg__msg__Lockedmaskwh__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyreader_msg__msg__Lockedmaskwh__Sequence__init(bodyreader_msg__msg__Lockedmaskwh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Lockedmaskwh * data = NULL;

  if (size) {
    data = (bodyreader_msg__msg__Lockedmaskwh *)allocator.zero_allocate(size, sizeof(bodyreader_msg__msg__Lockedmaskwh), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyreader_msg__msg__Lockedmaskwh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyreader_msg__msg__Lockedmaskwh__fini(&data[i - 1]);
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
bodyreader_msg__msg__Lockedmaskwh__Sequence__fini(bodyreader_msg__msg__Lockedmaskwh__Sequence * array)
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
      bodyreader_msg__msg__Lockedmaskwh__fini(&array->data[i]);
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

bodyreader_msg__msg__Lockedmaskwh__Sequence *
bodyreader_msg__msg__Lockedmaskwh__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Lockedmaskwh__Sequence * array = (bodyreader_msg__msg__Lockedmaskwh__Sequence *)allocator.allocate(sizeof(bodyreader_msg__msg__Lockedmaskwh__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyreader_msg__msg__Lockedmaskwh__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyreader_msg__msg__Lockedmaskwh__Sequence__destroy(bodyreader_msg__msg__Lockedmaskwh__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyreader_msg__msg__Lockedmaskwh__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyreader_msg__msg__Lockedmaskwh__Sequence__are_equal(const bodyreader_msg__msg__Lockedmaskwh__Sequence * lhs, const bodyreader_msg__msg__Lockedmaskwh__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyreader_msg__msg__Lockedmaskwh__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Lockedmaskwh__Sequence__copy(
  const bodyreader_msg__msg__Lockedmaskwh__Sequence * input,
  bodyreader_msg__msg__Lockedmaskwh__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyreader_msg__msg__Lockedmaskwh);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyreader_msg__msg__Lockedmaskwh * data =
      (bodyreader_msg__msg__Lockedmaskwh *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyreader_msg__msg__Lockedmaskwh__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyreader_msg__msg__Lockedmaskwh__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyreader_msg__msg__Lockedmaskwh__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
