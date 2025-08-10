// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_ImuData_sample_timestamp
{
public:
  explicit Init_ImuData_sample_timestamp(::yesense_interface::msg::ImuData & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::ImuData sample_timestamp(::yesense_interface::msg::ImuData::_sample_timestamp_type arg)
  {
    msg_.sample_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::ImuData msg_;
};

class Init_ImuData_temp
{
public:
  explicit Init_ImuData_temp(::yesense_interface::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_sample_timestamp temp(::yesense_interface::msg::ImuData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_ImuData_sample_timestamp(msg_);
  }

private:
  ::yesense_interface::msg::ImuData msg_;
};

class Init_ImuData_gyro
{
public:
  explicit Init_ImuData_gyro(::yesense_interface::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_temp gyro(::yesense_interface::msg::ImuData::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_ImuData_temp(msg_);
  }

private:
  ::yesense_interface::msg::ImuData msg_;
};

class Init_ImuData_acc
{
public:
  explicit Init_ImuData_acc(::yesense_interface::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_gyro acc(::yesense_interface::msg::ImuData::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_ImuData_gyro(msg_);
  }

private:
  ::yesense_interface::msg::ImuData msg_;
};

class Init_ImuData_tid
{
public:
  Init_ImuData_tid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuData_acc tid(::yesense_interface::msg::ImuData::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return Init_ImuData_acc(msg_);
  }

private:
  ::yesense_interface::msg::ImuData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::ImuData>()
{
  return yesense_interface::msg::builder::Init_ImuData_tid();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
