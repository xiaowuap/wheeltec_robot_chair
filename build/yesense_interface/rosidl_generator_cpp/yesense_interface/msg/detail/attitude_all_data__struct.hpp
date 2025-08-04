// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/AttitudeAllData.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'att_min_ahrs'
#include "yesense_interface/msg/detail/attitude_min_ahrs__struct.hpp"
// Member 'quat'
#include "yesense_interface/msg/detail/quat__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__AttitudeAllData __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__AttitudeAllData __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttitudeAllData_
{
  using Type = AttitudeAllData_<ContainerAllocator>;

  explicit AttitudeAllData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : att_min_ahrs(_init),
    quat(_init)
  {
    (void)_init;
  }

  explicit AttitudeAllData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : att_min_ahrs(_alloc, _init),
    quat(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _att_min_ahrs_type =
    yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>;
  _att_min_ahrs_type att_min_ahrs;
  using _quat_type =
    yesense_interface::msg::Quat_<ContainerAllocator>;
  _quat_type quat;

  // setters for named parameter idiom
  Type & set__att_min_ahrs(
    const yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> & _arg)
  {
    this->att_min_ahrs = _arg;
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
    yesense_interface::msg::AttitudeAllData_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::AttitudeAllData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::AttitudeAllData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::AttitudeAllData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__AttitudeAllData
    std::shared_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__AttitudeAllData
    std::shared_ptr<yesense_interface::msg::AttitudeAllData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttitudeAllData_ & other) const
  {
    if (this->att_min_ahrs != other.att_min_ahrs) {
      return false;
    }
    if (this->quat != other.quat) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttitudeAllData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttitudeAllData_

// alias to use template instance with default allocator
using AttitudeAllData =
  yesense_interface::msg::AttitudeAllData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__STRUCT_HPP_
