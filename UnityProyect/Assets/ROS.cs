using UnityEngine;
using Unity.Robotics.ROSTCPConnector;

public class ROS : MonoBehaviour
{
    private ROSConnection ros;

    void Start()
    {
        // start the ROS connection
        ros = ROSConnection.GetOrCreateInstance();
    }
}