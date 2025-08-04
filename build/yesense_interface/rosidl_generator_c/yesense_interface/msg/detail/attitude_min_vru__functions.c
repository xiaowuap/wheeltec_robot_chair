// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/AttitudeMinVru.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/attitude_min_vru__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `imu_basic`
#include "yesense_interface/msg/detail/imu_data__functions.h"
// Member `euler`
#include "yesense_interface/msg/detail/euler_angle__functions.h"

bool
yesense_interface__msg__AttitudeMinVru__init(yesense_interface__msg__AttitudeMinVru * msg)
{
  if (!msg) {
    return false;
  }
  // imu_basic
  if (!yesense_interface__msg__ImuData__init(&msg->imu_basic)) {
    yesense_interface__msg__AttitudeMinVru__fini(msg);
    return false;
  }
  // euler
  if (!yesense_interface__msg__EulerAngle__init(&msg->euler)) {
    yesense_interface__msg__AttitudeMinVru__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__AttitudeMinVru__fini(yesense_interface__msg__AttitudeMinVru * msg)
{
  if (!msg) {
    return;
  }
  // imu_basic
  yesense_interface__msg__ImuData__fini(&msg->imu_basic);
  // euler
  yesense_interface__msg__EulerAngle__fini(&msg->euler);
}

bool
yesense_interface__msg__AttitudeMinVru__are_equal(const yesense_interface__msg__AttitudeMinVru * lhs, const yesense_interface__msg__AttitudeMinVru * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imu_basic
  if (!yesense_interface__msg__ImuData__are_equal(
      &(lhs->imu_basic), &(rhs->imu_basic)))
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
yesense_interface__msg__AttitudeMinVru__copy(
  const yesense_interface__msg__AttitudeMinVru * input,
  yesense_interface__msg__AttitudeMinVru * output)
{
  if (!input || !output) {
    return false;
  }
  // imu_basic
  if (!yesense_interface__msg__ImuData__copy(
      &(input->imu_basic), &(output->imu_basic)))
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

yesense_interface__msg__AttitudeMinVru *
yesense_interface__msg__AttitudeMinVru__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__AttitudeMinVru * msg = (yesense_interface__msg__AttitudeMinVru *)allocator.allocate(sizeof(yesense_interface__msg__AttitudeMinVru), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__AttitudeMinVru));
  bool success = yesense_interface__msg__AttitudeMinVru__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__AttitudeMinVru__destroy(yesense_interface__msg__AttitudeMinVru * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__AttitudeMinVru__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__AttitudeMinVru__Sequence__init(yesense_interface__msg__AttitudeMinVru__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__AttitudeMinVru * data = NULL;

  if (size) {
    data = (yesense_interface__msg__AttitudeMinVru *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__AttitudeMinVru), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__AttitudeMinVru__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__AttitudeMinVru__fini(&data[i - 1]);
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
yesense_interface__msg__AttitudeMinVru__Sequence__fini(yesense_interface__msg__AttitudeMinVru__Sequence * array)
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
      yesense_interface__msg__AttitudeMinVru__fini(&array->data[i]);
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

yesense_interface__msg__AttitudeMinVru__Sequence *
yesense_interface__msg__AttitudeMinVru__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__AttitudeMinVru__Sequence * array = (yesense_interface__msg__AttitudeMinVru__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__AttitudeMinVru__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__AttitudeMinVru__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__AttitudeMinVru__Sequence__destroy(yesense_interface__msg__AttitudeMinVru__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__AttitudeMinVru__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__AttitudeMinVru__Sequence__are_equal(const yesense_interface__msg__AttitudeMinVru__Sequence * lhs, const yesense_interface__msg__AttitudeMinVru__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__AttitudeMinVru__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__AttitudeMinVru__Sequence__copy(
  const yesense_interface__msg__AttitudeMinVru__Sequence * input,
  yesense_interface__msg__AttitudeMinVru__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__AttitudeMinVru);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__AttitudeMinVru * data =
      (yesense_interface__msg__AttitudeMinVru *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__AttitudeMinVru__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__AttitudeMinVru__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__AttitudeMinVru__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
