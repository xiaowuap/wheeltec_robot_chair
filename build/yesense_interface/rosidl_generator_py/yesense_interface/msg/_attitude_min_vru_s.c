// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yesense_interface:msg/AttitudeMinVru.idl
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
#include "yesense_interface/msg/detail/attitude_min_vru__struct.h"
#include "yesense_interface/msg/detail/attitude_min_vru__functions.h"

bool yesense_interface__msg__imu_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__imu_data__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__euler_angle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__euler_angle__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool yesense_interface__msg__attitude_min_vru__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("yesense_interface.msg._attitude_min_vru.AttitudeMinVru", full_classname_dest, 54) == 0);
  }
  yesense_interface__msg__AttitudeMinVru * ros_message = _ros_message;
  {  // imu_basic
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_basic");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__imu_data__convert_from_py(field, &ros_message->imu_basic)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // euler
    PyObject * field = PyObject_GetAttrString(_pymsg, "euler");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__euler_angle__convert_from_py(field, &ros_message->euler)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yesense_interface__msg__attitude_min_vru__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AttitudeMinVru */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yesense_interface.msg._attitude_min_vru");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AttitudeMinVru");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yesense_interface__msg__AttitudeMinVru * ros_message = (yesense_interface__msg__AttitudeMinVru *)raw_ros_message;
  {  // imu_basic
    PyObject * field = NULL;
    field = yesense_interface__msg__imu_data__convert_to_py(&ros_message->imu_basic);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_basic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // euler
    PyObject * field = NULL;
    field = yesense_interface__msg__euler_angle__convert_to_py(&ros_message->euler);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "euler", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
