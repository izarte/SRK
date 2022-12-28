#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct KeyCollection_t8FA8A7429EE8078896F5C464FD93A135E6412389;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct ValueCollection_tEDFD25D0AA50C38D3FB00D51EF61B66FCA695CFF;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct EntryU5BU5D_tFC47139A9B39B1F0965633F9BBBE5D802C3E7BAC;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_t38C3E81A915FA4A972A71961671771CF7096490A;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4C62B3EBAAA618F382193EBD5E9C60C3D3D567B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFC47139A9B39B1F0965633F9BBBE5D802C3E7BAC* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8FA8A7429EE8078896F5C464FD93A135E6412389* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tEDFD25D0AA50C38D3FB00D51EF61B66FCA695CFF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7  : public RuntimeObject
{
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry
struct MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE  : public RuntimeObject
{
};

struct MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::s_DeserializeFunctionsByName
	Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* ___s_DeserializeFunctionsByName_0;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7  : public RuntimeObject
{
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_AlignmentOffset
	int32_t ___m_AlignmentOffset_3;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_LengthCorrection
	int32_t ___m_LengthCorrection_4;
	// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_ListOfSerializations
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___m_ListOfSerializations_5;
};

struct MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields
{
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_Ros2Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_Ros2Header_0;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_NullByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_NullByte_1;
	// System.Byte[][] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_PaddingBytes
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___k_PaddingBytes_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t67DB9B919139A9E29784F8F171F8874E2AC9CD80 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t67DB9B919139A9E29784F8F171F8874E2AC9CD80__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t4F7A126F4D520959B475D2191A2A16F2E8D7A8FC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t4F7A126F4D520959B475D2191A2A16F2E8D7A8FC__padding[72];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t45433370C7053650AECDFDEA34433615BE89CA98  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t45433370C7053650AECDFDEA34433615BE89CA98_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::1332DF685C45A61A0AC008A6A653295B8C5655361C1D34B6304B22EC40235FB8
	__StaticArrayInitTypeSizeU3D72_t4F7A126F4D520959B475D2191A2A16F2E8D7A8FC ___1332DF685C45A61A0AC008A6A653295B8C5655361C1D34B6304B22EC40235FB8_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::4C107AA70A4BD2219AEFE5CAAACE3B4EFBABFA9BF9566D76F4D8F08E8F193461
	__StaticArrayInitTypeSizeU3D24_t67DB9B919139A9E29784F8F171F8874E2AC9CD80 ___4C107AA70A4BD2219AEFE5CAAACE3B4EFBABFA9BF9566D76F4D8F08E8F193461_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9399126946A1586D86E68585D322F85B05BA5F8611D66846AA4136952F26ECC3
	__StaticArrayInitTypeSizeU3D24_t67DB9B919139A9E29784F8F171F8874E2AC9CD80 ___9399126946A1586D86E68585D322F85B05BA5F8611D66846AA4136952F26ECC3_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::AE56C35BA13D8D3ADE2A5009BA6A14A33ADB9B50F3236441919DF885933CFAD2
	__StaticArrayInitTypeSizeU3D24_t67DB9B919139A9E29784F8F171F8874E2AC9CD80 ___AE56C35BA13D8D3ADE2A5009BA6A14A33ADB9B50F3236441919DF885933CFAD2_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::C4569305EFBE12991C7CA0A08FC42B8F94510433075286AF17B7B01C0C0E3C84
	__StaticArrayInitTypeSizeU3D24_t67DB9B919139A9E29784F8F171F8874E2AC9CD80 ___C4569305EFBE12991C7CA0A08FC42B8F94510433075286AF17B7B01C0C0E3C84_4;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF  : public RuntimeArray
{
	ALIGN_FIELD (8) Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* m_Items[1];

	inline Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;

// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4C62B3EBAAA618F382193EBD5E9C60C3D3D567B7 (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* __this, String_t* ___key0, Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*, String_t*, Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::.ctor()
inline void Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageSerializer_get_Length_m6CCAD9D17F4D661D5CF8BA14EAC2805F1E9F2A15 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessage(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessage_mEAE12B568290B207B88D61638C5C6D69CBAD176B (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* ___message0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
inline void List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___index0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF (bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, int32_t ___dataSize0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15 (int16_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B (uint16_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m61B5DA2AFDE71BC154C7E0298759972A0A422290 (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549 (float ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mDFA957490F403B0A6F73768C710649AC18DA227C (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mC88D7CEECA5C96A8A4FC1E0E55B3CC61965631AB (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, String_t* ___inputString0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::GetDeserializeFunction(System.String,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4* MessageRegistry_GetDeserializeFunction_m3605512F991606388F23D3F9C9CA3536B1614054 (String_t* ___rosMessageName0, int32_t ___subtopic1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4C62B3EBAAA618F382193EBD5E9C60C3D3D567B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4* V_0 = NULL;
	Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4* V_1 = NULL;
	{
		// s_DeserializeFunctionsByName[(int)subtopic].TryGetValue(rosMessageName, out result);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var);
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_0 = ((MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var))->___s_DeserializeFunctionsByName_0;
		int32_t L_1 = ___subtopic1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = ___rosMessageName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m4C62B3EBAAA618F382193EBD5E9C60C3D3D567B7(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m4C62B3EBAAA618F382193EBD5E9C60C3D3D567B7_RuntimeMethod_var);
		// return result;
		Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4* L_6 = V_0;
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Func_2_tC3C60B28A9C7B48CA827BD174A7C058F0AE190D4* L_7 = V_1;
		return L_7;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageRegistry__cctor_m2616A1672F2343DD8F4784122731D5E756BB0D1D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<string, Func<MessageDeserializer, Message>>[] s_DeserializeFunctionsByName = new Dictionary<string, Func<MessageDeserializer, Message>>[]{
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // default
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // response
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // goal
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // feedback
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // result
		// };
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_0 = (Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF*)(Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF*)SZArrayNew(Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF_il2cpp_TypeInfo_var, (uint32_t)5);
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_1 = L_0;
		Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* L_2 = (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)il2cpp_codegen_object_new(Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D(L_2, Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)L_2);
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_3 = L_1;
		Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* L_4 = (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)il2cpp_codegen_object_new(Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D(L_4, Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)L_4);
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_5 = L_3;
		Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* L_6 = (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)il2cpp_codegen_object_new(Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D(L_6, Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)L_6);
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_7 = L_5;
		Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* L_8 = (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)il2cpp_codegen_object_new(Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D(L_8, Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)L_8);
		Dictionary_2U5BU5D_t8C85A0431EC0F15E45B55321F9448AB743F0F1EF* L_9 = L_7;
		Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044* L_10 = (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)il2cpp_codegen_object_new(Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D(L_10, Dictionary_2__ctor_m3166B30CA39A7D4C5393F7E7C0E70A2AAFE6B04D_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Dictionary_2_tDEBD598BCE881ACA2B3DD459552B04155AFE4044*)L_10);
		((MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var))->___s_DeserializeFunctionsByName_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_t34F33A71DB051FD9AC003ECDE5AB7F8552B51ADE_il2cpp_TypeInfo_var))->___s_DeserializeFunctionsByName_0), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageSerializer_get_Length_m6CCAD9D17F4D661D5CF8BA14EAC2805F1E9F2A15 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, const RuntimeMethod* method) 
{
	{
		// public int Length => m_AlignmentOffset + m_LengthCorrection;
		int32_t L_0 = __this->___m_AlignmentOffset_3;
		int32_t L_1 = __this->___m_LengthCorrection_4;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer__ctor_m9D2C3386FEB41FB908E45DAD634EB625B605222A (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<byte[]> m_ListOfSerializations = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___m_ListOfSerializations_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ListOfSerializations_5), (void*)L_0);
		// public MessageSerializer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Clear_mFF19FC73E2C78AE0F60B579A9F6AB0C1DDE4E675 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_AlignmentOffset = 0;
		__this->___m_AlignmentOffset_3 = 0;
		// m_LengthCorrection = 0;
		__this->___m_LengthCorrection_4 = 0;
		// m_ListOfSerializations.Clear();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		NullCheck(L_0);
		List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_inline(L_0, List_1_Clear_m1E9869035CC36C3F683625D97F571B07ECCE756F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessageWithLength(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessageWithLength_mE7412C996AB3082F26A1341187ECAD7B123F1EF9 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int lengthIndex = m_ListOfSerializations.Count;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_0, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		V_0 = L_1;
		// m_ListOfSerializations.Add(null);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2 = __this->___m_ListOfSerializations_5;
		NullCheck(L_2);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_2, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_LengthCorrection += 4;
		int32_t L_3 = __this->___m_LengthCorrection_4;
		__this->___m_LengthCorrection_4 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// int preambleLength = Length;
		int32_t L_4;
		L_4 = MessageSerializer_get_Length_m6CCAD9D17F4D661D5CF8BA14EAC2805F1E9F2A15(__this, NULL);
		V_1 = L_4;
		// SerializeMessage(message);
		Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* L_5 = ___message0;
		MessageSerializer_SerializeMessage_mEAE12B568290B207B88D61638C5C6D69CBAD176B(__this, L_5, NULL);
		// m_ListOfSerializations[lengthIndex] = BitConverter.GetBytes(Length - preambleLength);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = MessageSerializer_get_Length_m6CCAD9D17F4D661D5CF8BA14EAC2805F1E9F2A15(__this, NULL);
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		NullCheck(L_6);
		List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16(L_6, L_7, L_10, List_1_set_Item_mE7F925D8AE61B8675A9B04FC14219B71ED5E1F16_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessage(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessage_mEAE12B568290B207B88D61638C5C6D69CBAD176B (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* ___message0, const RuntimeMethod* method) 
{
	{
		// m_LengthCorrection += m_AlignmentOffset;
		int32_t L_0 = __this->___m_LengthCorrection_4;
		int32_t L_1 = __this->___m_AlignmentOffset_3;
		__this->___m_LengthCorrection_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// m_AlignmentOffset = 0; // header doesn't affect alignment
		__this->___m_AlignmentOffset_3 = 0;
		// message.SerializeTo(this);
		Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* L_2 = ___message0;
		NullCheck(L_2);
		VirtualActionInvoker1< MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* >::Invoke(4 /* System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer) */, L_2, __this);
		// }
		return;
	}
}
// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageSerializer_GetBytes_m3CC6343532BA1108F2FBA4946ABEC571D763496F (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_2;
	memset((&V_2), 0, sizeof(V_2));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	{
		// byte[] serializedMessage = new byte[Length];
		int32_t L_0;
		L_0 = MessageSerializer_get_Length_m6CCAD9D17F4D661D5CF8BA14EAC2805F1E9F2A15(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// int writeIndex = 0;
		V_1 = 0;
		// foreach (byte[] statement in m_ListOfSerializations)
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2 = __this->___m_ListOfSerializations_5;
		NullCheck(L_2);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_3;
		L_3 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_2, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_2), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_001e_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
				L_4 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_2), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_3 = L_4;
				// if (statement == null)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_3;
				V_4 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_6 = V_4;
				if (!L_6)
				{
					goto IL_0033_1;
				}
			}
			{
				// continue;
				goto IL_0043_1;
			}

IL_0033_1:
			{
				// statement.CopyTo(serializedMessage, writeIndex);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
				int32_t L_9 = V_1;
				NullCheck((RuntimeArray*)L_7);
				Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, L_9, NULL);
				// writeIndex += statement.Length;
				int32_t L_10 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_3;
				NullCheck(L_11);
				V_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length))));
			}

IL_0043_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				bool L_12;
				L_12 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_2), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// return serializedMessage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		V_5 = L_13;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_5;
		return L_14;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::GetBytesSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* MessageSerializer_GetBytesSequence_m78F784B95353D7F7654CDA27FB81B147DA6BBEFC (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_1 = NULL;
	{
		// List<byte[]> result = new List<byte[]>(m_ListOfSerializations);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E(L_1, L_0, List_1__ctor_m08520634E23EA7BF64AB1B3F668355EEBA35CE2E_RuntimeMethod_var);
		V_0 = L_1;
		// return result;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SendTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SendTo_mB60CDFB229EEF97F9555EC69C044CCF58CE675FA (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// foreach (byte[] statement in m_ListOfSerializations)
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		NullCheck(L_0);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_1;
		L_1 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_0, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_0), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_0010_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
				L_2 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_0), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_1 = L_2;
				// stream.Write(statement, 0, statement.Length);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
				NullCheck(L_5);
				NullCheck(L_3);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)));
			}

IL_0024_1:
			{
				// foreach (byte[] statement in m_ListOfSerializations)
				bool L_6;
				L_6 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_0), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, int32_t ___dataSize0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF69ADC82E8359CAD7A010B2A556376D53542E30B (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* ___message0, const RuntimeMethod* method) 
{
	{
		// message.SerializeTo(this);
		Message_t4453A646726968BBBE9054B2ABF081F5D4105BF7* L_0 = ___message0;
		NullCheck(L_0);
		VirtualActionInvoker1< MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* >::Invoke(4 /* System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer) */, L_0, __this);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m04FC41C877FFA04FD2F7F0AAA856E53442492527 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		bool L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(bool);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF067E2692839331CCD797008E953CE6DE416C1DE (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(new byte[] { value });
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		uint8_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(byte);
		int32_t L_4 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m32712AECD325BBA6F4FFA7A9D135201EE74E4480 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, int8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(new byte[] { (byte)value });
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		int8_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(sbyte);
		int32_t L_4 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m52BC94AD2D61E0715033415119ED4624295B1CE2 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(short));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 2, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		int16_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(short);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m215F2FB0C95C97471D2750EBFE1F64170DED5B42 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ushort));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 2, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		uint16_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m43CB66A3347C3482B6FB2B3FD327F5327C25E18B(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(ushort);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mEE810D1E45559120A632D20D6E6C43C0832DC301 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 4, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		int32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(int);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF8E8350FC101B0F7DDA0EA7E95014CD3A05D01E0 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(uint));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 4, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		uint32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m61B5DA2AFDE71BC154C7E0298759972A0A422290(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(uint);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m97E5ED4AFBC3611502A7E6E6AB8580F9AEDE693B (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(long));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 8, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		int64_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(long);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m9EB26D44C7AEAF1ADC15E12944EF915A428A5567 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ulong));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 8, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		uint64_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(ulong);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF4F12A9E0BCB2922A7BD89A1E870FB9B02DFFD21 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(float));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 4, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(float);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m2EDCB1C8EE34CC0896805C1A522B39CD16E54C32 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(double));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 8, NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		double L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mDFA957490F403B0A6F73768C710649AC18DA227C(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_2, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(double);
		int32_t L_3 = __this->___m_AlignmentOffset_3;
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mC33A446EE10DADF90B57D2FF67AA9FA5149EAEC6 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] buffer = new byte[values.Length];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += values.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = ___values0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mC6BF492A19D15E7C2359F7899928BB0C4DFA451C (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(values);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___values0;
		NullCheck(L_0);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_0, L_1, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += values.Length;
		int32_t L_2 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___values0;
		NullCheck(L_3);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mF30EAE624CA475F156133FFFE21B9183A900AFB6 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] buffer = new byte[values.Length];
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mD4087E478C511D65E98E37CB89AB8F2750E5A8BD (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(short));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 2, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(short)];
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m1DD124F18AEE101D7E74BA47684169D6F003074D (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(ushort));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 2, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(ushort)];
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m6781339D905BCD92494974125D5B2F68FDA85564 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(int));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 4, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(int)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 4)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m06A6C258774F190B3ED20EA454034994FD376EC7 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(uint));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 4, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(uint)];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 4)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mD93683A1B7E43C457B1A8FFE13905A163216CE32 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(float));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 4, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(float)];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 4)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m90750D7AFF872F88BA6041E60EBDAF342776AF14 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(double));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 8, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(double)];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 8)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m27D7C9A945B2943BD3CE6DD188CD2409D4B459DF (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(long));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 8, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(long)];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 8)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m556CAEACD7AB879C31CEAEFBB7955EC04E408D86 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// Align(sizeof(ulong));
		MessageSerializer_Align_mF53DB94F00FC207CF7BE5358BA299A7423413691(__this, 8, NULL);
		// byte[] buffer = new byte[values.Length * sizeof(ulong)];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___values0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 8)));
		V_0 = L_1;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___values0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_5, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_7 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mC88D7CEECA5C96A8A4FC1E0E55B3CC61965631AB (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, String_t* ___inputString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] encodedString = Encoding.UTF8.GetBytes(inputString);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___inputString0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_ListOfSerializations.Add(BitConverter.GetBytes(encodedString.Length));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_ListOfSerializations.Add(encodedString);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += 4 + encodedString.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::WriteUnaligned(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_WriteUnaligned_m3D1E5D7D44AA5DDA359580844B40849E0D3F7E26 (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, String_t* ___inputString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] encodedString = Encoding.UTF8.GetBytes(inputString);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___inputString0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_ListOfSerializations.Add(BitConverter.GetBytes(encodedString.Length));
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_ListOfSerializations.Add(encodedString);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = __this->___m_ListOfSerializations_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		// m_AlignmentOffset += 4 + encodedString.Length;
		int32_t L_8 = __this->___m_AlignmentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		__this->___m_AlignmentOffset_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m98F36F3A3AC654D4834800B3789E9F54C9BC868E (MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (string entry in values)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001a;
	}

IL_0008:
	{
		// foreach (string entry in values)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Write(entry);
		String_t* L_5 = V_2;
		MessageSerializer_Write_mC88D7CEECA5C96A8A4FC1E0E55B3CC61965631AB(__this, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001a:
	{
		// foreach (string entry in values)
		int32_t L_7 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer__cctor_m5E0F42A3D5FDD563A4C4D1DD84D646D6F17782AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly byte[] k_Ros2Header = new byte[] { 0, 1, 0, 0 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		((MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var))->___k_Ros2Header_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var))->___k_Ros2Header_0), (void*)L_1);
		// static readonly byte[] k_NullByte = new byte[] { 0 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var))->___k_NullByte_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var))->___k_NullByte_1), (void*)L_2);
		// static readonly byte[][] k_PaddingBytes = new byte[][]
		// {
		//     null,
		//     new byte[]{ 0 },
		//     new byte[]{ 0, 0 },
		//     new byte[]{ 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0, 0, 0 },
		// };
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_5);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_7);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_9);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_10 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_11);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_12 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_13);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_14 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_15);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_16 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)7);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_17);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_18 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_19);
		((MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var))->___k_PaddingBytes_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_t7FF80993E196A09626AEE235BB3AF4369FCD32B7_il2cpp_TypeInfo_var))->___k_PaddingBytes_2), (void*)L_18);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m54E703679C0EA1FAD7CF90130C30420BDAE2B099 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
