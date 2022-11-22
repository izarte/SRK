//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Tf2
{
    [Serializable]
    public class FrameGraphResponse : Message
    {
        public const string k_RosMessageName = "tf2_msgs/FrameGraph";
        public override string RosMessageName => k_RosMessageName;

        public string frame_yaml;

        public FrameGraphResponse()
        {
            this.frame_yaml = "";
        }

        public FrameGraphResponse(string frame_yaml)
        {
            this.frame_yaml = frame_yaml;
        }

        public static FrameGraphResponse Deserialize(MessageDeserializer deserializer) => new FrameGraphResponse(deserializer);

        private FrameGraphResponse(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.frame_yaml);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.frame_yaml);
        }

        public override string ToString()
        {
            return "FrameGraphResponse: " +
            "\nframe_yaml: " + frame_yaml.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize, MessageSubtopic.Response);
        }
    }
}
