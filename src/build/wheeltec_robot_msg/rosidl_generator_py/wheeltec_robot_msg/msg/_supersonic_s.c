// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wheeltec_robot_msg:msg/Supersonic.idl
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
#include "wheeltec_robot_msg/msg/detail/supersonic__struct.h"
#include "wheeltec_robot_msg/msg/detail/supersonic__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool wheeltec_robot_msg__msg__supersonic__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("wheeltec_robot_msg.msg._supersonic.Supersonic", full_classname_dest, 45) == 0);
  }
  wheeltec_robot_msg__msg__Supersonic * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // distance_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_c = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_d = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_f
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_f");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_f = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_g
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_g");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_g = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_h");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_h = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wheeltec_robot_msg__msg__supersonic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Supersonic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wheeltec_robot_msg.msg._supersonic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Supersonic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wheeltec_robot_msg__msg__Supersonic * ros_message = (wheeltec_robot_msg__msg__Supersonic *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_f
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_f);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_f", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_g
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_g);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_h
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
