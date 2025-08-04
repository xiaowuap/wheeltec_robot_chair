// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyreader_msg:msg/Vector2f.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/vector2f__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bodyreader_msg__msg__Vector2f__init(bodyreader_msg__msg__Vector2f * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
bodyreader_msg__msg__Vector2f__fini(bodyreader_msg__msg__Vector2f * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
bodyreader_msg__msg__Vector2f__are_equal(const bodyreader_msg__msg__Vector2f * lhs, const bodyreader_msg__msg__Vector2f * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
bodyreader_msg__msg__Vector2f__copy(
  const bodyreader_msg__msg__Vector2f * input,
  bodyreader_msg__msg__Vector2f * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

bodyreader_msg__msg__Vector2f *
bodyreader_msg__msg__Vector2f__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Vector2f * msg = (bodyreader_msg__msg__Vector2f *)allocator.allocate(sizeof(bodyreader_msg__msg__Vector2f), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyreader_msg__msg__Vector2f));
  bool success = bodyreader_msg__msg__Vector2f__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyreader_msg__msg__Vector2f__destroy(bodyreader_msg__msg__Vector2f * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyreader_msg__msg__Vector2f__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyreader_msg__msg__Vector2f__Sequence__init(bodyreader_msg__msg__Vector2f__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Vector2f * data = NULL;

  if (size) {
    data = (bodyreader_msg__msg__Vector2f *)allocator.zero_allocate(size, sizeof(bodyreader_msg__msg__Vector2f), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyreader_msg__msg__Vector2f__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyreader_msg__msg__Vector2f__fini(&data[i - 1]);
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
bodyreader_msg__msg__Vector2f__Sequence__fini(bodyreader_msg__msg__Vector2f__Sequence * array)
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
      bodyreader_msg__msg__Vector2f__fini(&array->data[i]);
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

bodyreader_msg__msg__Vector2f__Sequence *
bodyreader_msg__msg__Vector2f__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Vector2f__Sequence * array = (bodyreader_msg__msg__Vector2f__Sequence *)allocator.allocate(sizeof(bodyreader_msg__msg__Vector2f__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyreader_msg__msg__Vector2f__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyreader_msg__msg__Vector2f__Sequence__destroy(bodyreader_msg__msg__Vector2f__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyreader_msg__msg__Vector2f__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyreader_msg__msg__Vector2f__Sequence__are_equal(const bodyreader_msg__msg__Vector2f__Sequence * lhs, const bodyreader_msg__msg__Vector2f__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyreader_msg__msg__Vector2f__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Vector2f__Sequence__copy(
  const bodyreader_msg__msg__Vector2f__Sequence * input,
  bodyreader_msg__msg__Vector2f__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyreader_msg__msg__Vector2f);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyreader_msg__msg__Vector2f * data =
      (bodyreader_msg__msg__Vector2f *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyreader_msg__msg__Vector2f__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyreader_msg__msg__Vector2f__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyreader_msg__msg__Vector2f__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
