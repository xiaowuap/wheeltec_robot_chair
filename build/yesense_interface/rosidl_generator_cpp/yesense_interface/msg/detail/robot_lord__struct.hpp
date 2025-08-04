// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/RobotLord.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__STRUCT_HPP_

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
// Member 'quat'
#include "yesense_interface/msg/detail/quat__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__RobotLord __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__RobotLord __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotLord_
{
  using Type = RobotLord_<ContainerAllocator>;

  explicit RobotLord_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_init),
    acc(_init),
    gyro(_init),
    quat(_init)
  {
    (void)_init;
  }

  explicit RobotLord_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_alloc, _init),
    acc(_alloc, _init),
    gyro(_alloc, _init),
    quat(_alloc, _init)
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
  using _quat_type =
    yesense_interface::msg::Quat_<ContainerAllocator>;
  _quat_type quat;

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
  Type & set__quat(
    const yesense_interface::msg::Quat_<ContainerAllocator> & _arg)
  {
    this->quat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::RobotLord_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::RobotLord_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::RobotLord_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::RobotLord_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__RobotLord
    std::shared_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__RobotLord
    std::shared_ptr<yesense_interface::msg::RobotLord_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotLord_ & other) const
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
    if (this->quat != other.quat) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotLord_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotLord_

// alias to use template instance with default allocator
using RobotLord =
  yesense_interface::msg::RobotLord_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ROBOT_LORD__STRUCT_HPP_
