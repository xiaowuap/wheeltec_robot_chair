// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/msg/detail/motion_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wheeltec_mic_msg__msg__MotionControl__init(wheeltec_mic_msg__msg__MotionControl * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // linear_y
  // angular_z
  // cmd_vel_flag
  // follow_flag
  // goal_reached_flag
  return true;
}

void
wheeltec_mic_msg__msg__MotionControl__fini(wheeltec_mic_msg__msg__MotionControl * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // linear_y
  // angular_z
  // cmd_vel_flag
  // follow_flag
  // goal_reached_flag
}

bool
wheeltec_mic_msg__msg__MotionControl__are_equal(const wheeltec_mic_msg__msg__MotionControl * lhs, const wheeltec_mic_msg__msg__MotionControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_x
  if (lhs->linear_x != rhs->linear_x) {
    return false;
  }
  // linear_y
  if (lhs->linear_y != rhs->linear_y) {
    return false;
  }
  // angular_z
  if (lhs->angular_z != rhs->angular_z) {
    return false;
  }
  // cmd_vel_flag
  if (lhs->cmd_vel_flag != rhs->cmd_vel_flag) {
    return false;
  }
  // follow_flag
  if (lhs->follow_flag != rhs->follow_flag) {
    return false;
  }
  // goal_reached_flag
  if (lhs->goal_reached_flag != rhs->goal_reached_flag) {
    return false;
  }
  return true;
}

bool
wheeltec_mic_msg__msg__MotionControl__copy(
  const wheeltec_mic_msg__msg__MotionControl * input,
  wheeltec_mic_msg__msg__MotionControl * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_x
  output->linear_x = input->linear_x;
  // linear_y
  output->linear_y = input->linear_y;
  // angular_z
  output->angular_z = input->angular_z;
  // cmd_vel_flag
  output->cmd_vel_flag = input->cmd_vel_flag;
  // follow_flag
  output->follow_flag = input->follow_flag;
  // goal_reached_flag
  output->goal_reached_flag = input->goal_reached_flag;
  return true;
}

wheeltec_mic_msg__msg__MotionControl *
wheeltec_mic_msg__msg__MotionControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__msg__MotionControl * msg = (wheeltec_mic_msg__msg__MotionControl *)allocator.allocate(sizeof(wheeltec_mic_msg__msg__MotionControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheeltec_mic_msg__msg__MotionControl));
  bool success = wheeltec_mic_msg__msg__MotionControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheeltec_mic_msg__msg__MotionControl__destroy(wheeltec_mic_msg__msg__MotionControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheeltec_mic_msg__msg__MotionControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheeltec_mic_msg__msg__MotionControl__Sequence__init(wheeltec_mic_msg__msg__MotionControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__msg__MotionControl * data = NULL;

  if (size) {
    data = (wheeltec_mic_msg__msg__MotionControl *)allocator.zero_allocate(size, sizeof(wheeltec_mic_msg__msg__MotionControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheeltec_mic_msg__msg__MotionControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheeltec_mic_msg__msg__MotionControl__fini(&data[i - 1]);
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
wheeltec_mic_msg__msg__MotionControl__Sequence__fini(wheeltec_mic_msg__msg__MotionControl__Sequence * array)
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
      wheeltec_mic_msg__msg__MotionControl__fini(&array->data[i]);
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

wheeltec_mic_msg__msg__MotionControl__Sequence *
wheeltec_mic_msg__msg__MotionControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__msg__MotionControl__Sequence * array = (wheeltec_mic_msg__msg__MotionControl__Sequence *)allocator.allocate(sizeof(wheeltec_mic_msg__msg__MotionControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheeltec_mic_msg__msg__MotionControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheeltec_mic_msg__msg__MotionControl__Sequence__destroy(wheeltec_mic_msg__msg__MotionControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheeltec_mic_msg__msg__MotionControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheeltec_mic_msg__msg__MotionControl__Sequence__are_equal(const wheeltec_mic_msg__msg__MotionControl__Sequence * lhs, const wheeltec_mic_msg__msg__MotionControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheeltec_mic_msg__msg__MotionControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheeltec_mic_msg__msg__MotionControl__Sequence__copy(
  const wheeltec_mic_msg__msg__MotionControl__Sequence * input,
  wheeltec_mic_msg__msg__MotionControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheeltec_mic_msg__msg__MotionControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheeltec_mic_msg__msg__MotionControl * data =
      (wheeltec_mic_msg__msg__MotionControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheeltec_mic_msg__msg__MotionControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheeltec_mic_msg__msg__MotionControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheeltec_mic_msg__msg__MotionControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
