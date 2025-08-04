// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.h"
#include "wheeltec_mic_msg/srv/detail/get_offline_result__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wheeltec_mic_msg__srv__get_offline_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("wheeltec_mic_msg.srv._get_offline_result.GetOfflineResult_Request", full_classname_dest, 65) == 0);
  }
  wheeltec_mic_msg__srv__GetOfflineResult_Request * ros_message = _ros_message;
  {  // offline_recognise_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "offline_recognise_start");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offline_recognise_start = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // confidence_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence_threshold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence_threshold = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // time_per_order
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_per_order");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_per_order = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wheeltec_mic_msg__srv__get_offline_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetOfflineResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wheeltec_mic_msg.srv._get_offline_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetOfflineResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wheeltec_mic_msg__srv__GetOfflineResult_Request * ros_message = (wheeltec_mic_msg__srv__GetOfflineResult_Request *)raw_ros_message;
  {  // offline_recognise_start
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->offline_recognise_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offline_recognise_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence_threshold
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->confidence_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_per_order
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->time_per_order);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_per_order", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__struct.h"
// already included above
// #include "wheeltec_mic_msg/srv/detail/get_offline_result__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wheeltec_mic_msg__srv__get_offline_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("wheeltec_mic_msg.srv._get_offline_result.GetOfflineResult_Response", full_classname_dest, 66) == 0);
  }
  wheeltec_mic_msg__srv__GetOfflineResult_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->result, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // fail_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "fail_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->fail_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // text
    PyObject * field = PyObject_GetAttrString(_pymsg, "text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wheeltec_mic_msg__srv__get_offline_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetOfflineResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wheeltec_mic_msg.srv._get_offline_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetOfflineResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wheeltec_mic_msg__srv__GetOfflineResult_Response * ros_message = (wheeltec_mic_msg__srv__GetOfflineResult_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->result.data,
      strlen(ros_message->result.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fail_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->fail_reason.data,
      strlen(ros_message->fail_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fail_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->text.data,
      strlen(ros_message->text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
