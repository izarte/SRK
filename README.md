Project developed by [Pablo Cano], [Jose Antonio], [Luru183], [Carlos], [jbeltraf13] e [Iñigo Zárate]
# SRK
SRK is a project made with unity and ros with the object of teleoperation a turtlebot 2 with Oculus quest 2 and set objects with aruco recognition.


All ROS instructions are described at [ros README]
## Requierements
- Unity 2021.3.14f1

## Installation
For ROS module, download it and follow steps in README
```sh
git submodule init
git submodule update
```


Once Unity is installed, it is necessary to install some plug ins

- ROS-TCP: In order to install, click in Window -> Package Manager. Click in + -> Add package from gir url and paste this url https://github.com/Unity-Technologies/ROS-TCP-Connector.git?path=/com.unity.robotics.ros-tcp-connector.
- Oculus: This package is installed by clicking in Window -> Asset Store, search for Oculus Integration and downoald it.
- Configuration: This [video] is used as guide of generic oculus project.

## Usage
With all ROS steps done, project is ready to run and test in computer or built as an apk and uploaded to Oculus.






[Pablo Cano]: https://github.com/CanoHard
[Jose Antonio]: https://github.com/TheFailex
[Luru183]: https://github.com/Luru183
[Carlos]: https://github.com/carlosabadia
[jbeltraf13]: https://github.com/jbeltraf13
[Iñigo Zárate]: https://github.com/izarte
[ros README]: https://github.com/izarte/SRK_ros/tree/master/src
[video]: https://www.youtube.com/watch?v=3H-KUyKwVD4&t=8s&ab_channel=Skarredghost
