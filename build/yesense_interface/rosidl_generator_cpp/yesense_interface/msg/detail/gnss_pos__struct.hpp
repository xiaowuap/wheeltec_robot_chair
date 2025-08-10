// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/GnssPos.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__GNSS_POS__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__GNSS_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__GnssPos __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__GnssPos __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssPos_
{
  using Type = GnssPos_<ContainerAllocator>;

  explicit GnssPos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0.0;
      this->latitude = 0.0;
      this->altitude = 0.0f;
    }
  }

  explicit GnssPos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0.0;
      this->latitude = 0.0;
      this->altitude = 0.0f;
    }
  }

  // field types and members
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _altitude_type =
    float;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::GnssPos_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::GnssPos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::GnssPos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::GnssPos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__GnssPos
    std::shared_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__GnssPos
    std::shared_ptr<yesense_interface::msg::GnssPos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssPos_ & other) const
  {
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssPos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssPos_

// alias to use template instance with default allocator
using GnssPos =
  yesense_interface::msg::GnssPos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__GNSS_POS__STRUCT_HPP_
