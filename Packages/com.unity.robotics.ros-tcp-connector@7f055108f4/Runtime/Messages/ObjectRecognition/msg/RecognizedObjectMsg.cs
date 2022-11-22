//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;
using RosMessageTypes.Std;

namespace RosMessageTypes.ObjectRecognition
{
    [Serializable]
    public class RecognizedObjectMsg : Message
    {
        public const string k_RosMessageName = "object_recognition_msgs/RecognizedObject";
        public override string RosMessageName => k_RosMessageName;

        // #################################################### HEADER ###########################################################
        //  The header frame corresponds to the pose frame, NOT the point_cloud frame.
        public HeaderMsg header;
        // ################################################# OBJECT INFO #########################################################
        //  Contains information about the type and the position of a found object
        //  Some of those fields might not be filled because the used techniques do not fill them or because the user does not
        //  request them
        //  The type of the found object
        public ObjectTypeMsg type;
        // confidence: how sure you are it is that object and not another one.
        //  It is between 0 and 1 and the closer to one it is the better
        public float confidence;
        // ############################################### OBJECT CLUSTERS #######################################################
        //  Sometimes you can extract the 3d points that belong to the object, in the frames of the original sensors
        //  (it is an array as you might have several sensors)
        public Sensor.PointCloud2Msg[] point_clouds;
        //  Sometimes, you can only provide a bounding box/shape, even in 3d
        //  This is in the pose frame
        public Shape.MeshMsg bounding_mesh;
        //  Sometimes, you only have 2d input so you can't really give a pose, you just get a contour, or a box
        //  The last point will be linked to the first one automatically
        public Geometry.PointMsg[] bounding_contours;
        // ################################################### POSE INFO #########################################################
        //  This is the result that everybody expects : the pose in some frame given with the input. The units are radian/meters
        //  as usual
        public Geometry.PoseWithCovarianceStampedMsg pose;

        public RecognizedObjectMsg()
        {
            this.header = new HeaderMsg();
            this.type = new ObjectTypeMsg();
            this.confidence = 0.0f;
            this.point_clouds = new Sensor.PointCloud2Msg[0];
            this.bounding_mesh = new Shape.MeshMsg();
            this.bounding_contours = new Geometry.PointMsg[0];
            this.pose = new Geometry.PoseWithCovarianceStampedMsg();
        }

        public RecognizedObjectMsg(HeaderMsg header, ObjectTypeMsg type, float confidence, Sensor.PointCloud2Msg[] point_clouds, Shape.MeshMsg bounding_mesh, Geometry.PointMsg[] bounding_contours, Geometry.PoseWithCovarianceStampedMsg pose)
        {
            this.header = header;
            this.type = type;
            this.confidence = confidence;
            this.point_clouds = point_clouds;
            this.bounding_mesh = bounding_mesh;
            this.bounding_contours = bounding_contours;
            this.pose = pose;
        }

        public static RecognizedObjectMsg Deserialize(MessageDeserializer deserializer) => new RecognizedObjectMsg(deserializer);

        private RecognizedObjectMsg(MessageDeserializer deserializer)
        {
            this.header = HeaderMsg.Deserialize(deserializer);
            this.type = ObjectTypeMsg.Deserialize(deserializer);
            deserializer.Read(out this.confidence);
            deserializer.Read(out this.point_clouds, Sensor.PointCloud2Msg.Deserialize, deserializer.ReadLength());
            this.bounding_mesh = Shape.MeshMsg.Deserialize(deserializer);
            deserializer.Read(out this.bounding_contours, Geometry.PointMsg.Deserialize, deserializer.ReadLength());
            this.pose = Geometry.PoseWithCovarianceStampedMsg.Deserialize(deserializer);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.header);
            serializer.Write(this.type);
            serializer.Write(this.confidence);
            serializer.WriteLength(this.point_clouds);
            serializer.Write(this.point_clouds);
            serializer.Write(this.bounding_mesh);
            serializer.WriteLength(this.bounding_contours);
            serializer.Write(this.bounding_contours);
            serializer.Write(this.pose);
        }

        public override string ToString()
        {
            return "RecognizedObjectMsg: " +
            "\nheader: " + header.ToString() +
            "\ntype: " + type.ToString() +
            "\nconfidence: " + confidence.ToString() +
            "\npoint_clouds: " + System.String.Join(", ", point_clouds.ToList()) +
            "\nbounding_mesh: " + bounding_mesh.ToString() +
            "\nbounding_contours: " + System.String.Join(", ", bounding_contours.ToList()) +
            "\npose: " + pose.ToString();
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
