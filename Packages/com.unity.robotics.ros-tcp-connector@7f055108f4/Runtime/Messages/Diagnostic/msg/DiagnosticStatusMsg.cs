//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Diagnostic
{
    [Serializable]
    public class DiagnosticStatusMsg : Message
    {
        public const string k_RosMessageName = "diagnostic_msgs/DiagnosticStatus";
        public override string RosMessageName => k_RosMessageName;

        //  This message holds the status of an individual component of the robot.
        //  Possible levels of operations.
        public const sbyte OK = 0;
        public const sbyte WARN = 1;
        public const sbyte ERROR = 2;
        public const sbyte STALE = 3;
        //  Level of operation enumerated above.
        public sbyte level;
        //  A description of the test/component reporting.
        public string name;
        //  A description of the status.
        public string message;
        //  A hardware unique string.
        public string hardware_id;
        //  An array of values associated with the status.
        public KeyValueMsg[] values;

        public DiagnosticStatusMsg()
        {
            this.level = 0;
            this.name = "";
            this.message = "";
            this.hardware_id = "";
            this.values = new KeyValueMsg[0];
        }

        public DiagnosticStatusMsg(sbyte level, string name, string message, string hardware_id, KeyValueMsg[] values)
        {
            this.level = level;
            this.name = name;
            this.message = message;
            this.hardware_id = hardware_id;
            this.values = values;
        }

        public static DiagnosticStatusMsg Deserialize(MessageDeserializer deserializer) => new DiagnosticStatusMsg(deserializer);

        private DiagnosticStatusMsg(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.level);
            deserializer.Read(out this.name);
            deserializer.Read(out this.message);
            deserializer.Read(out this.hardware_id);
            deserializer.Read(out this.values, KeyValueMsg.Deserialize, deserializer.ReadLength());
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.level);
            serializer.Write(this.name);
            serializer.Write(this.message);
            serializer.Write(this.hardware_id);
            serializer.WriteLength(this.values);
            serializer.Write(this.values);
        }

        public override string ToString()
        {
            return "DiagnosticStatusMsg: " +
            "\nlevel: " + level.ToString() +
            "\nname: " + name.ToString() +
            "\nmessage: " + message.ToString() +
            "\nhardware_id: " + hardware_id.ToString() +
            "\nvalues: " + System.String.Join(", ", values.ToList());
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
