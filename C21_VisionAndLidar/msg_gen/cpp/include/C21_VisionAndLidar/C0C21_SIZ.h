/* Auto-generated by genmsg_cpp for file /home/userws3/git/robil/C21_VisionAndLidar/msg/C0C21_SIZ.msg */
#ifndef C21_VISIONANDLIDAR_MESSAGE_C0C21_SIZ_H
#define C21_VISIONANDLIDAR_MESSAGE_C0C21_SIZ_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace C21_VisionAndLidar
{
template <class ContainerAllocator>
struct C0C21_SIZ_ {
  typedef C0C21_SIZ_<ContainerAllocator> Type;

  C0C21_SIZ_()
  : image_width(0)
  , image_height(0)
  {
  }

  C0C21_SIZ_(const ContainerAllocator& _alloc)
  : image_width(0)
  , image_height(0)
  {
  }

  typedef int32_t _image_width_type;
  int32_t image_width;

  typedef int32_t _image_height_type;
  int32_t image_height;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C0C21_SIZ
typedef  ::C21_VisionAndLidar::C0C21_SIZ_<std::allocator<void> > C0C21_SIZ;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_SIZ> C0C21_SIZPtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C0C21_SIZ const> C0C21_SIZConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace C21_VisionAndLidar

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> > {
  static const char* value() 
  {
    return "55b10cd20a3d246968c1e93cc4a92af6";
  }

  static const char* value(const  ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x55b10cd20a3d2469ULL;
  static const uint64_t static_value2 = 0x68c1e93cc4a92af6ULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C0C21_SIZ";
  }

  static const char* value(const  ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 image_width\n\
int32 image_height\n\
\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.image_width);
    stream.next(m.image_height);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C0C21_SIZ_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::C21_VisionAndLidar::C0C21_SIZ_<ContainerAllocator> & v) 
  {
    s << indent << "image_width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.image_width);
    s << indent << "image_height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.image_height);
  }
};


} // namespace message_operations
} // namespace ros

#endif // C21_VISIONANDLIDAR_MESSAGE_C0C21_SIZ_H

