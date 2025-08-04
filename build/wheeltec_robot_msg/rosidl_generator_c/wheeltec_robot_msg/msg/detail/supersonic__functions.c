// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wheeltec_robot_msg:msg/Supersonic.idl
// generated code does not contain a copyright notice
#include "wheeltec_robot_msg/msg/detail/supersonic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
wheeltec_robot_msg__msg__Supersonic__init(wheeltec_robot_msg__msg__Supersonic * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wheeltec_robot_msg__msg__Supersonic__fini(msg);
    return false;
  }
  // distance_a
  // distance_b
  // distance_c
  // distance_d
  // distance_e
  // distance_f
  // distance_g
  // distance_h
  return true;
}

void
wheeltec_robot_msg__msg__Supersonic__fini(wheeltec_robot_msg__msg__Supersonic * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // distance_a
  // distance_b
  // distance_c
  // distance_d
  // distance_e
  // distance_f
  // distance_g
  // distance_h
}

bool
wheeltec_robot_msg__msg__Supersonic__are_equal(const wheeltec_robot_msg__msg__Supersonic * lhs, const wheeltec_robot_msg__msg__Supersonic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // distance_a
  if (lhs->distance_a != rhs->distance_a) {
    return false;
  }
  // distance_b
  if (lhs->distance_b != rhs->distance_b) {
    return false;
  }
  // distance_c
  if (lhs->distance_c != rhs->distance_c) {
    return false;
  }
  // distance_d
  if (lhs->distance_d != rhs->distance_d) {
    return false;
  }
  // distance_e
  if (lhs->distance_e != rhs->distance_e) {
    return false;
  }
  // distance_f
  if (lhs->distance_f != rhs->distance_f) {
    return false;
  }
  // distance_g
  if (lhs->distance_g != rhs->distance_g) {
    return false;
  }
  // distance_h
  if (lhs->distance_h != rhs->distance_h) {
    return false;
  }
  return true;
}

bool
wheeltec_robot_msg__msg__Supersonic__copy(
  const wheeltec_robot_msg__msg__Supersonic * input,
  wheeltec_robot_msg__msg__Supersonic * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // distance_a
  output->distance_a = input->distance_a;
  // distance_b
  output->distance_b = input->distance_b;
  // distance_c
  output->distance_c = input->distance_c;
  // distance_d
  output->distance_d = input->distance_d;
  // distance_e
  output->distance_e = input->distance_e;
  // distance_f
  output->distance_f = input->distance_f;
  // distance_g
  output->distance_g = input->distance_g;
  // distance_h
  output->distance_h = input->distance_h;
  return true;
}

wheeltec_robot_msg__msg__Supersonic *
wheeltec_robot_msg__msg__Supersonic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_robot_msg__msg__Supersonic * msg = (wheeltec_robot_msg__msg__Supersonic *)allocator.allocate(sizeof(wheeltec_robot_msg__msg__Supersonic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheeltec_robot_msg__msg__Supersonic));
  bool success = wheeltec_robot_msg__msg__Supersonic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheeltec_robot_msg__msg__Supersonic__destroy(wheeltec_robot_msg__msg__Supersonic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheeltec_robot_msg__msg__Supersonic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheeltec_robot_msg__msg__Supersonic__Sequence__init(wheeltec_robot_msg__msg__Supersonic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_robot_msg__msg__Supersonic * data = NULL;

  if (size) {
    data = (wheeltec_robot_msg__msg__Supersonic *)allocator.zero_allocate(size, sizeof(wheeltec_robot_msg__msg__Supersonic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheeltec_robot_msg__msg__Supersonic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheeltec_robot_msg__msg__Supersonic__fini(&data[i - 1]);
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
wheeltec_robot_msg__msg__Supersonic__Sequence__fini(wheeltec_robot_msg__msg__Supersonic__Sequence * array)
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
      wheeltec_robot_msg__msg__Supersonic__fini(&array->data[i]);
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

wheeltec_robot_msg__msg__Supersonic__Sequence *
wheeltec_robot_msg__msg__Supersonic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_robot_msg__msg__Supersonic__Sequence * array = (wheeltec_robot_msg__msg__Supersonic__Sequence *)allocator.allocate(sizeof(wheeltec_robot_msg__msg__Supersonic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheeltec_robot_msg__msg__Supersonic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheeltec_robot_msg__msg__Supersonic__Sequence__destroy(wheeltec_robot_msg__msg__Supersonic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheeltec_robot_msg__msg__Supersonic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheeltec_robot_msg__msg__Supersonic__Sequence__are_equal(const wheeltec_robot_msg__msg__Supersonic__Sequence * lhs, const wheeltec_robot_msg__msg__Supersonic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheeltec_robot_msg__msg__Supersonic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheeltec_robot_msg__msg__Supersonic__Sequence__copy(
  const wheeltec_robot_msg__msg__Supersonic__Sequence * input,
  wheeltec_robot_msg__msg__Supersonic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheeltec_robot_msg__msg__Supersonic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheeltec_robot_msg__msg__Supersonic * data =
      (wheeltec_robot_msg__msg__Supersonic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheeltec_robot_msg__msg__Supersonic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheeltec_robot_msg__msg__Supersonic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheeltec_robot_msg__msg__Supersonic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
