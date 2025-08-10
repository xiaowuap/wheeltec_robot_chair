import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wheeltec/wheeltec_robot/src/install/simple_follower_ros2'
