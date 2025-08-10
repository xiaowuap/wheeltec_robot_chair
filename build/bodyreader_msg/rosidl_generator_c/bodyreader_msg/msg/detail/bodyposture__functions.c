// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyreader_msg:msg/Bodyposture.idl
// generated code does not contain a copyright notice
#include "bodyreader_msg/msg/detail/bodyposture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bodyreader_msg__msg__Bodyposture__init(bodyreader_msg__msg__Bodyposture * msg)
{
  if (!msg) {
    return false;
  }
  // bodyid
  // centerofmass_x
  // centerofmass_y
  // centerofmass_z
  // left_arm_out
  // right_arm_out
  // left_hand_raised
  // right_hand_raised
  // akimibo
  // left_foot_up
  // right_foot_up
  // fall
  // tips
  // lock_status
  return true;
}

void
bodyreader_msg__msg__Bodyposture__fini(bodyreader_msg__msg__Bodyposture * msg)
{
  if (!msg) {
    return;
  }
  // bodyid
  // centerofmass_x
  // centerofmass_y
  // centerofmass_z
  // left_arm_out
  // right_arm_out
  // left_hand_raised
  // right_hand_raised
  // akimibo
  // left_foot_up
  // right_foot_up
  // fall
  // tips
  // lock_status
}

bool
bodyreader_msg__msg__Bodyposture__are_equal(const bodyreader_msg__msg__Bodyposture * lhs, const bodyreader_msg__msg__Bodyposture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bodyid
  if (lhs->bodyid != rhs->bodyid) {
    return false;
  }
  // centerofmass_x
  if (lhs->centerofmass_x != rhs->centerofmass_x) {
    return false;
  }
  // centerofmass_y
  if (lhs->centerofmass_y != rhs->centerofmass_y) {
    return false;
  }
  // centerofmass_z
  if (lhs->centerofmass_z != rhs->centerofmass_z) {
    return false;
  }
  // left_arm_out
  if (lhs->left_arm_out != rhs->left_arm_out) {
    return false;
  }
  // right_arm_out
  if (lhs->right_arm_out != rhs->right_arm_out) {
    return false;
  }
  // left_hand_raised
  if (lhs->left_hand_raised != rhs->left_hand_raised) {
    return false;
  }
  // right_hand_raised
  if (lhs->right_hand_raised != rhs->right_hand_raised) {
    return false;
  }
  // akimibo
  if (lhs->akimibo != rhs->akimibo) {
    return false;
  }
  // left_foot_up
  if (lhs->left_foot_up != rhs->left_foot_up) {
    return false;
  }
  // right_foot_up
  if (lhs->right_foot_up != rhs->right_foot_up) {
    return false;
  }
  // fall
  if (lhs->fall != rhs->fall) {
    return false;
  }
  // tips
  if (lhs->tips != rhs->tips) {
    return false;
  }
  // lock_status
  if (lhs->lock_status != rhs->lock_status) {
    return false;
  }
  return true;
}

bool
bodyreader_msg__msg__Bodyposture__copy(
  const bodyreader_msg__msg__Bodyposture * input,
  bodyreader_msg__msg__Bodyposture * output)
{
  if (!input || !output) {
    return false;
  }
  // bodyid
  output->bodyid = input->bodyid;
  // centerofmass_x
  output->centerofmass_x = input->centerofmass_x;
  // centerofmass_y
  output->centerofmass_y = input->centerofmass_y;
  // centerofmass_z
  output->centerofmass_z = input->centerofmass_z;
  // left_arm_out
  output->left_arm_out = input->left_arm_out;
  // right_arm_out
  output->right_arm_out = input->right_arm_out;
  // left_hand_raised
  output->left_hand_raised = input->left_hand_raised;
  // right_hand_raised
  output->right_hand_raised = input->right_hand_raised;
  // akimibo
  output->akimibo = input->akimibo;
  // left_foot_up
  output->left_foot_up = input->left_foot_up;
  // right_foot_up
  output->right_foot_up = input->right_foot_up;
  // fall
  output->fall = input->fall;
  // tips
  output->tips = input->tips;
  // lock_status
  output->lock_status = input->lock_status;
  return true;
}

bodyreader_msg__msg__Bodyposture *
bodyreader_msg__msg__Bodyposture__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Bodyposture * msg = (bodyreader_msg__msg__Bodyposture *)allocator.allocate(sizeof(bodyreader_msg__msg__Bodyposture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyreader_msg__msg__Bodyposture));
  bool success = bodyreader_msg__msg__Bodyposture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyreader_msg__msg__Bodyposture__destroy(bodyreader_msg__msg__Bodyposture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyreader_msg__msg__Bodyposture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyreader_msg__msg__Bodyposture__Sequence__init(bodyreader_msg__msg__Bodyposture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Bodyposture * data = NULL;

  if (size) {
    data = (bodyreader_msg__msg__Bodyposture *)allocator.zero_allocate(size, sizeof(bodyreader_msg__msg__Bodyposture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyreader_msg__msg__Bodyposture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyreader_msg__msg__Bodyposture__fini(&data[i - 1]);
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
bodyreader_msg__msg__Bodyposture__Sequence__fini(bodyreader_msg__msg__Bodyposture__Sequence * array)
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
      bodyreader_msg__msg__Bodyposture__fini(&array->data[i]);
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

bodyreader_msg__msg__Bodyposture__Sequence *
bodyreader_msg__msg__Bodyposture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyreader_msg__msg__Bodyposture__Sequence * array = (bodyreader_msg__msg__Bodyposture__Sequence *)allocator.allocate(sizeof(bodyreader_msg__msg__Bodyposture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyreader_msg__msg__Bodyposture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyreader_msg__msg__Bodyposture__Sequence__destroy(bodyreader_msg__msg__Bodyposture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyreader_msg__msg__Bodyposture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyreader_msg__msg__Bodyposture__Sequence__are_equal(const bodyreader_msg__msg__Bodyposture__Sequence * lhs, const bodyreader_msg__msg__Bodyposture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyreader_msg__msg__Bodyposture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyreader_msg__msg__Bodyposture__Sequence__copy(
  const bodyreader_msg__msg__Bodyposture__Sequence * input,
  bodyreader_msg__msg__Bodyposture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyreader_msg__msg__Bodyposture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyreader_msg__msg__Bodyposture * data =
      (bodyreader_msg__msg__Bodyposture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyreader_msg__msg__Bodyposture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyreader_msg__msg__Bodyposture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyreader_msg__msg__Bodyposture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
