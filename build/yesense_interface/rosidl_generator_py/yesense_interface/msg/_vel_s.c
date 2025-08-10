// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yesense_interface:msg/Vel.idl
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
#include "yesense_interface/msg/detail/vel__struct.h"
#include "yesense_interface/msg/detail/vel__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool yesense_interface__msg__vel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("yesense_interface.msg._vel.Vel", full_classname_dest, 30) == 0);
  }
  yesense_interface__msg__Vel * ros_message = _ros_message;
  {  // vel_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_n = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_u
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_u");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_u = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yesense_interface__msg__vel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Vel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yesense_interface.msg._vel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Vel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yesense_interface__msg__Vel * ros_message = (yesense_interface__msg__Vel *)raw_ros_message;
  {  // vel_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_n
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_u
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_u);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_u", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
