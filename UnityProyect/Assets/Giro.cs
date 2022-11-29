using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using TMPro;
using RosMessageTypes.SrkMove;
using UnityEngine.UI;
using twist = RosMessageTypes.Geometry.TwistMsg;

public class Giro : MonoBehaviour{

    Text textoVelocidad;
    string velocidadZ = "0";
    ROSConnection ros;

    public string topic = "/cmd_vel";
    void Start2(){
        textoVelocidad = GetComponent<Text>();
        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<twist>(topic, Callback2); 
    }

    void Callback2(twist msg)
    {   
        velocidadZ = msg.angular.z.ToString("F2");
        Debug.Log(velocidadZ);
        //textoVelocidad.text = "Velocidad: " + velocidadZ;
    }

    void Update2()
    {
        textoVelocidad.text = "Velocidad Giro: " + velocidadZ; 
        //Debug.Log(velocidadZ);
    }

}
