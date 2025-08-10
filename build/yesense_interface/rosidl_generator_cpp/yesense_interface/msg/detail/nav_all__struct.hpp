// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/NavAll.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__struct.hpp"
// Member 'acc'
// Member 'gyro'
#include "yesense_interface/msg/detail/three_axis__struct.hpp"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.hpp"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__struct.hpp"
// Member 'temp'
#include "yesense_interface/msg/detail/sensor_temp__struct.hpp"
// Member 'pos'
#include "yesense_interface/msg/detail/gnss_pos__struct.hpp"
// Member 'status'
#include "yesense_interface/msg/detail/nav_status__struct.hpp"
// Member 'vel'
#include "yesense_interface/msg/detail/vel__struct.hpp"
// Member 'utc'
#include "yesense_interface/msg/detail/utc__struct.hpp"
// Member 'pressure'
#include "yesense_interface/msg/detail/pressure__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__NavAll __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__NavAll __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavAll_
{
  using Type = NavAll_<ContainerAllocator>;

  explicit NavAll_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_init),
    acc(_init),
    gyro(_init),
    euler(_init),
    quat(_init),
    temp(_init),
    pos(_init),
    status(_init),
    vel(_init),
    utc(_init),
    pressure(_init)
  {
    (void)_init;
  }

  explicit NavAll_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_alloc, _init),
    acc(_alloc, _init),
    gyro(_alloc, _init),
    euler(_alloc, _init),
    quat(_alloc, _init),
    temp(_alloc, _init),
    pos(_alloc, _init),
    status(_alloc, _init),
    vel(_alloc, _init),
    utc(_alloc, _init),
    pressure(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tid_type =
    yesense_interface::msg::Tid_<ContainerAllocator>;
  _tid_type tid;
  using _acc_type =
    yesense_interface::msg::ThreeAxis_<ContainerAllocator>;
  _acc_type acc;
  using _gyro_type =
    yesense_interface::msg::ThreeAxis_<ContainerAllocator>;
  _gyro_type gyro;
  using _euler_type =
    yesense_interface::msg::EulerAngle_<ContainerAllocator>;
  _euler_type euler;
  using _quat_type =
    yesense_interface::msg::Quat_<ContainerAllocator>;
  _quat_type quat;
  using _temp_type =
    yesense_interface::msg::SensorTemp_<ContainerAllocator>;
  _temp_type temp;
  using _pos_type =
    yesense_interface::msg::GnssPos_<ContainerAllocator>;
  _pos_type pos;
  using _status_type =
    yesense_interface::msg::NavStatus_<ContainerAllocator>;
  _status_type status;
  using _vel_type =
    yesense_interface::msg::Vel_<ContainerAllocator>;
  _vel_type vel;
  using _utc_type =
    yesense_interface::msg::Utc_<ContainerAllocator>;
  _utc_type utc;
  using _pressure_type =
    yesense_interface::msg::Pressure_<ContainerAllocator>;
  _pressure_type pressure;

  // setters for named parameter idiom
  Type & set__tid(
    const yesense_interface::msg::Tid_<ContainerAllocator> & _arg)
  {
    this->tid = _arg;
    return *this;
  }
  Type & set__acc(
    const yesense_interface::msg::ThreeAxis_<ContainerAllocator> & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__gyro(
    const yesense_interface::msg::ThreeAxis_<ContainerAllocator> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__euler(
    const yesense_interface::msg::EulerAngle_<ContainerAllocator> & _arg)
  {
    this->euler = _arg;
    return *this;
  }
  Type & set__quat(
    const yesense_interface::msg::Quat_<ContainerAllocator> & _arg)
  {
    this->quat = _arg;
    return *this;
  }
  Type & set__temp(
    const yesense_interface::msg::SensorTemp_<ContainerAllocator> & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__pos(
    const yesense_interface::msg::GnssPos_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__status(
    const yesense_interface::msg::NavStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__vel(
    const yesense_interface::msg::Vel_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__utc(
    const yesense_interface::msg::Utc_<ContainerAllocator> & _arg)
  {
    this->utc = _arg;
    return *this;
  }
  Type & set__pressure(
    const yesense_interface::msg::Pressure_<ContainerAllocator> & _arg)
  {
    this->pressure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::NavAll_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::NavAll_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::NavAll_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::NavAll_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::NavAll_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::NavAll_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::NavAll_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::NavAll_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::NavAll_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::NavAll_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__NavAll
    std::shared_ptr<yesense_interface::msg::NavAll_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__NavAll
    std::shared_ptr<yesense_interface::msg::NavAll_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavAll_ & other) const
  {
    if (this->tid != other.tid) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->euler != other.euler) {
      return false;
    }
    if (this->quat != other.quat) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->utc != other.utc) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavAll_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavAll_

// alias to use template instance with default allocator
using NavAll =
  yesense_interface::msg::NavAll_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_ALL__STRUCT_HPP_
