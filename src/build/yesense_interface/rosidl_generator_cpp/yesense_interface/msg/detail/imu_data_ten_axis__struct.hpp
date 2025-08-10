// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__STRUCT_HPP_

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
// Member 'mag_norm'
// Member 'mag_raw'
#include "yesense_interface/msg/detail/three_axis__struct.hpp"
// Member 'pressure'
#include "yesense_interface/msg/detail/pressure__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__ImuDataTenAxis __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__ImuDataTenAxis __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuDataTenAxis_
{
  using Type = ImuDataTenAxis_<ContainerAllocator>;

  explicit ImuDataTenAxis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_basic(_init),
    mag_norm(_init),
    mag_raw(_init),
    pressure(_init)
  {
    (void)_init;
  }

  explicit ImuDataTenAxis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_basic(_alloc, _init),
    mag_norm(_alloc, _init),
    mag_raw(_alloc, _init),
    pressure(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_basic_type =
    yesense_interface::msg::ImuData_<ContainerAllocator>;
  _imu_basic_type imu_basic;
  using _mag_norm_type =
    yesense_interface::msg::ThreeAxis_<ContainerAllocator>;
  _mag_norm_type mag_norm;
  using _mag_raw_type =
    yesense_interface::msg::ThreeAxis_<ContainerAllocator>;
  _mag_raw_type mag_raw;
  using _pressure_type =
    yesense_interface::msg::Pressure_<ContainerAllocator>;
  _pressure_type pressure;

  // setters for named parameter idiom
  Type & set__imu_basic(
    const yesense_interface::msg::ImuData_<ContainerAllocator> & _arg)
  {
    this->imu_basic = _arg;
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
  Type & set__pressure(
    const yesense_interface::msg::Pressure_<ContainerAllocator> & _arg)
  {
    this->pressure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__ImuDataTenAxis
    std::shared_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__ImuDataTenAxis
    std::shared_ptr<yesense_interface::msg::ImuDataTenAxis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuDataTenAxis_ & other) const
  {
    if (this->imu_basic != other.imu_basic) {
      return false;
    }
    if (this->mag_norm != other.mag_norm) {
      return false;
    }
    if (this->mag_raw != other.mag_raw) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuDataTenAxis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuDataTenAxis_

// alias to use template instance with default allocator
using ImuDataTenAxis =
  yesense_interface::msg::ImuDataTenAxis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__STRUCT_HPP_
