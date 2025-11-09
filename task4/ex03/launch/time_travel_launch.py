#!/usr/bin/env python3
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Объявляем аргумент
        DeclareLaunchArgument(
            'delay',
            default_value='5.0',
            description='Delay in seconds for time travel'
        ),

        # Turtlesim
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtlesim',
            output='screen'
        ),

        # Broadcaster для turtle1 - запускаем сразу
        ExecuteProcess(
            cmd=['tf2_time_broadcaster'],
            output='screen',
            name='broadcaster1'
        ),

        # Broadcaster для turtle2 - запускаем сразу
        ExecuteProcess(
            cmd=['tf2_time_broadcaster_turtle2'],
            output='screen',
            name='broadcaster2'
        ),

        # Time Travel - запускаем с задержкой 2 секунды, чтобы turtlesim успел инициализироваться
        TimerAction(
            period=2.0,
            actions=[
                ExecuteProcess(
                    cmd=[
                        'turtle_tf2_time_travel',
                        LaunchConfiguration('delay')
                    ],
                    output='screen',
                    name='time_traveler'
                )
            ]
        ),
    ])