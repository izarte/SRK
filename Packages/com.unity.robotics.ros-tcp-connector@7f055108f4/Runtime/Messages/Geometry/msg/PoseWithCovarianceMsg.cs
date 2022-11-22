//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Geometry
{
    [Serializable]
    public class PoseWithCovarianceMsg : Message
    {
        public const string k_RosMessageName = "geometry_msgs/PoseWithCovariance";
        public override string RosMessageName => k_RosMessageName;

        //  This represents a pose in free space with uncertainty.
        public PoseMsg pose;
        //  Row-major representation of the 6x6 covariance matrix
        //  The orientation parameters use a fixed-axis representation.
        //  In order, the parameters are:
        //  (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
        public double[] covariance;

        public PoseWithCovarianceMsg()
        {
            this.pose = new PoseMsg();
            this.covariance = new double[36];
        }

        public PoseWithCovarianceMsg(PoseMsg pose, double[] covariance)
        {
            this.pose = pose;
            this.covariance = covariance;
        }

        public static PoseWithCovarianceMsg Deserialize(MessageDeserializer deserializer) => new PoseWithCovarianceMsg(deserializer);

        private PoseWithCovarianceMsg(MessageDeserializer deserializer)
        {
            this.pose = PoseMsg.Deserialize(deserializer);
            deserializer.Read(out this.covariance, sizeof(double), 36);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.pose);
            serializer.Write(this.covariance);
        }

        public override string ToString()
        {
            return "PoseWithCovarianceMsg: " +
            "\npose: " + pose.ToString() +
            "\ncovariance: " + System.String.Join(", ", covariance.ToList());
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
