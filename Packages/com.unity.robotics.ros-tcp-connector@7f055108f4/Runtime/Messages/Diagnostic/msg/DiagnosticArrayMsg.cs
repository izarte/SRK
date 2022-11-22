//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Diagnostic
{
    [Serializable]
    public class DiagnosticArrayMsg : Message
    {
        public const string k_RosMessageName = "diagnostic_msgs/DiagnosticArray";
        public override string RosMessageName => k_RosMessageName;

        //  This message is used to send diagnostic information about the state of the robot.
        public Std.HeaderMsg header;
        //  for timestamp
        public DiagnosticStatusMsg[] status;
        //  an array of components being reported on

        public DiagnosticArrayMsg()
        {
            this.header = new Std.HeaderMsg();
            this.status = new DiagnosticStatusMsg[0];
        }

        public DiagnosticArrayMsg(Std.HeaderMsg header, DiagnosticStatusMsg[] status)
        {
            this.header = header;
            this.status = status;
        }

        public static DiagnosticArrayMsg Deserialize(MessageDeserializer deserializer) => new DiagnosticArrayMsg(deserializer);

        private DiagnosticArrayMsg(MessageDeserializer deserializer)
        {
            this.header = Std.HeaderMsg.Deserialize(deserializer);
            deserializer.Read(out this.status, DiagnosticStatusMsg.Deserialize, deserializer.ReadLength());
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.header);
            serializer.WriteLength(this.status);
            serializer.Write(this.status);
        }

        public override string ToString()
        {
            return "DiagnosticArrayMsg: " +
            "\nheader: " + header.ToString() +
            "\nstatus: " + System.String.Join(", ", status.ToList());
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
