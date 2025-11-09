from setuptools import setup
import os
from glob import glob

package_name = 'ex03'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Автоматически включаем все launch файлы
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='student@example.com',
    description='TF2 Time Travel with turtlesim',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'tf2_time_broadcaster = ex03.tf2_time_broadcaster:main',
            'tf2_time_broadcaster_turtle2 = ex03.tf2_time_broadcaster_turtle2:main',
            'turtle_tf2_time_travel = ex03.turtle_tf2_time_travel:main',
        ],
    },
)