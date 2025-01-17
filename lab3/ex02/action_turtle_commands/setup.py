from setuptools import find_packages, setup

package_name = 'action_turtle_commands'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            [f'resource/{package_name}']),
        ('share/{package_name}',
            ['package.xml']),
        ('share/{package_name}/action',
            ['action/MessageTurtleCommands.action']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dmitriy',
    maintainer_email='dmitriykil20030310@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
	    'action_turtle_server = action_turtle_commands.action_turtle_server:main',
            'action_turtle_client = action_turtle_commands.action_turtle_client:main',
        ],
    },
)
