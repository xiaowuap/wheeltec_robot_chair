// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/SensorTemp.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__SensorTemp __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__SensorTemp __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorTemp_
{
  using Type = SensorTemp_<ContainerAllocator>;

  explicit SensorTemp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
    }
  }

  explicit SensorTemp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
    }
  }

  // field types and members
  using _temp_type =
    float;
  _temp_type temp;

  // setters for named parameter idiom
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::SensorTemp_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::SensorTemp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::SensorTemp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::SensorTemp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__SensorTemp
    std::shared_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__SensorTemp
    std::shared_ptr<yesense_interface::msg::SensorTemp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorTemp_ & other) const
  {
    if (this->temp != other.temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorTemp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorTemp_

// alias to use template instance with default allocator
using SensorTemp =
  yesense_interface::msg::SensorTemp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__SENSOR_TEMP__STRUCT_HPP_
