#!/bin/bash

# 确保在正确的工作目录
cd /home/wheeltec/wheeltec_robot

# 清理旧的环境变量
unset ROS_PACKAGE_PATH
unset AMENT_PREFIX_PATH 
unset CMAKE_PREFIX_PATH

# Setup ROS2 environment
source /opt/ros/humble/setup.bash
source /home/wheeltec/wheeltec_robot/install/setup.bash

echo "环境设置完成，启动 dual_laser_merger..."

# Run dual laser merger launch file
ros2 launch dual_laser_merger dual_laser_merger.launch.py "$@"
