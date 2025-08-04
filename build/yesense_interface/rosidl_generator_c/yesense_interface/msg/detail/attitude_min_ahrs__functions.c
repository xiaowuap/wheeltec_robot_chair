// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice
#include "yesense_interface/msg/detail/attitude_min_ahrs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `att_min_vru`
#include "yesense_interface/msg/detail/attitude_min_vru__functions.h"
// Member `mag_norm`
// Member `mag_raw`
#include "yesense_interface/msg/detail/three_axis__functions.h"

bool
yesense_interface__msg__AttitudeMinAhrs__init(yesense_interface__msg__AttitudeMinAhrs * msg)
{
  if (!msg) {
    return false;
  }
  // att_min_vru
  if (!yesense_interface__msg__AttitudeMinVru__init(&msg->att_min_vru)) {
    yesense_interface__msg__AttitudeMinAhrs__fini(msg);
    return false;
  }
  // mag_norm
  if (!yesense_interface__msg__ThreeAxis__init(&msg->mag_norm)) {
    yesense_interface__msg__AttitudeMinAhrs__fini(msg);
    return false;
  }
  // mag_raw
  if (!yesense_interface__msg__ThreeAxis__init(&msg->mag_raw)) {
    yesense_interface__msg__AttitudeMinAhrs__fini(msg);
    return false;
  }
  return true;
}

void
yesense_interface__msg__AttitudeMinAhrs__fini(yesense_interface__msg__AttitudeMinAhrs * msg)
{
  if (!msg) {
    return;
  }
  // att_min_vru
  yesense_interface__msg__AttitudeMinVru__fini(&msg->att_min_vru);
  // mag_norm
  yesense_interface__msg__ThreeAxis__fini(&msg->mag_norm);
  // mag_raw
  yesense_interface__msg__ThreeAxis__fini(&msg->mag_raw);
}

bool
yesense_interface__msg__AttitudeMinAhrs__are_equal(const yesense_interface__msg__AttitudeMinAhrs * lhs, const yesense_interface__msg__AttitudeMinAhrs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // att_min_vru
  if (!yesense_interface__msg__AttitudeMinVru__are_equal(
      &(lhs->att_min_vru), &(rhs->att_min_vru)))
  {
    return false;
  }
  // mag_norm
  if (!yesense_interface__msg__ThreeAxis__are_equal(
      &(lhs->mag_norm), &(rhs->mag_norm)))
  {
    return false;
  }
  // mag_raw
  if (!yesense_interface__msg__ThreeAxis__are_equal(
      &(lhs->mag_raw), &(rhs->mag_raw)))
  {
    return false;
  }
  return true;
}

bool
yesense_interface__msg__AttitudeMinAhrs__copy(
  const yesense_interface__msg__AttitudeMinAhrs * input,
  yesense_interface__msg__AttitudeMinAhrs * output)
{
  if (!input || !output) {
    return false;
  }
  // att_min_vru
  if (!yesense_interface__msg__AttitudeMinVru__copy(
      &(input->att_min_vru), &(output->att_min_vru)))
  {
    return false;
  }
  // mag_norm
  if (!yesense_interface__msg__ThreeAxis__copy(
      &(input->mag_norm), &(output->mag_norm)))
  {
    return false;
  }
  // mag_raw
  if (!yesense_interface__msg__ThreeAxis__copy(
      &(input->mag_raw), &(output->mag_raw)))
  {
    return false;
  }
  return true;
}

yesense_interface__msg__AttitudeMinAhrs *
yesense_interface__msg__AttitudeMinAhrs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__AttitudeMinAhrs * msg = (yesense_interface__msg__AttitudeMinAhrs *)allocator.allocate(sizeof(yesense_interface__msg__AttitudeMinAhrs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yesense_interface__msg__AttitudeMinAhrs));
  bool success = yesense_interface__msg__AttitudeMinAhrs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yesense_interface__msg__AttitudeMinAhrs__destroy(yesense_interface__msg__AttitudeMinAhrs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yesense_interface__msg__AttitudeMinAhrs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yesense_interface__msg__AttitudeMinAhrs__Sequence__init(yesense_interface__msg__AttitudeMinAhrs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__AttitudeMinAhrs * data = NULL;

  if (size) {
    data = (yesense_interface__msg__AttitudeMinAhrs *)allocator.zero_allocate(size, sizeof(yesense_interface__msg__AttitudeMinAhrs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yesense_interface__msg__AttitudeMinAhrs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yesense_interface__msg__AttitudeMinAhrs__fini(&data[i - 1]);
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
yesense_interface__msg__AttitudeMinAhrs__Sequence__fini(yesense_interface__msg__AttitudeMinAhrs__Sequence * array)
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
      yesense_interface__msg__AttitudeMinAhrs__fini(&array->data[i]);
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

yesense_interface__msg__AttitudeMinAhrs__Sequence *
yesense_interface__msg__AttitudeMinAhrs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yesense_interface__msg__AttitudeMinAhrs__Sequence * array = (yesense_interface__msg__AttitudeMinAhrs__Sequence *)allocator.allocate(sizeof(yesense_interface__msg__AttitudeMinAhrs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yesense_interface__msg__AttitudeMinAhrs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yesense_interface__msg__AttitudeMinAhrs__Sequence__destroy(yesense_interface__msg__AttitudeMinAhrs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yesense_interface__msg__AttitudeMinAhrs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yesense_interface__msg__AttitudeMinAhrs__Sequence__are_equal(const yesense_interface__msg__AttitudeMinAhrs__Sequence * lhs, const yesense_interface__msg__AttitudeMinAhrs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yesense_interface__msg__AttitudeMinAhrs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yesense_interface__msg__AttitudeMinAhrs__Sequence__copy(
  const yesense_interface__msg__AttitudeMinAhrs__Sequence * input,
  yesense_interface__msg__AttitudeMinAhrs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yesense_interface__msg__AttitudeMinAhrs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yesense_interface__msg__AttitudeMinAhrs * data =
      (yesense_interface__msg__AttitudeMinAhrs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yesense_interface__msg__AttitudeMinAhrs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yesense_interface__msg__AttitudeMinAhrs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yesense_interface__msg__AttitudeMinAhrs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
