// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/msg/detail/pcm_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pcm_buf`
#include "rosidl_runtime_c/string_functions.h"

bool
wheeltec_mic_msg__msg__PcmMsg__init(wheeltec_mic_msg__msg__PcmMsg * msg)
{
  if (!msg) {
    return false;
  }
  // length
  // pcm_buf
  if (!rosidl_runtime_c__String__Sequence__init(&msg->pcm_buf, 0)) {
    wheeltec_mic_msg__msg__PcmMsg__fini(msg);
    return false;
  }
  return true;
}

void
wheeltec_mic_msg__msg__PcmMsg__fini(wheeltec_mic_msg__msg__PcmMsg * msg)
{
  if (!msg) {
    return;
  }
  // length
  // pcm_buf
  rosidl_runtime_c__String__Sequence__fini(&msg->pcm_buf);
}

bool
wheeltec_mic_msg__msg__PcmMsg__are_equal(const wheeltec_mic_msg__msg__PcmMsg * lhs, const wheeltec_mic_msg__msg__PcmMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // pcm_buf
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->pcm_buf), &(rhs->pcm_buf)))
  {
    return false;
  }
  return true;
}

bool
wheeltec_mic_msg__msg__PcmMsg__copy(
  const wheeltec_mic_msg__msg__PcmMsg * input,
  wheeltec_mic_msg__msg__PcmMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // length
  output->length = input->length;
  // pcm_buf
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->pcm_buf), &(output->pcm_buf)))
  {
    return false;
  }
  return true;
}

wheeltec_mic_msg__msg__PcmMsg *
wheeltec_mic_msg__msg__PcmMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__msg__PcmMsg * msg = (wheeltec_mic_msg__msg__PcmMsg *)allocator.allocate(sizeof(wheeltec_mic_msg__msg__PcmMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheeltec_mic_msg__msg__PcmMsg));
  bool success = wheeltec_mic_msg__msg__PcmMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheeltec_mic_msg__msg__PcmMsg__destroy(wheeltec_mic_msg__msg__PcmMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheeltec_mic_msg__msg__PcmMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheeltec_mic_msg__msg__PcmMsg__Sequence__init(wheeltec_mic_msg__msg__PcmMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__msg__PcmMsg * data = NULL;

  if (size) {
    data = (wheeltec_mic_msg__msg__PcmMsg *)allocator.zero_allocate(size, sizeof(wheeltec_mic_msg__msg__PcmMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheeltec_mic_msg__msg__PcmMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheeltec_mic_msg__msg__PcmMsg__fini(&data[i - 1]);
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
wheeltec_mic_msg__msg__PcmMsg__Sequence__fini(wheeltec_mic_msg__msg__PcmMsg__Sequence * array)
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
      wheeltec_mic_msg__msg__PcmMsg__fini(&array->data[i]);
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

wheeltec_mic_msg__msg__PcmMsg__Sequence *
wheeltec_mic_msg__msg__PcmMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__msg__PcmMsg__Sequence * array = (wheeltec_mic_msg__msg__PcmMsg__Sequence *)allocator.allocate(sizeof(wheeltec_mic_msg__msg__PcmMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheeltec_mic_msg__msg__PcmMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheeltec_mic_msg__msg__PcmMsg__Sequence__destroy(wheeltec_mic_msg__msg__PcmMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheeltec_mic_msg__msg__PcmMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheeltec_mic_msg__msg__PcmMsg__Sequence__are_equal(const wheeltec_mic_msg__msg__PcmMsg__Sequence * lhs, const wheeltec_mic_msg__msg__PcmMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheeltec_mic_msg__msg__PcmMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheeltec_mic_msg__msg__PcmMsg__Sequence__copy(
  const wheeltec_mic_msg__msg__PcmMsg__Sequence * input,
  wheeltec_mic_msg__msg__PcmMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheeltec_mic_msg__msg__PcmMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheeltec_mic_msg__msg__PcmMsg * data =
      (wheeltec_mic_msg__msg__PcmMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheeltec_mic_msg__msg__PcmMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheeltec_mic_msg__msg__PcmMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheeltec_mic_msg__msg__PcmMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
