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

public class laser : MonoBehaviour
{
    public string topic = "/scan";
    ROSConnection ros;
    float zona_i = 0;
    float zona_m = 0;
    float zona_d = 0;

    int transparencia = 100;

    float min = 0.0f;
    float max = 1f;
    Image izqlaser;
    Image cenlaser;
    Image derlaser;
    // Start is called before the first frame update
    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<LaserScanMsg>(topic, Callback); 
        izqlaser = transform.GetChild(2).GetComponent<Image>();
        cenlaser = transform.GetChild(1).GetComponent<Image>();
        derlaser = transform.GetChild(0).GetComponent<Image>();
    }

    void Callback(LaserScanMsg msg){
        zona_i = 999;
        zona_d = 999;
        zona_m = 999;
        
        for(int i = 0; i < msg.ranges.Length; i++){
            if(i <= (msg.ranges.Length/3 - 1)){
                if(msg.ranges[i] < zona_i){
                    zona_i = msg.ranges[i];
                }
            }else if(i > (msg.ranges.Length/3 - 1) && i <= (msg.ranges.Length/3 * 2 - 1) ){
                if(msg.ranges[i] < zona_m){
                    zona_m = msg.ranges[i];
                }
            }else{
                if(msg.ranges[i] < zona_d){
                    zona_d = msg.ranges[i];
                }
            }
        }
        //Debug.Log(zona_i);
        //Debug.Log(zona_m);
        //Debug.Log(zona_d);
        if(zona_i < min){
            izqlaser.GetComponent<Image>().color = new Color32(255,0,0,(byte) transparencia);
        }else if(zona_i > max){
            izqlaser.GetComponent<Image>().color = new Color32(0,255,0,(byte) transparencia);
        }else{
            float red = (zona_i - min) * (255) / (max - min);
            float green = Math.Abs(red - 255);
            //izqlaser.GetComponent<Image>().color = new Color32((byte)(255 * (255 - x)), (byte)(255 * x),0,(byte)transparencia);
            izqlaser.GetComponent<Image>().color = new Color32((byte)(green*2 - Math.Abs(red-green)), (byte)(red*2 - Math.Abs(green-red)),0,(byte)transparencia);
        }

        if(zona_m < min){
            cenlaser.GetComponent<Image>().color = new Color32(255,0,0,(byte) transparencia);
        }else if(zona_m > max){
            cenlaser.GetComponent<Image>().color = new Color32(0,255,0,(byte) transparencia);
        }else{
            float red = (zona_m - min) * (255) / (max - min);
            float green = Math.Abs(red - 255);
            //izqlaser.GetComponent<Image>().color = new Color32((byte)(255 * (255 - x)), (byte)(255 * x),0,(byte)transparencia);
            cenlaser.GetComponent<Image>().color = new Color32((byte)(green*2 - Math.Abs(red-green)), (byte)(red*2 - Math.Abs(green-red)),0,(byte)transparencia);
        }

        if(zona_d < min){
            derlaser.GetComponent<Image>().color = new Color32(255,0,0,(byte) transparencia);
        }else if(zona_d > max){
            derlaser.GetComponent<Image>().color = new Color32(0,255,0,(byte) transparencia);
        }else{
            float red = (zona_d - min) * (255) / (max - min);
            float green = Math.Abs(red - 255);
            //izqlaser.GetComponent<Image>().color = new Color32((byte)(255 * (255 - x)), (byte)(255 * x),0,(byte)transparencia);
            derlaser.GetComponent<Image>().color = new Color32((byte)(green*2 - Math.Abs(red-green)), (byte)(red*2 - Math.Abs(green-red)),0,(byte)transparencia);
        }
    }
    // Update is called once per frame

}
