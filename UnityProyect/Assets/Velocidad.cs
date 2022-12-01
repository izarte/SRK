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

public class Velocidad : MonoBehaviour{

    Text textoVelocidad;
    string velocidadX = "0";
    string giroZ = "0";
    ROSConnection ros;

    public string topic = "/cmd_vel";
    void Start(){
        textoVelocidad = GetComponent<Text>();
        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<twist>(topic, Callback); 
    }

    void Callback(twist msg)
    {   
        velocidadX = msg.linear.x.ToString("F2");
        giroZ = msg.angular.z.ToString("F2");
        //Debug.Log(velocidadZ);
        //textoVelocidad.text = "Velocidad: " + velocidadZ;
    }

    void Update()
    {
        textoVelocidad.text = "Velocidad: " + velocidadX + "\n\n" + "Velocidad Giro: " + giroZ; 
        //Debug.Log(velocidadZ);
    }

}
