using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using TMPro;
using RosMessageTypes.Std;
using UnityEngine.UI;
using RosMessageTypes.BuiltinInterfaces;
using RosMessageTypes.Sensor;

public class Video : MonoBehaviour
{
    Texture2D texturaRos;
    public string topic = "/camera/rgb/image_raw";
    public RawImage display;
    ROSConnection ros;
    void Start()
    {   
        ros = ROSConnection.GetOrCreateInstance();  
        ros.Subscribe<ImageMsg>(topic, Callback);
    }

    void Callback(ImageMsg img){
        texturaRos = new Texture2D((int) img.width, (int) img.height, TextureFormat.RGB24, false); // , TextureFormat.RGB24
        texturaRos.LoadRawTextureData(img.data);
        texturaRos.Apply();
        display.texture = texturaRos;
    }

    // Update is called once per frame
    // void Update()
    // {
        
    // }
}
