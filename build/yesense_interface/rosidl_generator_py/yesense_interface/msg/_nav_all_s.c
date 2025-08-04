// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yesense_interface:msg/NavAll.idl
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
#include "yesense_interface/msg/detail/nav_all__struct.h"
#include "yesense_interface/msg/detail/nav_all__functions.h"

bool yesense_interface__msg__tid__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__tid__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__three_axis__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__three_axis__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__three_axis__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__three_axis__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__euler_angle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__euler_angle__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__quat__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__quat__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__sensor_temp__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__sensor_temp__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__gnss_pos__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__gnss_pos__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__nav_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__nav_status__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__vel__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__vel__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__utc__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__utc__convert_to_py(void * raw_ros_message);
bool yesense_interface__msg__pressure__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yesense_interface__msg__pressure__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool yesense_interface__msg__nav_all__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("yesense_interface.msg._nav_all.NavAll", full_classname_dest, 37) == 0);
  }
  yesense_interface__msg__NavAll * ros_message = _ros_message;
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
  {  // quat
    PyObject * field = PyObject_GetAttrString(_pymsg, "quat");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__quat__convert_from_py(field, &ros_message->quat)) {
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
  {  // pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__gnss_pos__convert_from_py(field, &ros_message->pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__nav_status__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__vel__convert_from_py(field, &ros_message->vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // utc
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__utc__convert_from_py(field, &ros_message->utc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure");
    if (!field) {
      return false;
    }
    if (!yesense_interface__msg__pressure__convert_from_py(field, &ros_message->pressure)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yesense_interface__msg__nav_all__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavAll */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yesense_interface.msg._nav_all");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavAll");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yesense_interface__msg__NavAll * ros_message = (yesense_interface__msg__NavAll *)raw_ros_message;
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
  {  // quat
    PyObject * field = NULL;
    field = yesense_interface__msg__quat__convert_to_py(&ros_message->quat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "quat", field);
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
  {  // pos
    PyObject * field = NULL;
    field = yesense_interface__msg__gnss_pos__convert_to_py(&ros_message->pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = yesense_interface__msg__nav_status__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel
    PyObject * field = NULL;
    field = yesense_interface__msg__vel__convert_to_py(&ros_message->vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc
    PyObject * field = NULL;
    field = yesense_interface__msg__utc__convert_to_py(&ros_message->utc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pressure
    PyObject * field = NULL;
    field = yesense_interface__msg__pressure__convert_to_py(&ros_message->pressure);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
