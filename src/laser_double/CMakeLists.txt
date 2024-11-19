cmake_minimum_required(VERSION 2.8.3)
project(laser_double)
set(PCL_H "/usr/include/pcl-1.10")
set( CMAKE_CXX_FLAGS "-std=c++14 -O3" )

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs 
  sensor_msgs
  message_generation
  dynamic_reconfigure
  message_filters
)
find_package(Boost REQUIRED)

add_message_files(FILES
  difop.msg
)
generate_messages(DEPENDENCIES std_msgs)

catkin_package(CATKIN_DEPENDS roscpp 
rospy std_msgs message_runtime dynamic_reconfigure)

include_directories(${dynamic_reconfigure_PACKAGE_PATH}/cmake/cfgbuild.cmake)
include_directories(include)
include_directories(${catkin_INCLUDE_DIRS} ${PCL_H})

add_executable(laser_double
                src/laser_double.cpp)
add_dependencies(laser_double ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(laser_double ${Boost_LIBRARIES} ${catkin_LIBRARIES})


install(DIRECTORY launch
    DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)
