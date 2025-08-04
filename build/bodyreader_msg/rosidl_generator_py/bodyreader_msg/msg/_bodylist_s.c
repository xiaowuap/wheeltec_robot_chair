// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyreader_msg:msg/Bodylist.idl
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
#include "bodyreader_msg/msg/detail/bodylist__struct.h"
#include "bodyreader_msg/msg/detail/bodylist__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "bodyreader_msg/msg/detail/body__functions.h"
// end nested array functions include
bool bodyreader_msg__msg__body__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * bodyreader_msg__msg__body__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool bodyreader_msg__msg__bodylist__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("bodyreader_msg.msg._bodylist.Bodylist", full_classname_dest, 37) == 0);
  }
  bodyreader_msg__msg__Bodylist * ros_message = _ros_message;
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bodies
    PyObject * field = PyObject_GetAttrString(_pymsg, "bodies");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bodies'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 6;
    bodyreader_msg__msg__Body * dest = ros_message->bodies;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!bodyreader_msg__msg__body__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyreader_msg__msg__bodylist__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Bodylist */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyreader_msg.msg._bodylist");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Bodylist");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyreader_msg__msg__Bodylist * ros_message = (bodyreader_msg__msg__Bodylist *)raw_ros_message;
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bodies
    PyObject * field = NULL;
    size_t size = 6;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    bodyreader_msg__msg__Body * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bodies[i]);
      PyObject * pyitem = bodyreader_msg__msg__body__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bodies", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
