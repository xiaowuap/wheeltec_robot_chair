// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/body__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `centerofmass`
#include "bodyreader_msg/msg/detail/vector3f__functions.h"
// Member `joints`
#include "bodyreader_msg/msg/detail/joint__functions.h"

bool
bodyreader_msg__msg__Body__init(bodyreader_msg__msg__Body * msg)
{
  if (!msg) {
    return false;
  }
  // bodyid
  // centerofmass
  if (!bodyreader_msg__msg__Vector3f__init(&msg->centerofmass)) {
    bodyreader_msg__msg__Body__fini(msg);
    return false;
  }
  // joints
  for (size_t i = 0; i < 19; ++i) {
    if (!bodyreader_msg__msg__Joint__init(&msg->joints[i])) {
      bodyreader_msg__msg__Body__fini(msg);
      return false;
    }
  }
  return true;
}

void
bodyreader_msg__msg__Body__fini(bodyreader_msg__msg__Body * msg)
{
  if (!msg) {
    return;
  }
  // bodyid
  // centerofmass
  bodyreader_msg__msg__Vector3f__fini(&msg->centerofmass);
  // joints
  for (size_t i = 0; i < 19; ++i) {
    bodyreader_msg__msg__Joint__fini(&msg->joints[i]);
  }
}

bool
bodyreader_msg__msg__Body__are_equal(const bodyreader_msg__msg__Body * lhs, const bodyreader_msg__msg__Body * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bodyid
  if (lhs->bodyid != rhs->bodyid) {
    return false;
  }
  // centerofmass
  if (!bodyreader_msg__msg__Vector3f__are_equal(
      &(lhs->centerofmass), &(rhs->centerofmass)))
  {
    return false;
  }
  // joints
  for (size_t i = 0; i < 19; ++i) {
    if (!bodyreader_msg__msg__Joint__are_equal(
        &(lhs->joints[i]), &(rhs->joints[i])))
    {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Body__copy(
  const bodyreader_msg__msg__Body * input,
  bodyreader_msg__msg__Body * output)
{
  if (!input || !output) {
    return false;
  }
  // bodyid
  output->bodyid = input->bodyid;
  // centerofmass
  if (!bodyreader_msg__msg__Vector3f__copy(
      &(input->centerofmass), &(output->centerofmass)))
  {
    return false;
  }
  // joints
  for (size_t i = 0; i < 19; ++i) {
    if (!bodyreader_msg__msg__Joint__copy(
        &(input->joints[i]), &(output->joints[i])))
    {
      return false;
    }
  }
  return true;
}

bodyreader_msg__msg__Body *
bodyreader_msg__msg__Body__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Body * msg = (bodyreader_msg__msg__Body *)allocator.allocate(sizeof(bodyreader_msg__msg__Body), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyreader_msg__msg__Body));
  bool success = bodyreader_msg__msg__Body__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyreader_msg__msg__Body__destroy(bodyreader_msg__msg__Body * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyreader_msg__msg__Body__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyreader_msg__msg__Body__Sequence__init(bodyreader_msg__msg__Body__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Body * data = NULL;

  if (size) {
    data = (bodyreader_msg__msg__Body *)allocator.zero_allocate(size, sizeof(bodyreader_msg__msg__Body), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyreader_msg__msg__Body__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyreader_msg__msg__Body__fini(&data[i - 1]);
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
bodyreader_msg__msg__Body__Sequence__fini(bodyreader_msg__msg__Body__Sequence * array)
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
      bodyreader_msg__msg__Body__fini(&array->data[i]);
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

bodyreader_msg__msg__Body__Sequence *
bodyreader_msg__msg__Body__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Body__Sequence * array = (bodyreader_msg__msg__Body__Sequence *)allocator.allocate(sizeof(bodyreader_msg__msg__Body__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyreader_msg__msg__Body__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyreader_msg__msg__Body__Sequence__destroy(bodyreader_msg__msg__Body__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyreader_msg__msg__Body__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyreader_msg__msg__Body__Sequence__are_equal(const bodyreader_msg__msg__Body__Sequence * lhs, const bodyreader_msg__msg__Body__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyreader_msg__msg__Body__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Body__Sequence__copy(
  const bodyreader_msg__msg__Body__Sequence * input,
  bodyreader_msg__msg__Body__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyreader_msg__msg__Body);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyreader_msg__msg__Body * data =
      (bodyreader_msg__msg__Body *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyreader_msg__msg__Body__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyreader_msg__msg__Body__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyreader_msg__msg__Body__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
