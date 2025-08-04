// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/NavStatus.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__NavStatus __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__NavStatus __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavStatus_
{
  using Type = NavStatus_<ContainerAllocator>;

  explicit NavStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fusion_status = 0;
      this->gnss_status = 0;
    }
  }

  explicit NavStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fusion_status = 0;
      this->gnss_status = 0;
    }
  }

  // field types and members
  using _fusion_status_type =
    uint8_t;
  _fusion_status_type fusion_status;
  using _gnss_status_type =
    uint8_t;
  _gnss_status_type gnss_status;

  // setters for named parameter idiom
  Type & set__fusion_status(
    const uint8_t & _arg)
  {
    this->fusion_status = _arg;
    return *this;
  }
  Type & set__gnss_status(
    const uint8_t & _arg)
  {
    this->gnss_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::NavStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::NavStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::NavStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::NavStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__NavStatus
    std::shared_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__NavStatus
    std::shared_ptr<yesense_interface::msg::NavStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavStatus_ & other) const
  {
    if (this->fusion_status != other.fusion_status) {
      return false;
    }
    if (this->gnss_status != other.gnss_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavStatus_

// alias to use template instance with default allocator
using NavStatus =
  yesense_interface::msg::NavStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_STATUS__STRUCT_HPP_
