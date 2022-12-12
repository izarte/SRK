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

    private string linear_speed = "0";
    private string rotation_speed = "0";
    
    void Start(){
        textoVelocidad = GetComponent<Text>();
    }

    void Update()
    {
        linear_speed = controller.getLinearSpeed().ToString("F2");
        rotation_speed = controller.getAngularSpeed().ToString("F2");
        
        textoVelocidad.text = "Velocidad: " + linear_speed + "\n\n" + "Velocidad Giro: " + rotation_speed; 
        //Debug.Log(velocidadZ);
    }

}
