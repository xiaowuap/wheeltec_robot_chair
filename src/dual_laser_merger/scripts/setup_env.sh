#!/bin/bash
# 快速设置 ROS2 环境的脚本

# 确保在正确的工作目录
cd /home/wheeltec/wheeltec_robot

# 清理旧的环境变量
unset ROS_PACKAGE_PATH
unset AMENT_PREFIX_PATH 
unset CMAKE_PREFIX_PATH

# Setup ROS2 environment
source /opt/ros/humble/setup.bash
source /home/wheeltec/wheeltec_robot/install/setup.bash

echo "✅ ROS2 环境设置完成"
echo "📦 AMENT_PREFIX_PATH 包含 $(echo $AMENT_PREFIX_PATH | tr ':' '\n' | wc -l) 个包路径"
echo "🚀 现在可以运行: ros2 launch dual_laser_merger dual_laser_merger.launch.py"
echo ""

# 启动一个新的 bash 会话，保持环境变量
exec bash
