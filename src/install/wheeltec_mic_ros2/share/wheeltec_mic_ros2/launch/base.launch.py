import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import (DeclareLaunchArgument, GroupAction,
                            IncludeLaunchDescription, SetEnvironmentVariable)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    mic_dir = get_package_share_directory('wheeltec_mic_ros2')
    mic_launch_dir = os.path.join(mic_dir, 'launch')
    mic_include_dir = os.path.join(mic_launch_dir, 'include')
    command_config = os.path.join(mic_dir, 'config', 'param.yaml')
    audio_path = os.path.join(mic_dir,'feedback_voice')
    resource_param = {"audio_path": audio_path}
    print(audio_path)

    bringup_dir = get_package_share_directory('turn_on_wheeltec_robot')
    launch_dir = os.path.join(bringup_dir, 'launch')
    wheeltec_robot = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(launch_dir, 'turn_on_wheeltec_robot.launch.py')),
    )
    wheeltec_lidar = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(launch_dir, 'wheeltec_lidar.launch.py')),
    )

    wheeltec_nav = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(mic_include_dir, 'voi_navigation.launch.py')),
    ) 

    call_recognition = Node(
        package="wheeltec_mic_ros2",
        executable="call_recognition",
        #output='screen',
        parameters=[command_config]
    )
    command_recognition = Node(
        package="wheeltec_mic_ros2",
        executable="command_recognition",
        output='screen',
        parameters=[resource_param,
            command_config]                     
    )
    node_feedback = Node(
        package="wheeltec_mic_ros2",
        executable="node_feedback",
        output='screen',
        parameters=[resource_param]
    )

    motion_control = Node(
        package="wheeltec_mic_ros2",
        executable="motion_control",
        output='screen',
        parameters=[resource_param,
        command_config]   
    )

    lasertracker = Node(
        package="simple_follower_ros2", 
        executable="lasertracker", 
        name='lasertracker'
    )

    ld = LaunchDescription()

    ld.add_action(wheeltec_robot)
    ld.add_action(wheeltec_lidar)
    ld.add_action(wheeltec_nav)
    ld.add_action(lasertracker)

    ld.add_action(call_recognition)
    ld.add_action(command_recognition)
    ld.add_action(node_feedback)
    ld.add_action(motion_control)
    
    
    return ld