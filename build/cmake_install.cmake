# Install script for directory: /home/wheeltec/wheeltec_robot/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wheeltec/wheeltec_robot/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/wheeltec/wheeltec_robot/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/wheeltec/wheeltec_robot/install" TYPE PROGRAM FILES "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/wheeltec/wheeltec_robot/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/wheeltec/wheeltec_robot/install" TYPE PROGRAM FILES "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/wheeltec/wheeltec_robot/install/setup.bash;/home/wheeltec/wheeltec_robot/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/wheeltec/wheeltec_robot/install" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/setup.bash"
    "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/wheeltec/wheeltec_robot/install/setup.sh;/home/wheeltec/wheeltec_robot/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/wheeltec/wheeltec_robot/install" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/setup.sh"
    "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/wheeltec/wheeltec_robot/install/setup.zsh;/home/wheeltec/wheeltec_robot/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/wheeltec/wheeltec_robot/install" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/setup.zsh"
    "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/wheeltec/wheeltec_robot/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/wheeltec/wheeltec_robot/install" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/wheeltec/wheeltec_robot/build/gtest/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/lsx10/lslidar/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/navigation/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/vision_opencv-noetic/opencv_tests/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/aruco_ros-noetic-devel/aruco_msgs/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/lsx10/lslidar_msgs/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/vision_opencv-noetic/vision_opencv/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/world_canvas_msgs/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/gnss_convert/geo_pos_conv/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/map_server/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/slam_karto/sparse_bundle_adjustment-melodic-devel/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/slam_karto/open_karto-melodic-devel/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/laser_double/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/vision_opencv-noetic/cv_bridge/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/aruco_ros-noetic-devel/aruco/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/darknet_ros/darknet_ros_msgs/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/vision_opencv-noetic/image_geometry/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/bodyreader/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/darknet_ros/darknet_ros/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/depthimage_to_laserscan-melodic-devel/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_msgs/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_navigation/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/kcf_track/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ros_tensorflow/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/rplidar_ros/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/simple_follower/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ros_astra_camera-main/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/aruco_ros-noetic-devel/aruco_ros/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/fdilink_ahrs/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ldlidar_14/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/lsx10/lslidar_driver/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/rrt_exploration/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/slam_karto/slam_karto-melodic-devel/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/amcl/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/fake_localization/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_room_exploration/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/ira_laser_tools-ros1-master/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/laserscan_merger-master/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/orb_slam_2_ros-master/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/turn_on_wheeltec_robot/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/gnss_convert/gnss_poser/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/qt_ros_test/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/usb_cam/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/voxel_grid/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/costmap_2d/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/nav_core/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/base_local_planner/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/carrot_planner/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/clear_costmap_recovery/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/dwa_local_planner/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/move_slow_and_clear/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/navfn/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/global_planner/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/rotate_recovery/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/navigation-noetic-devel/move_base/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/teb_local_planner-noetic-devel/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/web_video_server/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/wheeltec_gps_driver/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/wheeltec_joy_control/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/wheeltec_multi/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/wheeltec_robot_rc/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/wheeltec_yolo_action/cmake_install.cmake")
  include("/home/wheeltec/wheeltec_robot/build/xf_mic_asr_offline_circle/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/wheeltec/wheeltec_robot/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
