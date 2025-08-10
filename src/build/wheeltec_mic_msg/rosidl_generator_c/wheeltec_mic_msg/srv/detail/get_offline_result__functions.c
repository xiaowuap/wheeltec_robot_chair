// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice
#include "wheeltec_mic_msg/srv/detail/get_offline_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
wheeltec_mic_msg__srv__GetOfflineResult_Request__init(wheeltec_mic_msg__srv__GetOfflineResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // offline_recognise_start
  // confidence_threshold
  // time_per_order
  return true;
}

void
wheeltec_mic_msg__srv__GetOfflineResult_Request__fini(wheeltec_mic_msg__srv__GetOfflineResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // offline_recognise_start
  // confidence_threshold
  // time_per_order
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Request__are_equal(const wheeltec_mic_msg__srv__GetOfflineResult_Request * lhs, const wheeltec_mic_msg__srv__GetOfflineResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // offline_recognise_start
  if (lhs->offline_recognise_start != rhs->offline_recognise_start) {
    return false;
  }
  // confidence_threshold
  if (lhs->confidence_threshold != rhs->confidence_threshold) {
    return false;
  }
  // time_per_order
  if (lhs->time_per_order != rhs->time_per_order) {
    return false;
  }
  return true;
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Request__copy(
  const wheeltec_mic_msg__srv__GetOfflineResult_Request * input,
  wheeltec_mic_msg__srv__GetOfflineResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // offline_recognise_start
  output->offline_recognise_start = input->offline_recognise_start;
  // confidence_threshold
  output->confidence_threshold = input->confidence_threshold;
  // time_per_order
  output->time_per_order = input->time_per_order;
  return true;
}

wheeltec_mic_msg__srv__GetOfflineResult_Request *
wheeltec_mic_msg__srv__GetOfflineResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__srv__GetOfflineResult_Request * msg = (wheeltec_mic_msg__srv__GetOfflineResult_Request *)allocator.allocate(sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Request));
  bool success = wheeltec_mic_msg__srv__GetOfflineResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheeltec_mic_msg__srv__GetOfflineResult_Request__destroy(wheeltec_mic_msg__srv__GetOfflineResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheeltec_mic_msg__srv__GetOfflineResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__init(wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__srv__GetOfflineResult_Request * data = NULL;

  if (size) {
    data = (wheeltec_mic_msg__srv__GetOfflineResult_Request *)allocator.zero_allocate(size, sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheeltec_mic_msg__srv__GetOfflineResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheeltec_mic_msg__srv__GetOfflineResult_Request__fini(&data[i - 1]);
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
wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__fini(wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * array)
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
      wheeltec_mic_msg__srv__GetOfflineResult_Request__fini(&array->data[i]);
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

wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence *
wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * array = (wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence *)allocator.allocate(sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__destroy(wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__are_equal(const wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * lhs, const wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheeltec_mic_msg__srv__GetOfflineResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence__copy(
  const wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * input,
  wheeltec_mic_msg__srv__GetOfflineResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheeltec_mic_msg__srv__GetOfflineResult_Request * data =
      (wheeltec_mic_msg__srv__GetOfflineResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheeltec_mic_msg__srv__GetOfflineResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheeltec_mic_msg__srv__GetOfflineResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheeltec_mic_msg__srv__GetOfflineResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// Member `fail_reason`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
wheeltec_mic_msg__srv__GetOfflineResult_Response__init(wheeltec_mic_msg__srv__GetOfflineResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(msg);
    return false;
  }
  // fail_reason
  if (!rosidl_runtime_c__String__init(&msg->fail_reason)) {
    wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(wheeltec_mic_msg__srv__GetOfflineResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
  // fail_reason
  rosidl_runtime_c__String__fini(&msg->fail_reason);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Response__are_equal(const wheeltec_mic_msg__srv__GetOfflineResult_Response * lhs, const wheeltec_mic_msg__srv__GetOfflineResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  // fail_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fail_reason), &(rhs->fail_reason)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Response__copy(
  const wheeltec_mic_msg__srv__GetOfflineResult_Response * input,
  wheeltec_mic_msg__srv__GetOfflineResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  // fail_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->fail_reason), &(output->fail_reason)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

wheeltec_mic_msg__srv__GetOfflineResult_Response *
wheeltec_mic_msg__srv__GetOfflineResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__srv__GetOfflineResult_Response * msg = (wheeltec_mic_msg__srv__GetOfflineResult_Response *)allocator.allocate(sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Response));
  bool success = wheeltec_mic_msg__srv__GetOfflineResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheeltec_mic_msg__srv__GetOfflineResult_Response__destroy(wheeltec_mic_msg__srv__GetOfflineResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__init(wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__srv__GetOfflineResult_Response * data = NULL;

  if (size) {
    data = (wheeltec_mic_msg__srv__GetOfflineResult_Response *)allocator.zero_allocate(size, sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheeltec_mic_msg__srv__GetOfflineResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(&data[i - 1]);
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
wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__fini(wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * array)
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
      wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(&array->data[i]);
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

wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence *
wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * array = (wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence *)allocator.allocate(sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__destroy(wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__are_equal(const wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * lhs, const wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheeltec_mic_msg__srv__GetOfflineResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence__copy(
  const wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * input,
  wheeltec_mic_msg__srv__GetOfflineResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheeltec_mic_msg__srv__GetOfflineResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheeltec_mic_msg__srv__GetOfflineResult_Response * data =
      (wheeltec_mic_msg__srv__GetOfflineResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheeltec_mic_msg__srv__GetOfflineResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheeltec_mic_msg__srv__GetOfflineResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheeltec_mic_msg__srv__GetOfflineResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
