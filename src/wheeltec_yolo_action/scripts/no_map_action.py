#!/usr/bin/env python
# coding=utf-8

import rospy
import threading
import time
from geometry_msgs.msg import Twist
from darknet_ros_msgs.msg import BoundingBoxes

boundingbox_id = -1
temp0 = 0
temp1 = 0
temp2 = 0
temp3 = 0
temp4 = 0
temp5 = 0
count = 2


def thread_job():
	rospy.spin()

def side_flag_callback(msg):
	global boundingbox_id
	global temp0
	global temp1
	global temp2
	global temp3
	global temp4
	global temp5
	global count
	# for boxes in msg.bounding_boxes:
	# 	if boxes.probability > 0.8:
	# 		boundingbox_id = boxes.id
	# 		print(boxes.Class)
	# print("--------------")
	for boxes in msg.bounding_boxes:
		if boxes.probability > 0.7 and boxes.Class == "0-hand":
			temp0 = temp0 + 1
			temp1 = 0
			temp2 = 0
			temp3 = 0
			temp4 = 0
			temp5 = 0
			if temp0 > count:
				boundingbox_id = boxes.Class
				temp0 = 0
		elif boxes.probability > 0.7 and boxes.Class == "1-hand":
			temp1 = temp1 + 1
			temp0 = 0
			temp2 = 0
			temp3 = 0
			temp4 = 0
			temp5 = 0
			if temp1 > count:
				boundingbox_id = boxes.Class
				temp1 = 0
		elif boxes.probability > 0.7 and boxes.Class == "2-hand":
			temp2 = temp2 + 1
			temp0 = 0
			temp1 = 0
			temp3 = 0
			temp4 = 0
			temp5 = 0
			if temp2 > count:
				boundingbox_id = boxes.Class
				temp2 = 0
		elif boxes.probability > 0.7 and boxes.Class == "3-hand":
			temp3 = temp3 + 1
			temp0 = 0
			temp1 = 0
			temp2 = 0
			temp4 = 0
			temp5 = 0
			if temp3 > count:
				boundingbox_id = boxes.Class
				temp3 = 0
		elif boxes.probability > 0.7 and boxes.Class == "4-hand":
			temp4 = temp4 + 1
			temp0 = 0
			temp1 = 0
			temp2 = 0
			temp3 = 0
			temp5 = 0
			if temp4 > count:
				boundingbox_id = boxes.Class
				temp4 = 0 
		elif boxes.probability > 0.7 and boxes.Class == "5-hand":
			temp5 = temp5 + 1
			temp0 = 0
			temp1 = 0
			temp2 = 0
			temp3 = 0
			temp4 = 0
			if temp5 > count:
				boundingbox_id = boxes.Class
				temp5 = 0

def control_action():
	global boundingbox_id

	rospy.init_node("control_drive")
	add_thread = threading.Thread(target = thread_job)
	add_thread.start

	cmdvel_pub = rospy.Publisher("/cmd_vel", Twist, queue_size=1)
	side_flag_sub = rospy.Subscriber("/darknet_ros/bounding_boxes", BoundingBoxes, side_flag_callback)
	car_mode =rospy.get_param("/if_akm_yes_or_no","no")

	cmd_msg = Twist()
	rate = rospy.Rate(100)
	print("start node!")
	while not rospy.is_shutdown():
		#print(car_mode)
		if boundingbox_id == "0-hand":
			if car_mode == "yes":
				cmd_msg.linear.x = 0.2
				cmd_msg.angular.z = 1
				cmdvel_pub.publish(cmd_msg)
				time.sleep(24)
				cmd_msg.linear.x = 0
				cmd_msg.angular.z = 0
				cmdvel_pub.publish(cmd_msg)
			else:
				cmd_msg.angular.z = 1
				cmdvel_pub.publish(cmd_msg)
				time.sleep(6.7)
				cmd_msg.angular.z = 0
				cmdvel_pub.publish(cmd_msg)
			boundingbox_id = -1
		elif boundingbox_id == "5-hand":
			if car_mode == "yes":
				cmd_msg.linear.x = 0.2
				cmd_msg.angular.z = -1
				cmdvel_pub.publish(cmd_msg)
				time.sleep(24)
				cmd_msg.linear.x = 0
				cmd_msg.angular.z = 0
				cmdvel_pub.publish(cmd_msg)
			else:
				cmd_msg.angular.z = -1
				cmdvel_pub.publish(cmd_msg)
				time.sleep(6.7)
				cmd_msg.angular.z = 0
				cmdvel_pub.publish(cmd_msg)
			boundingbox_id = -1 
		elif boundingbox_id == "2-hand":
			cmd_msg.linear.x = 0.2
			cmdvel_pub.publish(cmd_msg)
			time.sleep(3)
			cmd_msg.linear.x = -0.2
			cmdvel_pub.publish(cmd_msg)
			time.sleep(3)
			cmd_msg.linear.x = 0
			cmdvel_pub.publish(cmd_msg)
			boundingbox_id = -1 
		elif boundingbox_id == "3-hand":
			cmd_msg.linear.x = -0.2
			cmdvel_pub.publish(cmd_msg)
			time.sleep(3)
			cmd_msg.linear.x = 0.2
			cmdvel_pub.publish(cmd_msg)
			time.sleep(3)
			cmd_msg.linear.x = 0
			cmdvel_pub.publish(cmd_msg)
			boundingbox_id = -1 





if __name__ == '__main__':
    try:
    	control_action()
    except rospy.ROSInterruptException:
    	pass
