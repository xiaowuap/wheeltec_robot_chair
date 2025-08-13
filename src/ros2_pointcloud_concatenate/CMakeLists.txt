cmake_minimum_required(VERSION 3.14)
project(pointcloud_concatenate)

# C++ version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(pcl_ros REQUIRED)
find_package(PCL REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)

# Include directories
include_directories(
  include
  ${EIGEN3_INCLUDE_DIR}
  ${PCL_INCLUDE_DIRS}
)

add_definitions(${PCL_DEFINITIONS})

add_library(${PROJECT_NAME}
  src/pointcloud_concatenate.cpp
)

ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  sensor_msgs
  pcl_conversions
  pcl_ros
  tf2
  tf2_ros
  Eigen3
)

target_link_libraries(${PROJECT_NAME}
  ${PCL_LIBRARIES}
)

# Declare executable
add_executable(${PROJECT_NAME}_node
  src/${PROJECT_NAME}_node.cpp
)
ament_target_dependencies(${PROJECT_NAME}_node
  rclcpp
  sensor_msgs
  pcl_conversions
  pcl_ros
  tf2
  tf2_ros
  Eigen3
)

target_link_libraries(${PROJECT_NAME}_node
  ${PROJECT_NAME}
  ${PCL_LIBRARIES}
)

# Install targets
install(TARGETS
  ${PROJECT_NAME}
  ${PROJECT_NAME}_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install headers
install(DIRECTORY include/
  DESTINATION include/
)

# Install launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

# Ament package
ament_package()
