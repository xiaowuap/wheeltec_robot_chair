// Generated by gencpp from file bodyreader/maskdata.msg
// DO NOT EDIT!


#ifndef BODYREADER_MESSAGE_MASKDATA_H
#define BODYREADER_MESSAGE_MASKDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bodyreader
{
template <class ContainerAllocator>
struct maskdata_
{
  typedef maskdata_<ContainerAllocator> Type;

  maskdata_()
    : data()  {
      data.assign(0);
  }
  maskdata_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef boost::array<int32_t, 76800>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::bodyreader::maskdata_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bodyreader::maskdata_<ContainerAllocator> const> ConstPtr;

}; // struct maskdata_

typedef ::bodyreader::maskdata_<std::allocator<void> > maskdata;

typedef boost::shared_ptr< ::bodyreader::maskdata > maskdataPtr;
typedef boost::shared_ptr< ::bodyreader::maskdata const> maskdataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bodyreader::maskdata_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bodyreader::maskdata_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bodyreader::maskdata_<ContainerAllocator1> & lhs, const ::bodyreader::maskdata_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bodyreader::maskdata_<ContainerAllocator1> & lhs, const ::bodyreader::maskdata_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bodyreader

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bodyreader::maskdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bodyreader::maskdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bodyreader::maskdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bodyreader::maskdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bodyreader::maskdata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bodyreader::maskdata_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bodyreader::maskdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83e374be3f0eff604357f0d088c7c236";
  }

  static const char* value(const ::bodyreader::maskdata_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83e374be3f0eff60ULL;
  static const uint64_t static_value2 = 0x4357f0d088c7c236ULL;
};

template<class ContainerAllocator>
struct DataType< ::bodyreader::maskdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bodyreader/maskdata";
  }

  static const char* value(const ::bodyreader::maskdata_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bodyreader::maskdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[76800] data\n"
;
  }

  static const char* value(const ::bodyreader::maskdata_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bodyreader::maskdata_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct maskdata_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bodyreader::maskdata_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bodyreader::maskdata_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BODYREADER_MESSAGE_MASKDATA_H