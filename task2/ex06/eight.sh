#!/bin/bash

# Source ROS 2
source /opt/ros/humble/setup.bash

# Publish left turn for 4.5 seconds (half of the figure-eight)
ros2 topic pub --rate 1 /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" &
sleep 4.5
kill $!

# Publish right turn for 6 seconds (other half of the figure-eight)
ros2 topic pub --rate 1 /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: -1.8}}" &
sleep 6
kill $!

# Stop the turtle after completing the figure-eight
ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"