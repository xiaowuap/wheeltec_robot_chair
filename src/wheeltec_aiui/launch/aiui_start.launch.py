from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    wheeltec_mic = Node(
        package="wheeltec_mic_ros2",
        executable="wheeltec_mic",
        output='screen',
        parameters=[{"usart_port_name": "/dev/wheeltec_mic",
                    "serial_baud_rate": 115200}]
    )

    wheeltec_aiui = Node(
        package="wheeltec_aiui",
        executable="wheeltec_aiui",
        output='screen',
    )

    ld = LaunchDescription()

    ld.add_action(wheeltec_mic)
    ld.add_action(wheeltec_aiui)
    
    return ld