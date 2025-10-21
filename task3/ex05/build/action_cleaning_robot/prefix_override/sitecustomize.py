import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ivan/ros2_ws/task3/ex05/install/action_cleaning_robot'
