// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/AttitudeMinVru.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'imu_basic'
#include "yesense_interface/msg/detail/imu_data__struct.hpp"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__AttitudeMinVru __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__AttitudeMinVru __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttitudeMinVru_
{
  using Type = AttitudeMinVru_<ContainerAllocator>;

  explicit AttitudeMinVru_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_basic(_init),
    euler(_init)
  {
    (void)_init;
  }

  explicit AttitudeMinVru_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_basic(_alloc, _init),
    euler(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_basic_type =
    yesense_interface::msg::ImuData_<ContainerAllocator>;
  _imu_basic_type imu_basic;
  using _euler_type =
    yesense_interface::msg::EulerAngle_<ContainerAllocator>;
  _euler_type euler;

  // setters for named parameter idiom
  Type & set__imu_basic(
    const yesense_interface::msg::ImuData_<ContainerAllocator> & _arg)
  {
    this->imu_basic = _arg;
    return *this;
  }
  Type & set__euler(
    const yesense_interface::msg::EulerAngle_<ContainerAllocator> & _arg)
  {
    this->euler = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__AttitudeMinVru
    std::shared_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__AttitudeMinVru
    std::shared_ptr<yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttitudeMinVru_ & other) const
  {
    if (this->imu_basic != other.imu_basic) {
      return false;
    }
    if (this->euler != other.euler) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttitudeMinVru_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttitudeMinVru_

// alias to use template instance with default allocator
using AttitudeMinVru =
  yesense_interface::msg::AttitudeMinVru_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__STRUCT_HPP_
