// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/ImuDataTenAxis.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/imu_data_ten_axis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_ImuDataTenAxis_pressure
{
public:
  explicit Init_ImuDataTenAxis_pressure(::yesense_interface::msg::ImuDataTenAxis & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::ImuDataTenAxis pressure(::yesense_interface::msg::ImuDataTenAxis::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::ImuDataTenAxis msg_;
};

class Init_ImuDataTenAxis_mag_raw
{
public:
  explicit Init_ImuDataTenAxis_mag_raw(::yesense_interface::msg::ImuDataTenAxis & msg)
  : msg_(msg)
  {}
  Init_ImuDataTenAxis_pressure mag_raw(::yesense_interface::msg::ImuDataTenAxis::_mag_raw_type arg)
  {
    msg_.mag_raw = std::move(arg);
    return Init_ImuDataTenAxis_pressure(msg_);
  }

private:
  ::yesense_interface::msg::ImuDataTenAxis msg_;
};

class Init_ImuDataTenAxis_mag_norm
{
public:
  explicit Init_ImuDataTenAxis_mag_norm(::yesense_interface::msg::ImuDataTenAxis & msg)
  : msg_(msg)
  {}
  Init_ImuDataTenAxis_mag_raw mag_norm(::yesense_interface::msg::ImuDataTenAxis::_mag_norm_type arg)
  {
    msg_.mag_norm = std::move(arg);
    return Init_ImuDataTenAxis_mag_raw(msg_);
  }

private:
  ::yesense_interface::msg::ImuDataTenAxis msg_;
};

class Init_ImuDataTenAxis_imu_basic
{
public:
  Init_ImuDataTenAxis_imu_basic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuDataTenAxis_mag_norm imu_basic(::yesense_interface::msg::ImuDataTenAxis::_imu_basic_type arg)
  {
    msg_.imu_basic = std::move(arg);
    return Init_ImuDataTenAxis_mag_norm(msg_);
  }

private:
  ::yesense_interface::msg::ImuDataTenAxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::ImuDataTenAxis>()
{
  return yesense_interface::msg::builder::Init_ImuDataTenAxis_imu_basic();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA_TEN_AXIS__BUILDER_HPP_
