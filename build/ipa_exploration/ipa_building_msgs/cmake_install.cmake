# Install script for directory: /home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/action" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/action/MapSegmentation.action"
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/action/FindRoomSequenceWithCheckpoints.action"
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/action/RoomExploration.action"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
    "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/msg" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg"
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/srv" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv"
    "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/cmake" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/include/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/share/roseus/ros/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/share/common-lisp/ros/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/share/gennodejs/ros/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/wheeltec/wheeltec_robot/devel/lib/python3/dist-packages/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/lib/python3/dist-packages/ipa_building_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/cmake" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs/cmake" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgsConfig.cmake"
    "/home/wheeltec/wheeltec_robot/build/ipa_exploration/ipa_building_msgs/catkin_generated/installspace/ipa_building_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ipa_building_msgs" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/package.xml")
endif()

