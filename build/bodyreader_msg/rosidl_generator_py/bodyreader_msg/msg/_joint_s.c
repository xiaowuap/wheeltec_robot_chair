// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyreader_msg:msg/Joint.idl
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
#include "bodyreader_msg/msg/detail/joint__struct.h"
#include "bodyreader_msg/msg/detail/joint__functions.h"

bool bodyreader_msg__msg__vector2f__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * bodyreader_msg__msg__vector2f__convert_to_py(void * raw_ros_message);
bool bodyreader_msg__msg__vector3f__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * bodyreader_msg__msg__vector3f__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool bodyreader_msg__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("bodyreader_msg.msg._joint.Joint", full_classname_dest, 31) == 0);
  }
  bodyreader_msg__msg__Joint * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // depthposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "depthposition");
    if (!field) {
      return false;
    }
    if (!bodyreader_msg__msg__vector2f__convert_from_py(field, &ros_message->depthposition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // worldposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "worldposition");
    if (!field) {
      return false;
    }
    if (!bodyreader_msg__msg__vector3f__convert_from_py(field, &ros_message->worldposition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyreader_msg__msg__joint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Joint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyreader_msg.msg._joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Joint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyreader_msg__msg__Joint * ros_message = (bodyreader_msg__msg__Joint *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depthposition
    PyObject * field = NULL;
    field = bodyreader_msg__msg__vector2f__convert_to_py(&ros_message->depthposition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "depthposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // worldposition
    PyObject * field = NULL;
    field = bodyreader_msg__msg__vector3f__convert_to_py(&ros_message->worldposition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "worldposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
