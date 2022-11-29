//     using UnityEngine;
// using Unity.Robotics.ROSTCPConnector;
// using RosMessageTypes.SrkMove;
// using System;
// using System.Collections;
// using System.Collections.Generic;
// using System.Linq;
// using System.IO;
// using TMPro;


// /// <summary>
// ///
// /// </summary>
// public class RosPublisher : MonoBehaviour
// {
//     private const float MAX_LINEAR = 2;
//     private const float MAX_AGULAR = 1;
//     private const float MIN_LINEAR = 0.1f;
//     private const float MIN_ANGULAR = 0.1f;

//     ROSConnection ros;
//     public string topicName = "/cmd_vel";
//     // Publish the cube's position and rotation every N seconds
//     public float publishMessageFrequency = 0.5f;
//     // Used to determine how much time has elapsed since the last message was published
//     private float timeElapsed;
//     // variables used during execution
//     private Vector2 joystick;
//     private float linear_speed = 0;
//     private float linear_factor = 1;
//     private float angular_speed = 0;
//     private float angular_factor = 1;

//     // private float calculate_speed(float input, float factor);
//     // private float increase_factor(float actual, float increase, float maximum, float minimum);


//     void Start()
//     {
//         // start the ROS connection
//         ros = ROSConnection.GetOrCreateInstance();
//         ros.RegisterPublisher<PosRotMsg>(topicName);
//     }

//     private void Update()
//     {
//         timeElapsed += Time.deltaTime;
//         joystick = OVRInput.Get(OVRInput.RawAxis2D.RThumbstick);
//         Debug.Log(joystick);

//         // If button A is pressed, speed is increased
//         if (OVRInput.GetDown(OVRInput.Button.One) == true)
//         {
//             linear_factor = increase_factor(linear_speed, 0.2f, MAX_LINEAR, MIN_LINEAR);
//             Debug.Log("changed speed factor" + linear_factor);
//         }
//         // If button B is pressed, speed is decreased
//         else if (OVRInput.GetDown(OVRInput.Button.Two) == true)
//         {
//             linear_factor = increase_factor(linear_speed, -0.2f, MAX_LINEAR, MIN_LINEAR);
//             Debug.Log("changed speed factor" + linear_factor);
//         }
//         linear_speed = calculate_speed(joystick.x, linear_factor);
//         angular_speed = calculate_speed(joystick.y, angular_factor);

//         if (timeElapsed > publishMessageFrequency)
//         {

            
//             //joystick = new Vector2(,56);
//             PosRotMsg cubePos = new PosRotMsg(
//                 linear_speed,
//                 linear_factor,
//                 0.0f,
//                 0.0f,
//                 0.0f,
//                 angular_factor,
//                 angular_speed
//             );

//             // Finally send the message to server_endpoint.py running in ROS
//             ros.Publish(topicName, cubePos);

//             timeElapsed = 0;
//         }
//     }


//     private float calculate_speed(float input, float factor)
//     {
//         return (input * factor);
//     }

//     private float increase_factor(float actual, float increase, float maximum, float minimum)
//     {
//         actual += increase;
//         if (actual > maximum)
//             return (maximum);
//         else if (actual < minimum)
//             return (minimum);
//         else
//             return (actual);
//     }
// }
