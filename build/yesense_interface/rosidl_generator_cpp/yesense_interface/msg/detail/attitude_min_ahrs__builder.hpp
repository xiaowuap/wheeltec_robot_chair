// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/AttitudeMinAhrs.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/attitude_min_ahrs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_AttitudeMinAhrs_mag_raw
{
public:
  explicit Init_AttitudeMinAhrs_mag_raw(::yesense_interface::msg::AttitudeMinAhrs & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::AttitudeMinAhrs mag_raw(::yesense_interface::msg::AttitudeMinAhrs::_mag_raw_type arg)
  {
    msg_.mag_raw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeMinAhrs msg_;
};

class Init_AttitudeMinAhrs_mag_norm
{
public:
  explicit Init_AttitudeMinAhrs_mag_norm(::yesense_interface::msg::AttitudeMinAhrs & msg)
  : msg_(msg)
  {}
  Init_AttitudeMinAhrs_mag_raw mag_norm(::yesense_interface::msg::AttitudeMinAhrs::_mag_norm_type arg)
  {
    msg_.mag_norm = std::move(arg);
    return Init_AttitudeMinAhrs_mag_raw(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeMinAhrs msg_;
};

class Init_AttitudeMinAhrs_att_min_vru
{
public:
  Init_AttitudeMinAhrs_att_min_vru()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttitudeMinAhrs_mag_norm att_min_vru(::yesense_interface::msg::AttitudeMinAhrs::_att_min_vru_type arg)
  {
    msg_.att_min_vru = std::move(arg);
    return Init_AttitudeMinAhrs_mag_norm(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeMinAhrs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::AttitudeMinAhrs>()
{
  return yesense_interface::msg::builder::Init_AttitudeMinAhrs_att_min_vru();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_MIN_AHRS__BUILDER_HPP_
