#!/usr/bin/env python
# encoding: utf-8
import rospy
from sensor_msgs.msg import NavSatFix

def fix_callback(msg):
    msg.status.status = 2
    modified_fix_publisher.publish(msg)

if __name__ == '__main__':
    rospy.init_node('gps_fix_modifier')
    fix_subscriber = rospy.Subscriber('/gps/fix', NavSatFix, fix_callback)
    modified_fix_publisher = rospy.Publisher('/gps/fixed', NavSatFix, queue_size=10)

    rospy.spin()
