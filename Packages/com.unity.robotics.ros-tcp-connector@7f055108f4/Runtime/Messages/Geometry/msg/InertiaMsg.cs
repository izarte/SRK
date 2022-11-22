//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Geometry
{
    [Serializable]
    public class InertiaMsg : Message
    {
        public const string k_RosMessageName = "geometry_msgs/Inertia";
        public override string RosMessageName => k_RosMessageName;

        //  Mass [kg]
        public double m;
        //  Center of mass [m]
        public Vector3Msg com;
        //  Inertia Tensor [kg-m^2]
        //      | ixx ixy ixz |
        //  I = | ixy iyy iyz |
        //      | ixz iyz izz |
        public double ixx;
        public double ixy;
        public double ixz;
        public double iyy;
        public double iyz;
        public double izz;

        public InertiaMsg()
        {
            this.m = 0.0;
            this.com = new Vector3Msg();
            this.ixx = 0.0;
            this.ixy = 0.0;
            this.ixz = 0.0;
            this.iyy = 0.0;
            this.iyz = 0.0;
            this.izz = 0.0;
        }

        public InertiaMsg(double m, Vector3Msg com, double ixx, double ixy, double ixz, double iyy, double iyz, double izz)
        {
            this.m = m;
            this.com = com;
            this.ixx = ixx;
            this.ixy = ixy;
            this.ixz = ixz;
            this.iyy = iyy;
            this.iyz = iyz;
            this.izz = izz;
        }

        public static InertiaMsg Deserialize(MessageDeserializer deserializer) => new InertiaMsg(deserializer);

        private InertiaMsg(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.m);
            this.com = Vector3Msg.Deserialize(deserializer);
            deserializer.Read(out this.ixx);
            deserializer.Read(out this.ixy);
            deserializer.Read(out this.ixz);
            deserializer.Read(out this.iyy);
            deserializer.Read(out this.iyz);
            deserializer.Read(out this.izz);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.m);
            serializer.Write(this.com);
            serializer.Write(this.ixx);
            serializer.Write(this.ixy);
            serializer.Write(this.ixz);
            serializer.Write(this.iyy);
            serializer.Write(this.iyz);
            serializer.Write(this.izz);
        }

        public override string ToString()
        {
            return "InertiaMsg: " +
            "\nm: " + m.ToString() +
            "\ncom: " + com.ToString() +
            "\nixx: " + ixx.ToString() +
            "\nixy: " + ixy.ToString() +
            "\nixz: " + ixz.ToString() +
            "\niyy: " + iyy.ToString() +
            "\niyz: " + iyz.ToString() +
            "\nizz: " + izz.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize);
        }
    }
}
