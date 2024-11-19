#include <ros/ros.h>
#include <sensor_msgs/NavSatFix.h>
#include <geometry_msgs/PoseStamped.h>
#include <nav_msgs/Path.h>
#include <math.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <visualization_msgs/Marker.h>

struct my_pose
{
    double latitude;
    double longitude;
    double altitude;
};

double rad(double d) 
{
	return d * 3.1415926 / 180.0;
}
static double EARTH_RADIUS = 6378.137;//地球半径
ros::Publisher state_pub_;
nav_msgs::Path ros_path_;

bool init;
my_pose init_pose;

void publishTFFrames(const sensor_msgs::NavSatFixConstPtr& gps_msg_ptr, const geometry_msgs::PoseStamped& current_position) {
    static tf2_ros::TransformBroadcaster tf_broadcaster;

    // 发布GPS轨迹原点的TF坐标
    geometry_msgs::TransformStamped init_tf;
    init_tf.header.stamp = ros::Time::now();
    init_tf.header.frame_id = "path"; // 假设GPS轨迹原点位于world坐标系
    init_tf.child_frame_id = "gps_origin";
    init_tf.transform.translation.x = 0.0;
    init_tf.transform.translation.y = 0.0;
    init_tf.transform.translation.z = 0.0;
    tf2::Quaternion q;
    q.setRPY(0, 0, 0);
    init_tf.transform.rotation = tf2::toMsg(q);
    tf_broadcaster.sendTransform(init_tf);

    // 发布当前轨迹位置的TF坐标
    geometry_msgs::TransformStamped current_tf;
    current_tf.header.stamp = ros::Time::now();
    current_tf.header.frame_id = "path"; // 假设当前轨迹位置位于world坐标系
    current_tf.child_frame_id = "current_path_position";
    current_tf.transform.translation.x = current_position.pose.position.x;
    current_tf.transform.translation.y = current_position.pose.position.y;
    current_tf.transform.translation.z = current_position.pose.position.z;
    current_tf.transform.rotation = current_position.pose.orientation;
    q.setRPY(0, 0, 0); // 设置姿态为单位四元数
    current_tf.transform.rotation = tf2::toMsg(q);
    tf_broadcaster.sendTransform(current_tf);
}

void gpsCallback(const sensor_msgs::NavSatFixConstPtr& gps_msg_ptr)
{
	if(!init)
    {
        init_pose.latitude = gps_msg_ptr->latitude;
        init_pose.longitude = gps_msg_ptr->longitude;
        init_pose.altitude = gps_msg_ptr->altitude;
        init = true;
    }

	else
    {
    //计算相对位置

        double radLat1 ,radLat2, radLong1,radLong2,delta_lat,delta_long,x,y;
		radLat1 = rad(init_pose.latitude);
        radLong1 = rad(init_pose.longitude);
		radLat2 = rad(gps_msg_ptr->latitude);
		radLong2 = rad(gps_msg_ptr->longitude);
        //计算x
		delta_lat = radLat2 - radLat1;
        delta_long = 0;
		if(delta_lat>0)
			x = -2*asin( sqrt( pow( sin( delta_lat/2 ),2) + cos( radLat1 )*cos( radLat2)*pow( sin( delta_long/2 ),2 ) ));
		else
			x = 2*asin( sqrt( pow( sin( delta_lat/2 ),2) + cos( radLat1 )*cos( radLat2)*pow( sin( delta_long/2 ),2 ) ));
        x = x*EARTH_RADIUS*1000;

        //计算y
		delta_lat = 0;
        delta_long = radLong2  - radLong1;
		if(delta_long>0)
			y = 2*asin( sqrt( pow( sin( delta_lat/2 ),2) + cos( radLat2 )*cos( radLat2)*pow( sin( delta_long/2 ),2 ) ) );
		else
			y = -2*asin( sqrt( pow( sin( delta_lat/2 ),2) + cos( radLat2 )*cos( radLat2)*pow( sin( delta_long/2 ),2 ) ) );
        y = y*EARTH_RADIUS*1000;

        //计算z
        double z = gps_msg_ptr->altitude - init_pose.altitude;

        //发布轨迹

        // 更新当前位置
        geometry_msgs::PoseStamped current_position;
        current_position.header.frame_id = "path";
        current_position.header.stamp = ros::Time::now();
        current_position.pose.position.x = x;
        current_position.pose.position.y = y;
        current_position.pose.position.z = z;

        publishTFFrames(gps_msg_ptr, current_position);
        ros_path_.header.frame_id = "path";
        ros_path_.header.stamp = ros::Time::now();  

        geometry_msgs::PoseStamped pose;
        pose.header = ros_path_.header;
        pose.pose.position.x = x;
        pose.pose.position.y = y;
        pose.pose.position.z = z;

        ros_path_.poses.push_back(pose);

        ROS_INFO("( x:%0.6f ,y:%0.6f ,z:%0.6f)",x ,y ,z );

        state_pub_.publish(ros_path_);
    }
}

int main(int argc,char **argv)
{
    init = false;
    ros::init(argc,argv,"gps_subscriber");
    ros::NodeHandle n;
    ros::Subscriber pose_sub=n.subscribe("/gps_topic",10,gpsCallback);
    state_pub_ = n.advertise<nav_msgs::Path>("gps_path", 10);
    ros::spin();
    return 0;
}


