from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    radius = LaunchConfiguration('radius')
    direction = LaunchConfiguration('direction_of_rotation')

    return LaunchDescription([
        DeclareLaunchArgument('radius', default_value='2.0', description='Radius for carrot rotation'),
        DeclareLaunchArgument('direction_of_rotation', default_value='1', description='1 for clockwise, -1 for counterclockwise'),

        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='ex02',
            executable='turtle_broadcaster',
            name='broadcaster1',
            parameters=[{'turtlename': 'turtle1'}]
        ),
        Node(
            package='ex02',
            executable='turtle_broadcaster',
            name='broadcaster2',
            parameters=[{'turtlename': 'turtle2'}]
        ),
        Node(
            package='ex02',
            executable='carrot_broadcaster',
            name='carrot_broadcaster',
            parameters=[
                {'radius': radius},
                {'direction_of_rotation': direction}
            ]
        ),
        Node(
            package='ex02',
            executable='turtle_follower',
            name='follower',
            parameters=[{'target_frame': 'carrot'}]
        ),
        Node(
            package='turtlesim',
            executable='turtle_teleop_key',
            name='teleop',
            prefix='xterm -e'  # Запуск в отдельном терминале
        ),
    ])