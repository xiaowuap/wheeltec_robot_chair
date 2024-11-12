cmake_minimum_required(VERSION 2.8.3)
project(yesense_imu)

cmake_policy(SET CMP0079 NEW)

execute_process(COMMAND chmod +x "${CMAKE_CURRENT_SOURCE_DIR}/cfg/Yesense.cfg"
                COMMAND dos2unix "${CMAKE_CURRENT_SOURCE_DIR}/cfg/Yesense.cfg")

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  dynamic_reconfigure
  geometry_msgs
  sensor_msgs
  serial
  std_msgs
  std_srvs
  tf
  nav_msgs
  message_generation
)

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  YesenseImuEulerAngle.msg
  YesenseImuLocation.msg
  YesenseImuQuaternion.msg
  YesenseImuStatus.msg
  YesenseImuUtcTime.msg
  YesenseImuVelocity.msg  
  YesenseImuMasterGnssData.msg
  YesenseImuSlaveGnssData.msg
  YesenseImuGnssData.msg
  YesenseImuGpsData.msg
  YesenseImuNavData.msg 
  YesenseImuInertialData.msg   
  YesenseImuSensorData.msg
  YesenseImuAllData.msg
  YesenseImuCmdResp.msg
)

# dynamic reconfigure
generate_dynamic_reconfigure_options(
    cfg/Yesense.cfg
)

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
)

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES mpu6050_serial_to_imu
  CATKIN_DEPENDS message_runtime roscpp geometry_msgs sensor_msgs serial std_msgs std_srvs tf using_markers visualization_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ./src
)

## Declare a C++ executable
add_executable(yesense_imu_node 
  src/yesense_driver.cpp
  src/yesense_node.cpp
  src/analysis_data.cpp
)

add_dependencies(yesense_imu_node ${${PROJECT_NAME}_EXPORTTED_TARGETS}
                                  ${catkin_EXPORTED_TARGETS}
                                  ${PROJECT_NAME}_generate_messages_cpp
                                  ${PROJECT_NAME}_gencpp
)

target_link_libraries(yesense_imu_node
  ${catkin_LIBRARIES}
)
#add_executable(imu_tf src/imu_tf.cpp)
#target_link_libraries( imu_tf ${catkin_LIBRARIES})# ${SERIAL_LIB}

# add debug info
# set(CMAKE_BUILD_TYPE "Debug")
# set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
# set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O0 -Wall")
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -g")

#############
## Install ##
#############


## Mark executables and/or libraries for installation
# install(TARGETS yesense_imu_node
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

# install (DIRECTORY launch
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )

# install (DIRECTORY rviz
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )
