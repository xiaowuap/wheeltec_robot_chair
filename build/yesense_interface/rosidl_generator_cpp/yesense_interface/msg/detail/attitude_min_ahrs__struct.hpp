// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'att_min_vru'
#include "yesense_interface/msg/detail/attitude_min_vru__struct.hpp"
// Member 'mag_norm'
// Member 'mag_raw'
#include "yesense_interface/msg/detail/three_axis__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__AttitudeMinAhrs __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__AttitudeMinAhrs __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttitudeMinAhrs_
{
  using Type = AttitudeMinAhrs_<ContainerAllocator>;

  explicit AttitudeMinAhrs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : att_min_vru(_init),
    mag_norm(_init),
    mag_raw(_init)
  {
    (void)_init;
  }

  explicit AttitudeMinAhrs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : att_min_vru(_alloc, _init),
    mag_norm(_alloc, _init),
    mag_raw(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _att_min_vru_type =
    yesense_interface::msg::AttitudeMinVru_<ContainerAllocator>;
  _att_min_vru_type att_min_vru;
  using _mag_norm_type =
    yesense_interface::msg::ThreeAxis_<ContainerAllocator>;
  _mag_norm_type mag_norm;
  using _mag_raw_type =
    yesense_interface::msg::ThreeAxis_<ContainerAllocator>;
  _mag_raw_type mag_raw;

  // setters for named parameter idiom
  Type & set__att_min_vru(
    const yesense_interface::msg::AttitudeMinVru_<ContainerAllocator> & _arg)
  {
    this->att_min_vru = _arg;
    return *this;
  }
  Type & set__mag_norm(
    const yesense_interface::msg::ThreeAxis_<ContainerAllocator> & _arg)
  {
    this->mag_norm = _arg;
    return *this;
  }
  Type & set__mag_raw(
    const yesense_interface::msg::ThreeAxis_<ContainerAllocator> & _arg)
  {
    this->mag_raw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__AttitudeMinAhrs
    std::shared_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__AttitudeMinAhrs
    std::shared_ptr<yesense_interface::msg::AttitudeMinAhrs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttitudeMinAhrs_ & other) const
  {
    if (this->att_min_vru != other.att_min_vru) {
      return false;
    }
    if (this->mag_norm != other.mag_norm) {
      return false;
    }
    if (this->mag_raw != other.mag_raw) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttitudeMinAhrs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttitudeMinAhrs_

// alias to use template instance with default allocator
using AttitudeMinAhrs =
  yesense_interface::msg::AttitudeMinAhrs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__STRUCT_HPP_
