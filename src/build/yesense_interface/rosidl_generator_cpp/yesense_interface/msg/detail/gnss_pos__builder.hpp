// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/GnssPos.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__GNSS_POS__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__GNSS_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/gnss_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_GnssPos_altitude
{
public:
  explicit Init_GnssPos_altitude(::yesense_interface::msg::GnssPos & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::GnssPos altitude(::yesense_interface::msg::GnssPos::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::GnssPos msg_;
};

class Init_GnssPos_latitude
{
public:
  explicit Init_GnssPos_latitude(::yesense_interface::msg::GnssPos & msg)
  : msg_(msg)
  {}
  Init_GnssPos_altitude latitude(::yesense_interface::msg::GnssPos::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GnssPos_altitude(msg_);
  }

private:
  ::yesense_interface::msg::GnssPos msg_;
};

class Init_GnssPos_longitude
{
public:
  Init_GnssPos_longitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssPos_latitude longitude(::yesense_interface::msg::GnssPos::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GnssPos_latitude(msg_);
  }

private:
  ::yesense_interface::msg::GnssPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::GnssPos>()
{
  return yesense_interface::msg::builder::Init_GnssPos_longitude();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__GNSS_POS__BUILDER_HPP_
