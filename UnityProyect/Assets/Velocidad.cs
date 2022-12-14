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

    public ROSConnection ros;
    public Text textoVelocidad;
    public Controller controller;
    // public string topicNameSub = "/command_base/commands/veloctity";

    private string linear_speed = "0";
    private string rotation_speed = "0";
    
    void Start(){
        textoVelocidad = GetComponent<Text>();
        // ros.Subscribe<TwistMsg>(topicNameSub, Callback);
    }

    // private void Callback(TwistMsg data)
    // {
    //     linear_speed = data.linear;
    //     rotation_speed = data.angular;
    // }

    void Update()
    {
        linear_speed = controller.getLinearSpeed().ToString("F2");
        rotation_speed = controller.getAngularSpeed().ToString("F2");
        
        textoVelocidad.text = "Velocidad: " + linear_speed + "\n\n" + "Velocidad Giro: " + rotation_speed; 
        //Debug.Log(velocidadZ);
    }

}
