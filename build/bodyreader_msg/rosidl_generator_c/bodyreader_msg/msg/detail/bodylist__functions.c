// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyreader_msg:msg/Bodylist.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/bodylist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bodies`
#include "bodyreader_msg/msg/detail/body__functions.h"

bool
bodyreader_msg__msg__Bodylist__init(bodyreader_msg__msg__Bodylist * msg)
{
  if (!msg) {
    return false;
  }
  // count
  // bodies
  for (size_t i = 0; i < 6; ++i) {
    if (!bodyreader_msg__msg__Body__init(&msg->bodies[i])) {
      bodyreader_msg__msg__Bodylist__fini(msg);
      return false;
    }
  }
  return true;
}

void
bodyreader_msg__msg__Bodylist__fini(bodyreader_msg__msg__Bodylist * msg)
{
  if (!msg) {
    return;
  }
  // count
  // bodies
  for (size_t i = 0; i < 6; ++i) {
    bodyreader_msg__msg__Body__fini(&msg->bodies[i]);
  }
}

bool
bodyreader_msg__msg__Bodylist__are_equal(const bodyreader_msg__msg__Bodylist * lhs, const bodyreader_msg__msg__Bodylist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // bodies
  for (size_t i = 0; i < 6; ++i) {
    if (!bodyreader_msg__msg__Body__are_equal(
        &(lhs->bodies[i]), &(rhs->bodies[i])))
    {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Bodylist__copy(
  const bodyreader_msg__msg__Bodylist * input,
  bodyreader_msg__msg__Bodylist * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  // bodies
  for (size_t i = 0; i < 6; ++i) {
    if (!bodyreader_msg__msg__Body__copy(
        &(input->bodies[i]), &(output->bodies[i])))
    {
      return false;
    }
  }
  return true;
}

bodyreader_msg__msg__Bodylist *
bodyreader_msg__msg__Bodylist__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Bodylist * msg = (bodyreader_msg__msg__Bodylist *)allocator.allocate(sizeof(bodyreader_msg__msg__Bodylist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyreader_msg__msg__Bodylist));
  bool success = bodyreader_msg__msg__Bodylist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyreader_msg__msg__Bodylist__destroy(bodyreader_msg__msg__Bodylist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyreader_msg__msg__Bodylist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyreader_msg__msg__Bodylist__Sequence__init(bodyreader_msg__msg__Bodylist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Bodylist * data = NULL;

  if (size) {
    data = (bodyreader_msg__msg__Bodylist *)allocator.zero_allocate(size, sizeof(bodyreader_msg__msg__Bodylist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyreader_msg__msg__Bodylist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyreader_msg__msg__Bodylist__fini(&data[i - 1]);
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
bodyreader_msg__msg__Bodylist__Sequence__fini(bodyreader_msg__msg__Bodylist__Sequence * array)
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
      bodyreader_msg__msg__Bodylist__fini(&array->data[i]);
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

bodyreader_msg__msg__Bodylist__Sequence *
bodyreader_msg__msg__Bodylist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Bodylist__Sequence * array = (bodyreader_msg__msg__Bodylist__Sequence *)allocator.allocate(sizeof(bodyreader_msg__msg__Bodylist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyreader_msg__msg__Bodylist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyreader_msg__msg__Bodylist__Sequence__destroy(bodyreader_msg__msg__Bodylist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyreader_msg__msg__Bodylist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyreader_msg__msg__Bodylist__Sequence__are_equal(const bodyreader_msg__msg__Bodylist__Sequence * lhs, const bodyreader_msg__msg__Bodylist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyreader_msg__msg__Bodylist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Bodylist__Sequence__copy(
  const bodyreader_msg__msg__Bodylist__Sequence * input,
  bodyreader_msg__msg__Bodylist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyreader_msg__msg__Bodylist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyreader_msg__msg__Bodylist * data =
      (bodyreader_msg__msg__Bodylist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyreader_msg__msg__Bodylist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyreader_msg__msg__Bodylist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyreader_msg__msg__Bodylist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
