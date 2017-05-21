#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <pcl/registration/icp.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "laser_estimator");
  ros::NodeHandle pnh("~");
  ros::spin();
  return 0;
}
