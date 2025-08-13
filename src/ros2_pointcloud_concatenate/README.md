# Concatenate / combining pointclouds and outputing a single concatenated pointcloud

ROS2 fork of https://github.com/aseligmann/pointcloud_concatenate.

## `pointcloud_concatenate`

This package provides a node which can be used for concatenating several pointclouds into one.

Up to 4 pointclouds can be concatenated at once.
If you need more pointclouds to be concatenated, then you can probably chain the output of this node into a second `pointcloud_concatenate` node.

### **Dependencies**

This package depends on the following libraries

* `pcl`
* `pcl_ros`

### **Installation**

To use simply clone the package into your workspace and integrate the node into your launch file.

Make sure the dependencies are installed by running rosdep.

```bash
rosdep install --from-paths src --ignore-src -r -y
```

---

### **Launch files**

This node is intended to be included as a part of a larger launch file.
And example launch file is provided.

* `pointcloud_concatenate.launch.py`  
  A sample launch file which highlights the necessary parameters and topics.  
  Launches a node which subscribes to 2 pointclouds, concatenates them and publishes the
  concatenated pointcloud in frame `base_link` at a frequency of 10 Hz.

### **ROS topics**

The package uses the following topics, which can be changed in ```concatenate_params.yaml```.

#### Publishers

* `cloud_out` - [`sensor_msgs/PointCloud2`]  
  The concatenated pointcloud.

#### Subscribers

* `cloud_in1` - [`sensor_msgs/PointCloud2`]  
  The first pointcloud to add to the output.
* `cloud_in2` - [`sensor_msgs/PointCloud2`]  
  The second pointcloud to add to the output.
* `cloud_in3` - [`sensor_msgs/PointCloud2`]  
  The third pointcloud to add to the output.
* `cloud_in4` - [`sensor_msgs/PointCloud2`]  
  The fourth pointcloud to add to the output.

### **ROS2 parameters**

* `clouds` - [integer]  
  Sets the number of pointclouds to concatenate, max 4.  
  Default value: `2`.
* `target_frame` - [a valid frame_id]  
  Sets the frame_id which the pointclouds will be collected in before concatenation.  
  `cloud_out` will be in this frame.  
  Default value: `base_link`.
* `hz` - [double]  
  Sets the frequency at which the output is updated and published.  
  The input pointclouds should be publishing faster or at an equal rate to this frequency.  
  If an input pointclouds is not received anew before a new update cycle, the previous value will be used.  
  Default value: `10.0`.
* `cloud_in*_topic` - [string]  
  Topics at which [`sensor_msgs/PointCloud2`] messages are received.
  There should be the same amount of topics set as the `clouds`.
