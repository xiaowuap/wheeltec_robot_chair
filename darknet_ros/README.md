# YOLO for ROS on Jetson
*************************************

# EXERCISE

$ cd ~/catkin_ws/src

$ git clone https://github.com/katebrighteyes/darknet_ros

$ cd ~/catkin_ws/src/darknet_ros/darknet_ros

# TODO 1.

<config/ros.yaml>

$ vim config/ros.yaml +4

topic: /camera/image_raw

# TODO 2.

<launch/darknet_ros.launch> 12 line

$ vim launch/darknet_ros.launch +12

default="$(find darknet_ros)/config/ros.yaml"/>

$ vim launch/darknet_ros.launch +13

default="$(find darknet_ros)/config/yolov2-tiny.yaml"

# TODO 3.

<src/YoloObjectDetector.cpp> 158 line

vim src/YoloObjectDetector.cpp +158

  imageSubscriber_ = imageTransport_.subscribe(cameraTopicName, cameraQueueSize,
                                               &YoloObjectDetector::cameraCallback, this);

  objectPublisher_ = nodeHandle_.advertise<std_msgs::Int8>(objectDetectorTopicName,
                                                           objectDetectorQueueSize,
                                                           objectDetectorLatch);

  boundingBoxesPublisher_ = nodeHandle_.advertise<darknet_ros_msgs::BoundingBoxes>(
                                boundingBoxesTopicName, boundingBoxesQueueSize, boundingBoxesLatch);
  
  detectionImagePublisher_ = nodeHandle_.advertise<sensor_msgs::Image>(detectionImageTopicName,
                                                                       detectionImageQueueSize,
                                                                       detectionImageLatch);

# BUILD

$ cd ~/catkin_ws/

$ catkin_make
  

_____________________________
# TEST

This is darknet ROS for Nvidia Jetson.

$ roscore

$ rosrun usb_cam usb_cam_node /usb_cam/image_raw:=/camera/image_raw

$ roslaunch darknet_ros darknet_ros.launch

$ rosrun rqt_graph rqt_graph
