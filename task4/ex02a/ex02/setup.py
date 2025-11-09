import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'ex02'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name), ['carrot.rviz']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ivan',
    maintainer_email='i.kamenev@g.nsu.ru',
    description='aboba1',
    license='aboba licence',
    tests_require=['pytest'],
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'turtle_broadcaster = ex02.turtle_tf2_broadcaster:main',
            'carrot_broadcaster = ex02.carrot_broadcaster:main',
            'turtle_follower = ex02.turtle_follower:main',
        ],
    },
)
