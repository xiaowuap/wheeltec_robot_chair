// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyreader_msg:msg/Bodyposture.idl
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
#include "bodyreader_msg/msg/detail/bodyposture__struct.h"
#include "bodyreader_msg/msg/detail/bodyposture__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyreader_msg__msg__bodyposture__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("bodyreader_msg.msg._bodyposture.Bodyposture", full_classname_dest, 43) == 0);
  }
  bodyreader_msg__msg__Bodyposture * ros_message = _ros_message;
  {  // bodyid
    PyObject * field = PyObject_GetAttrString(_pymsg, "bodyid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bodyid = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // centerofmass_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "centerofmass_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->centerofmass_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // centerofmass_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "centerofmass_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->centerofmass_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // centerofmass_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "centerofmass_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->centerofmass_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_arm_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_arm_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_arm_out = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_arm_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_arm_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_arm_out = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_hand_raised
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hand_raised");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_hand_raised = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_hand_raised
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hand_raised");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_hand_raised = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // akimibo
    PyObject * field = PyObject_GetAttrString(_pymsg, "akimibo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->akimibo = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_foot_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_foot_up");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_foot_up = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_foot_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_foot_up");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_foot_up = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fall
    PyObject * field = PyObject_GetAttrString(_pymsg, "fall");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fall = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tips
    PyObject * field = PyObject_GetAttrString(_pymsg, "tips");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tips = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lock_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lock_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lock_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyreader_msg__msg__bodyposture__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Bodyposture */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyreader_msg.msg._bodyposture");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Bodyposture");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyreader_msg__msg__Bodyposture * ros_message = (bodyreader_msg__msg__Bodyposture *)raw_ros_message;
  {  // bodyid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bodyid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bodyid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // centerofmass_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->centerofmass_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "centerofmass_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // centerofmass_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->centerofmass_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "centerofmass_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // centerofmass_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->centerofmass_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "centerofmass_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_arm_out
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_arm_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_arm_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_arm_out
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_arm_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_arm_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_hand_raised
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_hand_raised);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hand_raised", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_hand_raised
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_hand_raised);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_hand_raised", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // akimibo
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->akimibo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "akimibo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_foot_up
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_foot_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_foot_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_foot_up
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_foot_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_foot_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fall
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fall);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tips
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tips);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tips", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lock_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lock_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lock_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
