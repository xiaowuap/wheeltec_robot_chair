// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/AttitudeAllData.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/attitude_all_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_AttitudeAllData_quat
{
public:
  explicit Init_AttitudeAllData_quat(::yesense_interface::msg::AttitudeAllData & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::AttitudeAllData quat(::yesense_interface::msg::AttitudeAllData::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeAllData msg_;
};

class Init_AttitudeAllData_att_min_ahrs
{
public:
  Init_AttitudeAllData_att_min_ahrs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttitudeAllData_quat att_min_ahrs(::yesense_interface::msg::AttitudeAllData::_att_min_ahrs_type arg)
  {
    msg_.att_min_ahrs = std::move(arg);
    return Init_AttitudeAllData_quat(msg_);
  }

private:
  ::yesense_interface::msg::AttitudeAllData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::AttitudeAllData>()
{
  return yesense_interface::msg::builder::Init_AttitudeAllData_att_min_ahrs();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__ATTITUDE_ALL_DATA__BUILDER_HPP_
