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
    string velocidadZ = "0";
    ROSConnection ros;

    public string topic = "/mobile_base/commands/velocity";
    void Start(){
        textoVelocidad = GetComponent<Text>();
        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<twist>(topic, Callback); 
    }

    void Callback(twist msg)
    {   
        velocidadZ = msg.linear.x.ToString("F2");
        //Debug.Log(velocidadZ);
        //textoVelocidad.text = "Velocidad: " + velocidadZ;
    }

    void Update()
    {
        textoVelocidad.text = "Velocidad: " + velocidadZ; 
        //Debug.Log(velocidadZ);
    }

}
