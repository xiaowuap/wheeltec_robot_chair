// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yesense_interface:msg/ImuData.idl
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
#include "yesense_interface/msg/detail/imu_data__struct.h"
#include "yesense_interface/msg/detail/imu_data__functions.h"

bool yesense_interface__msg__tid__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__tid__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__three_axis__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__three_axis__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__three_axis__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__three_axis__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__sensor_temp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__sensor_temp__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__sample_timestamp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__sample_timestamp__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool yesense_interface__msg__imu_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("yesense_interface.msg._imu_data.ImuData", full_classname_dest, 39) == 0);
  }
  yesense_interface__msg__ImuData * ros_message = _ros_message;
  {  // tid
    PyObject * field = PyObject_GetAttrString(_pymsg, "tid");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__tid__convert_from_py(field, &ros_message->tid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__three_axis__convert_from_py(field, &ros_message->acc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gyro
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__three_axis__convert_from_py(field, &ros_message->gyro)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__sensor_temp__convert_from_py(field, &ros_message->temp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sample_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_timestamp");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__sample_timestamp__convert_from_py(field, &ros_message->sample_timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yesense_interface__msg__imu_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImuData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yesense_interface.msg._imu_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImuData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yesense_interface__msg__ImuData * ros_message = (yesense_interface__msg__ImuData *)raw_ros_message;
  {  // tid
    PyObject * field = NULL;
    field = yesense_interface__msg__tid__convert_to_py(&ros_message->tid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc
    PyObject * field = NULL;
    field = yesense_interface__msg__three_axis__convert_to_py(&ros_message->acc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro
    PyObject * field = NULL;
    field = yesense_interface__msg__three_axis__convert_to_py(&ros_message->gyro);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp
    PyObject * field = NULL;
    field = yesense_interface__msg__sensor_temp__convert_to_py(&ros_message->temp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_timestamp
    PyObject * field = NULL;
    field = yesense_interface__msg__sample_timestamp__convert_to_py(&ros_message->sample_timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
