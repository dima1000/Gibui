/* Auto-generated by genmsg_cpp for file /home/userws3/git/robil/C21_VisionAndLidar/msg/C21C0_3DF.msg */
#ifndef C21_VISIONANDLIDAR_MESSAGE_C21C0_3DF_H
#define C21_VISIONANDLIDAR_MESSAGE_C21C0_3DF_H
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

#include "sensor_msgs/PointCloud2.h"

namespace C21_VisionAndLidar
{
template <class ContainerAllocator>
struct C21C0_3DF_ {
  typedef C21C0_3DF_<ContainerAllocator> Type;

  C21C0_3DF_()
  : cloud()
  {
  }

  C21C0_3DF_(const ContainerAllocator& _alloc)
  : cloud(_alloc)
  {
  }

  typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_type;
   ::sensor_msgs::PointCloud2_<ContainerAllocator>  cloud;


  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct C21C0_3DF
typedef  ::C21_VisionAndLidar::C21C0_3DF_<std::allocator<void> > C21C0_3DF;

typedef boost::shared_ptr< ::C21_VisionAndLidar::C21C0_3DF> C21C0_3DFPtr;
typedef boost::shared_ptr< ::C21_VisionAndLidar::C21C0_3DF const> C21C0_3DFConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace C21_VisionAndLidar

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> > {
  static const char* value() 
  {
    return "96cec5374164b3b3d1d7ef5d7628a7ed";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x96cec5374164b3b3ULL;
  static const uint64_t static_value2 = 0xd1d7ef5d7628a7edULL;
};

template<class ContainerAllocator>
struct DataType< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> > {
  static const char* value() 
  {
    return "C21_VisionAndLidar/C21C0_3DF";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/PointCloud2 cloud\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
";
  }

  static const char* value(const  ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.cloud);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct C21C0_3DF_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::C21_VisionAndLidar::C21C0_3DF_<ContainerAllocator> & v) 
  {
    s << indent << "cloud: ";
s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
  }
};


} // namespace message_operations
} // namespace ros

#endif // C21_VISIONANDLIDAR_MESSAGE_C21C0_3DF_H

