// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/AttitudeMinVru.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/attitude_min_vru__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_AttitudeMinVru_euler
{
public:
  explicit Init_AttitudeMinVru_euler(::yesense_interface::msg::AttitudeMinVru & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::AttitudeMinVru euler(::yesense_interface::msg::AttitudeMinVru::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeMinVru msg_;
};

class Init_AttitudeMinVru_imu_basic
{
public:
  Init_AttitudeMinVru_imu_basic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttitudeMinVru_euler imu_basic(::yesense_interface::msg::AttitudeMinVru::_imu_basic_type arg)
  {
    msg_.imu_basic = std::move(arg);
    return Init_AttitudeMinVru_euler(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeMinVru msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::AttitudeMinVru>()
{
  return yesense_interface::msg::builder::Init_AttitudeMinVru_imu_basic();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_VRU__BUILDER_HPP_
