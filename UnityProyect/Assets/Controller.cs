using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using TMPro;
using RosMessageTypes.SrkMove;
using TwistMsg = RosMessageTypes.Geometry.TwistMsg;

public class Controller : MonoBehaviour
{
    public ROSConnection ros;
    public float publishMessageFrequency = 0.5f;
    public string topicName = "/cmd_vel";
    public const float MAX_LINEAR = 2;
    public const float MAX_AGULAR = 1;
    public const float MIN_LINEAR = 0.1f;
    public const float MIN_ANGULAR = 0.1f;

    private float timeElapsed;
    private Vector2 joystick;
    private TwistMsg msg = new TwistMsg();
    private float linear_speed = 0;
    private float linear_factor = 1;
    private float angular_speed = 0;
    private float angular_factor = 1;

    void Start()
    {
        ros.RegisterPublisher<TwistMsg>(topicName);
        resetMsg();
    }

    private void Update()
    {
        timeElapsed += Time.deltaTime;
        joystick = OVRInput.Get(OVRInput.RawAxis2D.RThumbstick);
        Debug.Log(joystick);

        // If button A is pressed, speed is increased
        if (OVRInput.GetDown(OVRInput.Button.One) == true)
        {
            linear_factor = increase_factor(linear_speed, 0.2f, MAX_LINEAR, MIN_LINEAR);
            Debug.Log("changed speed factor" + linear_factor);
        }
        // If button B is pressed, speed is decreased
        else if (OVRInput.GetDown(OVRInput.Button.Two) == true)
        {
            linear_factor = increase_factor(linear_speed, -0.2f, MAX_LINEAR, MIN_LINEAR);
            Debug.Log("changed speed factor" + linear_factor);
        }
        linear_speed = calculate_speed(joystick.x, linear_factor);
        angular_speed = calculate_speed(joystick.y, angular_factor);

        if (timeElapsed > publishMessageFrequency)
        {
            msg.linear.x = linear_speed;
            msg.angular.z = angular_speed;

            ros.Publish(topicName, msg);

            timeElapsed = 0;
        }
    }

    private void resetMsg()
    {
        msg.linear.x = 0.0f;
        msg.linear.y = 0.0f;
        msg.linear.z = 0.0f;
        msg.angular.x = 0.0f;
        msg.angular.y = 0.0f;
        msg.angular.z = 0.0f;
    }

    private float calculate_speed(float input, float factor)
    {
        return (input * factor);
    }

    private float increase_factor(float actual, float increase, float maximum, float minimum)
    {
        actual += increase;
        if (actual > maximum)
            return (maximum);
        else if (actual < minimum)
            return (minimum);
        else
            return (actual);
    }

    public float getLinearSpeed()
    {
        return linear_speed;
    }

    public float getAngularSpeed()
    {
        return angular_speed;
    }
}
