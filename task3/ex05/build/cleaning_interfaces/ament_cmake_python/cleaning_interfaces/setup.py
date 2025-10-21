from setuptools import find_packages
from setuptools import setup

setup(
    name='cleaning_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('cleaning_interfaces', 'cleaning_interfaces.*')),
)
