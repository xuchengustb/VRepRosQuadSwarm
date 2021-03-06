/* Auto-generated by genmsg_cpp for file /home/francescow/Downloads/V-REP_PRO_EDU_V3_1_0/programming/ros_stacks/vrep/vrep_common/srv/simRosStopSimulation.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSSTOPSIMULATION_H
#define VREP_COMMON_SERVICE_SIMROSSTOPSIMULATION_H
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

#include "ros/service_traits.h"




namespace vrep_common
{
template <class ContainerAllocator>
struct simRosStopSimulationRequest_ {
  typedef simRosStopSimulationRequest_<ContainerAllocator> Type;

  simRosStopSimulationRequest_()
  {
  }

  simRosStopSimulationRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosStopSimulationRequest
typedef  ::vrep_common::simRosStopSimulationRequest_<std::allocator<void> > simRosStopSimulationRequest;

typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationRequest> simRosStopSimulationRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationRequest const> simRosStopSimulationRequestConstPtr;



template <class ContainerAllocator>
struct simRosStopSimulationResponse_ {
  typedef simRosStopSimulationResponse_<ContainerAllocator> Type;

  simRosStopSimulationResponse_()
  : result(0)
  {
  }

  simRosStopSimulationResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;


  typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosStopSimulationResponse
typedef  ::vrep_common::simRosStopSimulationResponse_<std::allocator<void> > simRosStopSimulationResponse;

typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationResponse> simRosStopSimulationResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosStopSimulationResponse const> simRosStopSimulationResponseConstPtr;


struct simRosStopSimulation
{

typedef simRosStopSimulationRequest Request;
typedef simRosStopSimulationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosStopSimulation
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosStopSimulationRequest";
  }

  static const char* value(const  ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const  ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosStopSimulationResponse";
  }

  static const char* value(const  ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosStopSimulationRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosStopSimulationRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosStopSimulationResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosStopSimulationResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosStopSimulation> {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const vrep_common::simRosStopSimulation&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosStopSimulation> {
  static const char* value() 
  {
    return "vrep_common/simRosStopSimulation";
  }

  static const char* value(const vrep_common::simRosStopSimulation&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const vrep_common::simRosStopSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosStopSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosStopSimulation";
  }

  static const char* value(const vrep_common::simRosStopSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const vrep_common::simRosStopSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosStopSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosStopSimulation";
  }

  static const char* value(const vrep_common::simRosStopSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSSTOPSIMULATION_H

