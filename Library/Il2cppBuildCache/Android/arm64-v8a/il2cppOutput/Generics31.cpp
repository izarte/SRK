#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<Oculus.Interaction.HandGrab.HandGrabPoseData,System.Boolean>
struct Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449;
// System.Func`2<Oculus.Interaction.Input.HandSkeletonJoint,System.Boolean>
struct Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7;
// System.Func`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct Func_2_tB339A94B37E01030C823BB96512593067BEF80DC;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.Pose,System.Boolean>
struct Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F;
// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8;
// System.Func`2<UnityEngine.Quaternion,System.Boolean>
struct Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE;
// System.Func`2<System.Single,System.Boolean>
struct Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A;
// System.Func`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7;
// System.Func`2<System.Single,System.Object>
struct Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269;
// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8;
// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct IEnumerable_1_t55E848AF1D6A3BCBCC0BE8827B8166B71E04D36F;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct IEnumerable_1_tFB2584C832E0FF3308C31F32A5F7963DB0D54107;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Pose>
struct IEnumerable_1_tC0E566D9CB3758029A7BD9306840D835C27EEDAA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion>
struct IEnumerable_1_t00E4D64E0BBE3D90A042908257A1AEC6A6CFB4BA;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t47E725A87E8DA38B74327401954A54493CC3251E;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct IEnumerator_1_tF54C5A9BA0C2A371FE287DDE731A82CC80431492;
// System.Collections.Generic.IEnumerator`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct IEnumerator_1_tFE7DBDE0D5EFFBB7EB2335075F2150A2B831A42C;
// System.Collections.Generic.IEnumerator`1<System.Int32Enum>
struct IEnumerator_1_tD8D5B0A7736D9FAFB606AC36B0CAD1353B84C3BD;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose>
struct IEnumerator_1_t11AAF64F10DC2FFEBB16A1A8F10725A45D921C29;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Quaternion>
struct IEnumerator_1_tC0C0975A58A10C33B0978B5E9C98B5CDC1C5F3A2;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t9C426231952B863270D78D88F9DB5B4E9A16CC6A;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t01C92EC1202D8B9EF499D5B3D2B22925D411381B;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366;
// System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21;
// System.Linq.Enumerable/Iterator`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>
struct Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>
struct WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,System.Object>
struct WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>
struct WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4;
// System.Linq.Enumerable/WhereSelectListIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>
struct WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8;
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Oculus.Interaction.Input.HandSkeletonJoint[]
struct HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Oculus.Interaction.HandGrab.HandPose
struct HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// RosMessageTypes.Geometry.MPoint
struct MPoint_tB013CE89AF0BB736578136571A0061A436B3BDE5;
// RosMessageTypes.Geometry.MPoint32
struct MPoint32_t0B33A2E311D76FE2F6A8A8C812EE7F431F0CE8E7;
// RosMessageTypes.Geometry.MVector3
struct MVector3_tAEFC10F7CA69A95682AF2BDD35509959901DDD44;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// RosMessageTypes.Geometry.Point32Msg
struct Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132;
// RosMessageTypes.Geometry.PointMsg
struct PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// RosMessageTypes.Geometry.Vector3Msg
struct Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral6A13904391B9244725CDA479F017C96337B784A1;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_1_op_Implicit_m0DA704B0C64A5469648EA967313F8543FAFDAE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_1_op_Implicit_m378F7C80313C398E503028F698344584F51183BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_1_op_Implicit_m45FD2E1F2FF9B72FB71F64C54CB9EA46B19222DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658, ____items_1)); }
	inline HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* get__items_1() const { return ____items_1; }
	inline HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658_StaticFields, ____emptyArray_5)); }
	inline HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____items_1)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__items_1() const { return ____items_1; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C_StaticFields, ____emptyArray_5)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B  : public RuntimeObject
{
public:
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	int32_t ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * ___entities_11;

public:
	inline static int32_t get_offset_of_responseNode_0() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___responseNode_0)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_responseNode_0() const { return ___responseNode_0; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_responseNode_0() { return &___responseNode_0; }
	inline void set_responseNode_0(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___responseNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseNode_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_role_3() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___role_3)); }
	inline String_t* get_role_3() const { return ___role_3; }
	inline String_t** get_address_of_role_3() { return &___role_3; }
	inline void set_role_3(String_t* value)
	{
		___role_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___role_3), (void*)value);
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___start_4)); }
	inline int32_t get_start_4() const { return ___start_4; }
	inline int32_t* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(int32_t value)
	{
		___start_4 = value;
	}

	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___end_5)); }
	inline int32_t get_end_5() const { return ___end_5; }
	inline int32_t* get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(int32_t value)
	{
		___end_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_6), (void*)value);
	}

	inline static int32_t get_offset_of_body_7() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___body_7)); }
	inline String_t* get_body_7() const { return ___body_7; }
	inline String_t** get_address_of_body_7() { return &___body_7; }
	inline void set_body_7(String_t* value)
	{
		___body_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_7), (void*)value);
	}

	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___value_8)); }
	inline int32_t get_value_8() const { return ___value_8; }
	inline int32_t* get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(int32_t value)
	{
		___value_8 = value;
	}

	inline static int32_t get_offset_of_confidence_9() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___confidence_9)); }
	inline float get_confidence_9() const { return ___confidence_9; }
	inline float* get_address_of_confidence_9() { return &___confidence_9; }
	inline void set_confidence_9(float value)
	{
		___confidence_9 = value;
	}

	inline static int32_t get_offset_of_hasData_10() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___hasData_10)); }
	inline bool get_hasData_10() const { return ___hasData_10; }
	inline bool* get_address_of_hasData_10() { return &___hasData_10; }
	inline void set_hasData_10(bool value)
	{
		___hasData_10 = value;
	}

	inline static int32_t get_offset_of_entities_11() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B, ___entities_11)); }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * get_entities_11() const { return ___entities_11; }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 ** get_address_of_entities_11() { return &___entities_11; }
	inline void set_entities_11(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * value)
	{
		___entities_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_11), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8  : public RuntimeObject
{
public:
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	RuntimeObject * ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * ___entities_11;

public:
	inline static int32_t get_offset_of_responseNode_0() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___responseNode_0)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_responseNode_0() const { return ___responseNode_0; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_responseNode_0() { return &___responseNode_0; }
	inline void set_responseNode_0(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___responseNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseNode_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_role_3() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___role_3)); }
	inline String_t* get_role_3() const { return ___role_3; }
	inline String_t** get_address_of_role_3() { return &___role_3; }
	inline void set_role_3(String_t* value)
	{
		___role_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___role_3), (void*)value);
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___start_4)); }
	inline int32_t get_start_4() const { return ___start_4; }
	inline int32_t* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(int32_t value)
	{
		___start_4 = value;
	}

	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___end_5)); }
	inline int32_t get_end_5() const { return ___end_5; }
	inline int32_t* get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(int32_t value)
	{
		___end_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_6), (void*)value);
	}

	inline static int32_t get_offset_of_body_7() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___body_7)); }
	inline String_t* get_body_7() const { return ___body_7; }
	inline String_t** get_address_of_body_7() { return &___body_7; }
	inline void set_body_7(String_t* value)
	{
		___body_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_7), (void*)value);
	}

	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___value_8)); }
	inline RuntimeObject * get_value_8() const { return ___value_8; }
	inline RuntimeObject ** get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(RuntimeObject * value)
	{
		___value_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_8), (void*)value);
	}

	inline static int32_t get_offset_of_confidence_9() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___confidence_9)); }
	inline float get_confidence_9() const { return ___confidence_9; }
	inline float* get_address_of_confidence_9() { return &___confidence_9; }
	inline void set_confidence_9(float value)
	{
		___confidence_9 = value;
	}

	inline static int32_t get_offset_of_hasData_10() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___hasData_10)); }
	inline bool get_hasData_10() const { return ___hasData_10; }
	inline bool* get_address_of_hasData_10() { return &___hasData_10; }
	inline void set_hasData_10(bool value)
	{
		___hasData_10 = value;
	}

	inline static int32_t get_offset_of_entities_11() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8, ___entities_11)); }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * get_entities_11() const { return ___entities_11; }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 ** get_address_of_entities_11() { return &___entities_11; }
	inline void set_entities_11(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * value)
	{
		___entities_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_11), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA  : public RuntimeObject
{
public:
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___responseNode_0;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Facebook.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Facebook.WitAi.Data.Entities.WitEntityDataBase`1::value
	float ___value_8;
	// System.Single Facebook.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Facebook.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * ___entities_11;

public:
	inline static int32_t get_offset_of_responseNode_0() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___responseNode_0)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_responseNode_0() const { return ___responseNode_0; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_responseNode_0() { return &___responseNode_0; }
	inline void set_responseNode_0(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___responseNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseNode_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_role_3() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___role_3)); }
	inline String_t* get_role_3() const { return ___role_3; }
	inline String_t** get_address_of_role_3() { return &___role_3; }
	inline void set_role_3(String_t* value)
	{
		___role_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___role_3), (void*)value);
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___start_4)); }
	inline int32_t get_start_4() const { return ___start_4; }
	inline int32_t* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(int32_t value)
	{
		___start_4 = value;
	}

	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___end_5)); }
	inline int32_t get_end_5() const { return ___end_5; }
	inline int32_t* get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(int32_t value)
	{
		___end_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_6), (void*)value);
	}

	inline static int32_t get_offset_of_body_7() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___body_7)); }
	inline String_t* get_body_7() const { return ___body_7; }
	inline String_t** get_address_of_body_7() { return &___body_7; }
	inline void set_body_7(String_t* value)
	{
		___body_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_7), (void*)value);
	}

	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___value_8)); }
	inline float get_value_8() const { return ___value_8; }
	inline float* get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(float value)
	{
		___value_8 = value;
	}

	inline static int32_t get_offset_of_confidence_9() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___confidence_9)); }
	inline float get_confidence_9() const { return ___confidence_9; }
	inline float* get_address_of_confidence_9() { return &___confidence_9; }
	inline void set_confidence_9(float value)
	{
		___confidence_9 = value;
	}

	inline static int32_t get_offset_of_hasData_10() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___hasData_10)); }
	inline bool get_hasData_10() const { return ___hasData_10; }
	inline bool* get_address_of_hasData_10() { return &___hasData_10; }
	inline void set_hasData_10(bool value)
	{
		___hasData_10 = value;
	}

	inline static int32_t get_offset_of_entities_11() { return static_cast<int32_t>(offsetof(WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA, ___entities_11)); }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * get_entities_11() const { return ___entities_11; }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 ** get_address_of_entities_11() { return &___entities_11; }
	inline void set_entities_11(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * value)
	{
		___entities_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_11), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_t6D14476E9E861859702A3374008687CDD93E0669  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Single>
struct Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	float ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783, ___list_0)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_list_0() const { return ___list_0; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783, ___current_3)); }
	inline float get_current_3() const { return ___current_3; }
	inline float* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(float value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 
{
public:
	// T1 System.ValueTuple`5::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	RuntimeObject * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,System.Object>
struct WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D, ___source_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_source_3() const { return ___source_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D, ___predicate_4)); }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D, ___selector_5)); }
	inline Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>
struct WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A, ___predicate_4)); }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A, ___selector_5)); }
	inline Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// RosMessageTypes.Geometry.Point32Msg
struct Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132  : public Message_t6D14476E9E861859702A3374008687CDD93E0669
{
public:
	// System.Single RosMessageTypes.Geometry.Point32Msg::x
	float ___x_1;
	// System.Single RosMessageTypes.Geometry.Point32Msg::y
	float ___y_2;
	// System.Single RosMessageTypes.Geometry.Point32Msg::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};


// RosMessageTypes.Geometry.PointMsg
struct PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882  : public Message_t6D14476E9E861859702A3374008687CDD93E0669
{
public:
	// System.Double RosMessageTypes.Geometry.PointMsg::x
	double ___x_1;
	// System.Double RosMessageTypes.Geometry.PointMsg::y
	double ___y_2;
	// System.Double RosMessageTypes.Geometry.PointMsg::z
	double ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882, ___z_3)); }
	inline double get_z_3() const { return ___z_3; }
	inline double* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(double value)
	{
		___z_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// RosMessageTypes.Geometry.Vector3Msg
struct Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA  : public Message_t6D14476E9E861859702A3374008687CDD93E0669
{
public:
	// System.Double RosMessageTypes.Geometry.Vector3Msg::x
	double ___x_1;
	// System.Double RosMessageTypes.Geometry.Vector3Msg::y
	double ___y_2;
	// System.Double RosMessageTypes.Geometry.Vector3Msg::z
	double ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA, ___z_3)); }
	inline double get_z_3() const { return ___z_3; }
	inline double* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(double value)
	{
		___z_3 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015  : public WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F
{
public:
	// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray::m_List
	List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015, ___m_List_0)); }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___list_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_list_0() const { return ___list_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___current_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_current_3() const { return ___current_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___current_2)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>
struct Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65, ___current_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_current_2() const { return ___current_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F, ___current_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_current_2() const { return ___current_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___current_2 = value;
	}
};


// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>
struct Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 
{
public:
	// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1::internalVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___internalVector_0;

public:
	inline static int32_t get_offset_of_internalVector_0() { return static_cast<int32_t>(offsetof(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105, ___internalVector_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_internalVector_0() const { return ___internalVector_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_internalVector_0() { return &___internalVector_0; }
	inline void set_internalVector_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___internalVector_0 = value;
	}
};

struct Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields
{
public:
	// C Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1::coordinateSpace
	RuntimeObject * ___coordinateSpace_1;

public:
	inline static int32_t get_offset_of_coordinateSpace_1() { return static_cast<int32_t>(offsetof(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields, ___coordinateSpace_1)); }
	inline RuntimeObject * get_coordinateSpace_1() const { return ___coordinateSpace_1; }
	inline RuntimeObject ** get_address_of_coordinateSpace_1() { return &___coordinateSpace_1; }
	inline void set_coordinateSpace_1(RuntimeObject * value)
	{
		___coordinateSpace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coordinateSpace_1), (void*)value);
	}
};


// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>
struct WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259, ___source_3)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_source_3() const { return ___source_3; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259, ___predicate_4)); }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259, ___selector_5)); }
	inline Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259, ___enumerator_6)); }
	inline Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RosMessageTypes.Geometry.MPoint
struct MPoint_tB013CE89AF0BB736578136571A0061A436B3BDE5  : public PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882
{
public:

public:
};


// RosMessageTypes.Geometry.MPoint32
struct MPoint32_t0B33A2E311D76FE2F6A8A8C812EE7F431F0CE8E7  : public Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132
{
public:

public:
};


// RosMessageTypes.Geometry.MVector3
struct MVector3_tAEFC10F7CA69A95682AF2BDD35509959901DDD44  : public Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA
{
public:

public:
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>
struct Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB, ___list_0)); }
	inline List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * get_list_0() const { return ___list_0; }
	inline List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB, ___current_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_current_3() const { return ___current_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>
struct WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F  : public Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F, ___predicate_4)); }
	inline Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___enumerator_5)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B  : public Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B, ___source_3)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get_source_3() const { return ___source_3; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B, ___predicate_4)); }
	inline Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B, ___selector_5)); }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE, ___source_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_source_3() const { return ___source_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE, ___selector_5)); }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3  : public Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3, ___predicate_4)); }
	inline Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3, ___selector_5)); }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4, ___selector_5)); }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23, ___source_3)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_source_3() const { return ___source_3; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23, ___selector_5)); }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23, ___enumerator_6)); }
	inline Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A 
{
public:
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabPoseData::gripPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___gripPose_0;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabPoseData::handPose
	HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D * ___handPose_1;
	// System.Single Oculus.Interaction.HandGrab.HandGrabPoseData::scale
	float ___scale_2;

public:
	inline static int32_t get_offset_of_gripPose_0() { return static_cast<int32_t>(offsetof(HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A, ___gripPose_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_gripPose_0() const { return ___gripPose_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_gripPose_0() { return &___gripPose_0; }
	inline void set_gripPose_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___gripPose_0 = value;
	}

	inline static int32_t get_offset_of_handPose_1() { return static_cast<int32_t>(offsetof(HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A, ___handPose_1)); }
	inline HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D * get_handPose_1() const { return ___handPose_1; }
	inline HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D ** get_address_of_handPose_1() { return &___handPose_1; }
	inline void set_handPose_1(HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D * value)
	{
		___handPose_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPose_1), (void*)value);
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A_marshaled_pinvoke
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___gripPose_0;
	HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D * ___handPose_1;
	float ___scale_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A_marshaled_com
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___gripPose_0;
	HandPose_tB36766A715DADB4441AEE8D28B78D47EF3973E7D * ___handPose_1;
	float ___scale_2;
};

// Oculus.Interaction.Input.HandSkeletonJoint
struct HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 
{
public:
	// System.Int32 Oculus.Interaction.Input.HandSkeletonJoint::parent
	int32_t ___parent_0;
	// UnityEngine.Pose Oculus.Interaction.Input.HandSkeletonJoint::pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3, ___parent_0)); }
	inline int32_t get_parent_0() const { return ___parent_0; }
	inline int32_t* get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(int32_t value)
	{
		___parent_0 = value;
	}

	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3, ___pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_pose_1() const { return ___pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___pose_1 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Input.HandSkeletonJoint>
struct Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6, ___list_0)); }
	inline List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * get_list_0() const { return ___list_0; }
	inline List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6, ___current_3)); }
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  get_current_3() const { return ___current_3; }
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  value)
	{
		___current_3 = value;
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Oculus.Interaction.HandGrab.HandGrabPoseData,System.Boolean>
struct Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Oculus.Interaction.Input.HandSkeletonJoint,System.Boolean>
struct Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct Func_2_tB339A94B37E01030C823BB96512593067BEF80DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Pose,System.Boolean>
struct Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Quaternion,System.Boolean>
struct Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Single,System.Boolean>
struct Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Single,System.Object>
struct Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21, ___current_2)); }
	inline HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  get_current_2() const { return ___current_2; }
	inline HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___handPose_1), (void*)NULL);
	}
};


// System.Linq.Enumerable/Iterator`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26, ___current_2)); }
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  get_current_2() const { return ___current_2; }
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D  : public Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D, ___source_3)); }
	inline List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * get_source_3() const { return ___source_3; }
	inline List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D, ___predicate_4)); }
	inline Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D, ___selector_5)); }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D, ___enumerator_6)); }
	inline Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11, ___predicate_4)); }
	inline Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD  : public Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD, ___predicate_4)); }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648  : public Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648, ___source_3)); }
	inline HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* get_source_3() const { return ___source_3; }
	inline HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648, ___predicate_4)); }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648, ___selector_5)); }
	inline Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB339A94B37E01030C823BB96512593067BEF80DC ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75, ___selector_5)); }
	inline Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4, ___selector_5)); }
	inline Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291, ___source_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_source_3() const { return ___source_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291, ___predicate_4)); }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291, ___selector_5)); }
	inline Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB  : public Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB, ___predicate_4)); }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB, ___selector_5)); }
	inline Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB339A94B37E01030C823BB96512593067BEF80DC ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E, ___selector_5)); }
	inline Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379, ___selector_5)); }
	inline Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1, ___predicate_4)); }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1, ___selector_5)); }
	inline Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>
struct WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F  : public Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F, ___source_3)); }
	inline List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * get_source_3() const { return ___source_3; }
	inline List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F, ___predicate_4)); }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F, ___selector_5)); }
	inline Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB339A94B37E01030C823BB96512593067BEF80DC ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F, ___enumerator_6)); }
	inline Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D, ___selector_5)); }
	inline Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF, ___selector_5)); }
	inline Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>
struct WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A  : public Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A, ___source_3)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_source_3() const { return ___source_3; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A, ___predicate_4)); }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A, ___selector_5)); }
	inline Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A, ___enumerator_6)); }
	inline Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Oculus.Interaction.Input.HandSkeletonJoint[]
struct HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  m_Items[1];

public:
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  m_Items[1];

public:
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_set_x_m9E355880DBC555EBA83F73053EFB63A0CDF9A76D_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_set_y_m28C7552B511DEF702576A2D3E7C26A8912A5AC2E_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_set_z_m0CC7D838436B45CAAEF5EA30584349588C47F4CC_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1__ctor_m8B5D20BCAD74B8A75940DA249B46D2AD55815E66_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec_ruf0, const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_toUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_1_get_toUnity_mA1C496BC24EEAA8B2DDA6C9E5AC12BF8F993F1E5_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_normalized_m337F74F42BBA049AFC528793853EB5E098FED786_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_magnitude_mE9B26B4ED462FF0D1BE7D5E749EBC094D336EFA9_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_sqrMagnitude_m7682F7F76FEEFF2677FE1D6305E1A1B19F9DFFA3_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_1_Equals_mEB23C752F18499D14B920813926F0E9DC7D2907D_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Equals(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_1_Equals_m4C69144E80B25ED801DD48BA2DE93B7F3A63C9E3_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___other0, const RuntimeMethod* method);
// System.Int32 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_1_GetHashCode_m3866FD2CF2550E2FD1A33FCBC636D6FCF1B0A2FB_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_Normalize_m58BEA27AE4207F9EC7D8059FD9F0937457C2D28A_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Scale(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_Scale_mFE80925852A1622A61D313C78EA961C606A3A173_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___scale0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Set(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_Set_mDF8DB9E903541D91326CB90DD4C3BBB1B70C2932_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_1_ToString_mB3C5F3FB83DA97DDFB1F86CB02C3068BF1A99FFD_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_1_ToString_mF29841AFE42DBA5DB6C3275F01E227A16D195134_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method);
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_1_ToString_mF9CEA1B253D07349BBA6BB62B11A6438421221D4_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Input.HandSkeletonJoint>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  Enumerator_get_Current_mFF6988CD9E5309A0577F8335E26AA7191198035F_gshared_inline (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Input.HandSkeletonJoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7104D812814B404A855DFD8BCE0C67FD044F6377_gshared (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Enumerator_get_Current_mFDB2FBE724A02C5CAFAE108E12A75676EFE43A5F_gshared_inline (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF9007138A9A75F58C71B24612243436A5852F2E8_gshared (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_m1DC0B40110173B7E2D13319164F7657C3BE3536D_gshared_inline (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF6D031AEDDDEEAF750E0BFE7866FBBA9C9752C7E_gshared (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);

// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared)(__this, ___comparer0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared)(__this, method);
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_x()
inline float Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500_gshared)(__this, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_x(System.Single)
inline void Vector3_1_set_x_m9E355880DBC555EBA83F73053EFB63A0CDF9A76D (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, float, const RuntimeMethod*))Vector3_1_set_x_m9E355880DBC555EBA83F73053EFB63A0CDF9A76D_gshared)(__this, ___value0, method);
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_y()
inline float Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642_gshared)(__this, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_y(System.Single)
inline void Vector3_1_set_y_m28C7552B511DEF702576A2D3E7C26A8912A5AC2E (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, float, const RuntimeMethod*))Vector3_1_set_y_m28C7552B511DEF702576A2D3E7C26A8912A5AC2E_gshared)(__this, ___value0, method);
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_z()
inline float Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED_gshared)(__this, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_z(System.Single)
inline void Vector3_1_set_z_m0CC7D838436B45CAAEF5EA30584349588C47F4CC (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, float, const RuntimeMethod*))Vector3_1_set_z_m0CC7D838436B45CAAEF5EA30584349588C47F4CC_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.ctor(System.Single,System.Single,System.Single)
inline void Vector3_1__ctor_m8B5D20BCAD74B8A75940DA249B46D2AD55815E66 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, float, float, float, const RuntimeMethod*))Vector3_1__ctor_m8B5D20BCAD74B8A75940DA249B46D2AD55815E66_gshared)(__this, ___x0, ___y1, ___z2, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.ctor(UnityEngine.Vector3)
inline void Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec_ruf0, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96_gshared)(__this, ___vec_ruf0, method);
}
// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_toUnity()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_1_get_toUnity_mA1C496BC24EEAA8B2DDA6C9E5AC12BF8F993F1E5 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_toUnity_mA1C496BC24EEAA8B2DDA6C9E5AC12BF8F993F1E5_gshared)(__this, method);
}
// System.Void RosMessageTypes.Geometry.PointMsg::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointMsg__ctor_mDEC658D70128F1B1EF373B73F8E52602032D7867 (PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method);
// System.Void RosMessageTypes.Geometry.Point32Msg::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point32Msg__ctor_mC2F3CDC3EAB498772557F2523155BC8ADFBEEB4E (Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void RosMessageTypes.Geometry.Vector3Msg::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Msg__ctor_m8505377EE254649C60F7DCDBB48C260822DEDBD3 (Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_m60959C1C1EF0F694D71E1569160D40B1DA768931 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mB8CFA03BACFE164B70F7895972737A3956D41B48 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mB2BD3B231147DBF6ABD3A5CF8AAD4FD39896EF95 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_m24F1287CA7D39720216FD130DE1490BB26AFCF83 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_mFA8E564BB81364E4E65551816F3631176E7F58E7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_negativeInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_negativeInfinity_m7DD3550D7542E7D015127ECA11C40C1120F1EAAB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_positiveInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_positiveInfinity_m44B937156EF008C8823A4149D405A8B0E265D80B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_normalized()
inline Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_normalized_m337F74F42BBA049AFC528793853EB5E098FED786 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_normalized_m337F74F42BBA049AFC528793853EB5E098FED786_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_magnitude()
inline float Vector3_1_get_magnitude_mE9B26B4ED462FF0D1BE7D5E749EBC094D336EFA9 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_magnitude_mE9B26B4ED462FF0D1BE7D5E749EBC094D336EFA9_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_sqrMagnitude()
inline float Vector3_1_get_sqrMagnitude_m7682F7F76FEEFF2677FE1D6305E1A1B19F9DFFA3 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_get_sqrMagnitude_m7682F7F76FEEFF2677FE1D6305E1A1B19F9DFFA3_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_mFE4B9D0E5EBD02D0684598D486833321336732B3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ClampMagnitude_m11A2FD0BD3D54B25CEE4657DF713A5C8C60B0297 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_mF3F4CE6E7142432B36BF4F906A42103A474C0BCD (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_mFD4B4AD2E4B64CEB253946317B11C4C83CB62B1C_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m05270DE1691E3EABA0DC5E7A291D52A445BDDD9F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Max_m963E0011CD55D865E1DE0C5E7D33715B9E7C60B7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Min_mAB96EA6DFFA1BB1C3EBB27535B7FBAF4898A9661_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_m456966657D481627F8CFE8CB3BDDCF1F12EB4494 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m338281DF3B66D118B717702C8379761D0B6457E4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize_m92DFC5F8390151DC3549F769BB4F999FCE0F2790 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___tangent1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___binormal2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize_mCC9CE49AEAB946CB7C478F71D510B2DFC101614B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___tangent1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Project_mFFD5EB4C76D953A44C6A4C13638DB6E54ACE447F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onNormal1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ProjectOnPlane_mAACF0ED028A44FDE556EC25AAE0B4D2EAEF5950E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___planeNormal1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Reflect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Reflect_mDA0BFFC63BD745F7F35A883BC74C951E8A4ABC2C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_RotateTowards_mCD213E789C106D6BB3FE0BA96CC7308005E0BA29 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m3D347A2431E7B53FF18622C0249F38725130ECCE_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m5A39ACDB78D84D04ADC5EB2EA76CB2E2DA4FEFCD (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Slerp_m0AB4766A4D584C3FCF048D1F196B4A66DD7E8FEB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SlerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SlerpUnclamped_mFB883AD89894A0A5DEB45C5A3C1E5A95741B06D9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_mCC059D8E082035951A03C190A87A5CFEC02C9452 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_mC893838C9830D080A110577FAE9C8A157E8F68F7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mFB9023288188C7A19F1CE3F621E2B56848352523_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Equals(System.Object)
inline bool Vector3_1_Equals_mEB23C752F18499D14B920813926F0E9DC7D2907D (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, RuntimeObject *, const RuntimeMethod*))Vector3_1_Equals_mEB23C752F18499D14B920813926F0E9DC7D2907D_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Equals(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
inline bool Vector3_1_Equals_m4C69144E80B25ED801DD48BA2DE93B7F3A63C9E3 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 , const RuntimeMethod*))Vector3_1_Equals_m4C69144E80B25ED801DD48BA2DE93B7F3A63C9E3_gshared)(__this, ___other0, method);
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::GetHashCode()
inline int32_t Vector3_1_GetHashCode_m3866FD2CF2550E2FD1A33FCBC636D6FCF1B0A2FB (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_GetHashCode_m3866FD2CF2550E2FD1A33FCBC636D6FCF1B0A2FB_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Normalize()
inline void Vector3_1_Normalize_m58BEA27AE4207F9EC7D8059FD9F0937457C2D28A (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_Normalize_m58BEA27AE4207F9EC7D8059FD9F0937457C2D28A_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_m52F0C3F26DBEE84B5E292F2E084DA2F7329B6EFF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Scale(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
inline void Vector3_1_Scale_mFE80925852A1622A61D313C78EA961C606A3A173 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___scale0, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 , const RuntimeMethod*))Vector3_1_Scale_mFE80925852A1622A61D313C78EA961C606A3A173_gshared)(__this, ___scale0, method);
}
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Set(System.Single,System.Single,System.Single)
inline void Vector3_1_Set_mDF8DB9E903541D91326CB90DD4C3BBB1B70C2932 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	((  void (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, float, float, float, const RuntimeMethod*))Vector3_1_Set_mDF8DB9E903541D91326CB90DD4C3BBB1B70C2932_gshared)(__this, ___newX0, ___newY1, ___newZ2, method);
}
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString(System.String)
inline String_t* Vector3_1_ToString_mB3C5F3FB83DA97DDFB1F86CB02C3068BF1A99FFD (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, String_t*, const RuntimeMethod*))Vector3_1_ToString_mB3C5F3FB83DA97DDFB1F86CB02C3068BF1A99FFD_gshared)(__this, ___format0, method);
}
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString()
inline String_t* Vector3_1_ToString_mF29841AFE42DBA5DB6C3275F01E227A16D195134 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, const RuntimeMethod*))Vector3_1_ToString_mF29841AFE42DBA5DB6C3275F01E227A16D195134_gshared)(__this, method);
}
// System.String UnityEngine.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString(System.String,System.IFormatProvider)
inline String_t* Vector3_1_ToString_mF9CEA1B253D07349BBA6BB62B11A6438421221D4 (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *, String_t*, RuntimeObject*, const RuntimeMethod*))Vector3_1_ToString_mF9CEA1B253D07349BBA6BB62B11A6438421221D4_gshared)(__this, ___format0, ___formatProvider1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mBA12D08F4D51A4BC2E9841D42591B6208FF4B12E_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m3F83C01FE6C6B60CD27D44AD10406E1F604C2D08 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201 (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Input.HandSkeletonJoint>::get_Current()
inline HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  Enumerator_get_Current_mFF6988CD9E5309A0577F8335E26AA7191198035F_inline (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * __this, const RuntimeMethod* method)
{
	return ((  HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  (*) (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *, const RuntimeMethod*))Enumerator_get_Current_mFF6988CD9E5309A0577F8335E26AA7191198035F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Input.HandSkeletonJoint>::MoveNext()
inline bool Enumerator_MoveNext_m7104D812814B404A855DFD8BCE0C67FD044F6377 (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *, const RuntimeMethod*))Enumerator_MoveNext_m7104D812814B404A855DFD8BCE0C67FD044F6377_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
inline int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *, const RuntimeMethod*))Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
inline bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *, const RuntimeMethod*))Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::get_Current()
inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Enumerator_get_Current_mFDB2FBE724A02C5CAFAE108E12A75676EFE43A5F_inline (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * __this, const RuntimeMethod* method)
{
	return ((  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  (*) (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *, const RuntimeMethod*))Enumerator_get_Current_mFDB2FBE724A02C5CAFAE108E12A75676EFE43A5F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Pose>::MoveNext()
inline bool Enumerator_MoveNext_mF9007138A9A75F58C71B24612243436A5852F2E8 (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *, const RuntimeMethod*))Enumerator_MoveNext_mF9007138A9A75F58C71B24612243436A5852F2E8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
inline float Enumerator_get_Current_m1DC0B40110173B7E2D13319164F7657C3BE3536D_inline (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *, const RuntimeMethod*))Enumerator_get_Current_m1DC0B40110173B7E2D13319164F7657C3BE3536D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
inline bool Enumerator_MoveNext_mF6D031AEDDDEEAF750E0BFE7866FBBA9C9752C7E (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *, const RuntimeMethod*))Enumerator_MoveNext_mF6D031AEDDDEEAF750E0BFE7866FBBA9C9752C7E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735 (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared)(__this, method);
}
// System.String Facebook.WitAi.Lib.WitResponseNode::op_Implicit(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794 (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___d0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_m2685AF38FD5B92F51F6A07F4B770DF34F4A53FE6 (float ___a0, float ___b1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		return (bool)L_27;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m86ED3134FB107447E738C04EAF8CF4E289AF0E7F((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		return (int32_t)L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_mAA4C35AB87E06C9A197E49DD1A6C0EA3D53D8D9C((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, /*hidden argument*/NULL);
		return (int32_t)L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public float x { get => internalVector.x; set => internalVector.x = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = (float)L_0->get_x_2();
		return (float)L_1;
	}
}
IL2CPP_EXTERN_C  float Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_set_x_m9E355880DBC555EBA83F73053EFB63A0CDF9A76D_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float x { get => internalVector.x; set => internalVector.x = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = ___value0;
		L_0->set_x_2(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1_set_x_m9E355880DBC555EBA83F73053EFB63A0CDF9A76D_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_set_x_m9E355880DBC555EBA83F73053EFB63A0CDF9A76D(_thisAdjusted, ___value0, method);
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public float y { get => internalVector.y; set => internalVector.y = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = (float)L_0->get_y_3();
		return (float)L_1;
	}
}
IL2CPP_EXTERN_C  float Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_set_y_m28C7552B511DEF702576A2D3E7C26A8912A5AC2E_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float y { get => internalVector.y; set => internalVector.y = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = ___value0;
		L_0->set_y_3(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1_set_y_m28C7552B511DEF702576A2D3E7C26A8912A5AC2E_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_set_y_m28C7552B511DEF702576A2D3E7C26A8912A5AC2E(_thisAdjusted, ___value0, method);
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public float z { get => internalVector.z; set => internalVector.z = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = (float)L_0->get_z_4();
		return (float)L_1;
	}
}
IL2CPP_EXTERN_C  float Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::set_z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_set_z_m0CC7D838436B45CAAEF5EA30584349588C47F4CC_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float z { get => internalVector.z; set => internalVector.z = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = ___value0;
		L_0->set_z_4(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1_set_z_m0CC7D838436B45CAAEF5EA30584349588C47F4CC_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_set_z_m0CC7D838436B45CAAEF5EA30584349588C47F4CC(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1__ctor_m8B5D20BCAD74B8A75940DA249B46D2AD55815E66_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		// internalVector = new Vector3(x, y, z);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (float)L_0, (float)L_1, (float)L_2, /*hidden argument*/NULL);
		__this->set_internalVector_0(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1__ctor_m8B5D20BCAD74B8A75940DA249B46D2AD55815E66_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1__ctor_m8B5D20BCAD74B8A75940DA249B46D2AD55815E66(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec_ruf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internalVector = coordinateSpace.ConvertFromRUF(vec_ruf);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vec_ruf0;
		NullCheck((RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.ICoordinateSpace::ConvertFromRUF(UnityEngine.Vector3) */, ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var, (RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0);
		__this->set_internalVector_0(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec_ruf0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96(_thisAdjusted, ___vec_ruf0, method);
}
// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_toUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_1_get_toUnity_mA1C496BC24EEAA8B2DDA6C9E5AC12BF8F993F1E5_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 toUnity => coordinateSpace.ConvertToRUF(internalVector);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_internalVector_0();
		NullCheck((RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(1 /* UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.ICoordinateSpace::ConvertToRUF(UnityEngine.Vector3) */, ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var, (RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_1_get_toUnity_mA1C496BC24EEAA8B2DDA6C9E5AC12BF8F993F1E5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = Vector3_1_get_toUnity_mA1C496BC24EEAA8B2DDA6C9E5AC12BF8F993F1E5(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Explicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_Explicit_mC48EEC1289647B484742D96C89C1CF47E679B11B_gshared (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(coordinateSpace.ConvertFromRUF(vec));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vec0;
		NullCheck((RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.ICoordinateSpace::ConvertFromRUF(UnityEngine.Vector3) */, ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var, (RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2;
		L_2 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_3 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_3;
	}
}
// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Explicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_1_op_Explicit_mC80C53516CF2A45D56493DDF3F2F6653FE3CB37F_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___vec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return coordinateSpace.ConvertToRUF(vec.internalVector);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___vec0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		NullCheck((RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(1 /* UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.ICoordinateSpace::ConvertToRUF(UnityEngine.Vector3) */, ICoordinateSpace_t919D8665FF19C5CF1D272F99F7E69EB2B4F72771_il2cpp_TypeInfo_var, (RuntimeObject*)(*(((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_coordinateSpace_1())), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1);
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::MakeInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_MakeInternal_mE8274D3135FFE66929718450719ABCB95CF1E00D_gshared (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3<C> result = new Vector3<C>();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 ));
		// result.internalVector = vec;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vec0;
		(&V_0)->set_internalVector_0(L_0);
		// return result;
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1 = V_0;
		V_1 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = V_1;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_2;
	}
}
// RosMessageTypes.Geometry.PointMsg Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Implicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882 * Vector3_1_op_Implicit_m13CA1C6AA234742A681F9E120D9EDE26F0BA1364_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rvec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator PointMsg(Vector3<C> rvec) => new PointMsg(rvec.x, rvec.y, rvec.z);
		float L_0;
		L_0 = Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		float L_1;
		L_1 = Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		float L_2;
		L_2 = Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882 * L_3 = (PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882 *)il2cpp_codegen_object_new(PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882_il2cpp_TypeInfo_var);
		PointMsg__ctor_mDEC658D70128F1B1EF373B73F8E52602032D7867(L_3, (double)((double)((double)L_0)), (double)((double)((double)L_1)), (double)((double)((double)L_2)), /*hidden argument*/NULL);
		return (PointMsg_tD99F5217236355C97AD15CF6D7DF47B2B7937882 *)L_3;
	}
}
// RosMessageTypes.Geometry.Point32Msg Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Implicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132 * Vector3_1_op_Implicit_m74A94C5A02E81600467536E3B165E1A12DCB9290_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rvec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator Point32Msg(Vector3<C> rvec) => new Point32Msg(rvec.x, rvec.y, rvec.z);
		float L_0;
		L_0 = Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		float L_1;
		L_1 = Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		float L_2;
		L_2 = Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132 * L_3 = (Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132 *)il2cpp_codegen_object_new(Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132_il2cpp_TypeInfo_var);
		Point32Msg__ctor_mC2F3CDC3EAB498772557F2523155BC8ADFBEEB4E(L_3, (float)L_0, (float)L_1, (float)L_2, /*hidden argument*/NULL);
		return (Point32Msg_t0D239E53ED408C6D897890BB930819B0A8E70132 *)L_3;
	}
}
// RosMessageTypes.Geometry.Vector3Msg Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Implicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA * Vector3_1_op_Implicit_m217AD4C623F651697A435D18CFBB3FBDAB39819E_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rvec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator Vector3Msg(Vector3<C> rvec) => new Vector3Msg(rvec.x, rvec.y, rvec.z);
		float L_0;
		L_0 = Vector3_1_get_x_m29CB7E82460EB816861936F98B61B5E4B5816500((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		float L_1;
		L_1 = Vector3_1_get_y_m927C258142B6956E4B69957A8FBB5E3AE96A4642((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		float L_2;
		L_2 = Vector3_1_get_z_m9321DD55B4342D45D6EF2447228D42B18050E6ED((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)(&___rvec0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA * L_3 = (Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA *)il2cpp_codegen_object_new(Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA_il2cpp_TypeInfo_var);
		Vector3Msg__ctor_m8505377EE254649C60F7DCDBB48C260822DEDBD3(L_3, (double)((double)((double)L_0)), (double)((double)((double)L_1)), (double)((double)((double)L_2)), /*hidden argument*/NULL);
		return (Vector3Msg_t37FBA66C9D0C3AF0F9169804CB9D39CF1B4997CA *)L_3;
	}
}
// RosMessageTypes.Geometry.MPoint Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Implicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MPoint_tB013CE89AF0BB736578136571A0061A436B3BDE5 * Vector3_1_op_Implicit_m45FD2E1F2FF9B72FB71F64C54CB9EA46B19222DD_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rvec0, const RuntimeMethod* method)
{
	{
		// public static implicit operator MPoint(Vector3<C> rvec) => throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_1_op_Implicit_m45FD2E1F2FF9B72FB71F64C54CB9EA46B19222DD_RuntimeMethod_var)));
	}
}
// RosMessageTypes.Geometry.MPoint32 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Implicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MPoint32_t0B33A2E311D76FE2F6A8A8C812EE7F431F0CE8E7 * Vector3_1_op_Implicit_m378F7C80313C398E503028F698344584F51183BB_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rvec0, const RuntimeMethod* method)
{
	{
		// public static implicit operator MPoint32(Vector3<C> rvec) => throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_1_op_Implicit_m378F7C80313C398E503028F698344584F51183BB_RuntimeMethod_var)));
	}
}
// RosMessageTypes.Geometry.MVector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Implicit(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MVector3_tAEFC10F7CA69A95682AF2BDD35509959901DDD44 * Vector3_1_op_Implicit_m0DA704B0C64A5469648EA967313F8543FAFDAE18_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rvec0, const RuntimeMethod* method)
{
	{
		// public static implicit operator MVector3(Vector3<C> rvec) => throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_1_op_Implicit_m0DA704B0C64A5469648EA967313F8543FAFDAE18_RuntimeMethod_var)));
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_right_mD343C588DEB12E483F4C84BA60DB5611468DDCC5_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> right => new Vector3<C>(Vector3.right);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_right_m60959C1C1EF0F694D71E1569160D40B1DA768931(/*hidden argument*/NULL);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96((&L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_left_mFEAD53FFE4C23FCEC09F4586EC16E572EAF6924A_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> left => new Vector3<C>(Vector3.left);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_left_mB8CFA03BACFE164B70F7895972737A3956D41B48(/*hidden argument*/NULL);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96((&L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_up_m671167EA06F0B0565B79CB615B376FB0E4422F2F_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> up => new Vector3<C>(Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A(/*hidden argument*/NULL);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96((&L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_back_mB393EBEDDB239BED2B1CCDBC6E082DDC0DCC65B3_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> back => new Vector3<C>(Vector3.back);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_back_mB2BD3B231147DBF6ABD3A5CF8AAD4FD39896EF95(/*hidden argument*/NULL);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96((&L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_forward_m06CD6820DA81A8EEC85BB912801788004A3AC576_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> forward => new Vector3<C>(Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50(/*hidden argument*/NULL);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96((&L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_down_mF7E4A12FA02578E6F8E51E009A9B9E6DCF52B3B2_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> down => new Vector3<C>(Vector3.down);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_down_m24F1287CA7D39720216FD130DE1490BB26AFCF83(/*hidden argument*/NULL);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3_1__ctor_mCAF360737F825E37A83AD06514F6512B0F12DB96((&L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_one_m5297B50302B2216D7696ABFCA02833416976C5A7_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> one => MakeInternal(Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_one_mFA8E564BB81364E4E65551816F3631176E7F58E7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		L_1 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_zero_m458D8F5C9CAA62D9364C684474ABC0216CC7DF1B_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> zero => MakeInternal(Vector3.zero);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		L_1 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_negativeInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_negativeInfinity_m5DB9C06A02111C55B8E102AFB35F97CC96CF9855_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> negativeInfinity => MakeInternal(Vector3.negativeInfinity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_negativeInfinity_m7DD3550D7542E7D015127ECA11C40C1120F1EAAB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		L_1 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_positiveInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_positiveInfinity_mD23183092F49EC08352457FB5D3BEE7CA34D3BAE_gshared (const RuntimeMethod* method)
{
	{
		// public static Vector3<C> positiveInfinity => MakeInternal(Vector3.positiveInfinity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_positiveInfinity_m44B937156EF008C8823A4149D405A8B0E265D80B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1;
		L_1 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_1;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_normalized_m337F74F42BBA049AFC528793853EB5E098FED786_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3<C> normalized => MakeInternal(internalVector.normalized);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2;
		L_2 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_get_normalized_m337F74F42BBA049AFC528793853EB5E098FED786_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  _returnValue;
	_returnValue = Vector3_1_get_normalized_m337F74F42BBA049AFC528793853EB5E098FED786(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_magnitude_mE9B26B4ED462FF0D1BE7D5E749EBC094D336EFA9_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public float magnitude => internalVector.magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1;
		L_1 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		return (float)L_1;
	}
}
IL2CPP_EXTERN_C  float Vector3_1_get_magnitude_mE9B26B4ED462FF0D1BE7D5E749EBC094D336EFA9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_1_get_magnitude_mE9B26B4ED462FF0D1BE7D5E749EBC094D336EFA9(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_get_sqrMagnitude_m7682F7F76FEEFF2677FE1D6305E1A1B19F9DFFA3_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public float sqrMagnitude => internalVector.sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		return (float)L_1;
	}
}
IL2CPP_EXTERN_C  float Vector3_1_get_sqrMagnitude_m7682F7F76FEEFF2677FE1D6305E1A1B19F9DFFA3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_1_get_sqrMagnitude_m7682F7F76FEEFF2677FE1D6305E1A1B19F9DFFA3(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Angle(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_Angle_m7CF3FA9D67CD2B68A9BCB35B305DD5B93E234DCC_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___from0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___to1, const RuntimeMethod* method)
{
	{
		// public static float Angle(Vector3<C> from, Vector3<C> to) => Vector3.Angle(from.internalVector, to.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___to1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4;
		L_4 = Vector3_Angle_mFE4B9D0E5EBD02D0684598D486833321336732B3((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ClampMagnitude(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_ClampMagnitude_m604102834F723B7A7E19A0A8ABF42D391C25201E_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___vector0, float ___maxLength1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.ClampMagnitude(vector.internalVector, maxLength));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		float L_2 = ___maxLength1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_ClampMagnitude_m11A2FD0BD3D54B25CEE4657DF713A5C8C60B0297((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (float)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_4;
		L_4 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Cross(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Cross_m20ADB9B74429924484B0696C68C20CCE5D268843_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___lhs0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rhs1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.Cross(lhs.internalVector, rhs.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Cross_mF3F4CE6E7142432B36BF4F906A42103A474C0BCD((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
	}
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Distance(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_Distance_mE04A7B35C9E557508193843686FE126792961A98_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, const RuntimeMethod* method)
{
	{
		// public static float Distance(Vector3<C> a, Vector3<C> b) => Vector3.Distance(a.internalVector, b.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4;
		L_4 = Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Dot(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_Dot_m8B124C62FB20B1F02701CB97F43898AA65F613F0_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___lhs0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static float Dot(Vector3<C> lhs, Vector3<C> rhs) => Vector3.Dot(lhs.internalVector, rhs.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4;
		L_4 = Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		return (float)L_4;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Lerp(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Lerp_mF3C18BDFD3B01C09FBC51535A3C802C5E4EF736B_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.Lerp(a.internalVector, b.internalVector, t));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6;
		L_6 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_7 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_7;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::LerpUnclamped(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_LerpUnclamped_m8D3D364E0D6552C087AEE41214E2968CA4DD2875_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.LerpUnclamped(a.internalVector, b.internalVector, t));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_LerpUnclamped_mFD4B4AD2E4B64CEB253946317B11C4C83CB62B1C_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6;
		L_6 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_7 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_7;
	}
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Magnitude(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_Magnitude_mCDC91B66ED37C3D3EF5FBF546D0EC36D83673569_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___vector0, const RuntimeMethod* method)
{
	{
		// public static float Magnitude(Vector3<C> vector) => Vector3.Magnitude(vector.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		float L_2;
		L_2 = Vector3_Magnitude_m05270DE1691E3EABA0DC5E7A291D52A445BDDD9F_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/NULL);
		return (float)L_2;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Max(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Max_m7E5873E1F5C0D1A5B837B14951AB5C4B123CB7DB_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___lhs0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static Vector3<C> Max(Vector3<C> lhs, Vector3<C> rhs) => MakeInternal(Vector3.Max(lhs.internalVector, rhs.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Max_m963E0011CD55D865E1DE0C5E7D33715B9E7C60B7_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Min(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Min_m04F422303A58268EBA1A9096EA9A97521E951686_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___lhs0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static Vector3<C> Min(Vector3<C> lhs, Vector3<C> rhs) => MakeInternal(Vector3.Min(lhs.internalVector, rhs.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Min_mAB96EA6DFFA1BB1C3EBB27535B7FBAF4898A9661_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::MoveTowards(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_MoveTowards_mA4CE4F61F50EE42D2F9302C9170E4BD00078E2B0_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___current0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.MoveTowards(current.internalVector, target.internalVector, maxDistanceDelta));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___current0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_MoveTowards_m456966657D481627F8CFE8CB3BDDCF1F12EB4494((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6;
		L_6 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_7 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_7;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Normalize(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Normalize_mC13486061999C01468ACA4BE929405C8C75B486A_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___value0, const RuntimeMethod* method)
{
	{
		// public static Vector3<C> Normalize(Vector3<C> value) => MakeInternal(Vector3.Normalize(value.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_Normalize_m338281DF3B66D118B717702C8379761D0B6457E4((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_3;
		L_3 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_3;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::OrthoNormalize(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_OrthoNormalize_m833615D4DC869780A9CDEB1BE75FA19D1631157D_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___normal0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___tangent1, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___binormal2, const RuntimeMethod* method)
{
	{
		// Vector3.OrthoNormalize(ref normal.internalVector, ref tangent.internalVector, ref binormal.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_0 = ___normal0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0->get_address_of_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_2 = ___tangent1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_2->get_address_of_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_4 = ___binormal2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4->get_address_of_internalVector_0();
		Vector3_OrthoNormalize_m92DFC5F8390151DC3549F769BB4F999FCE0F2790((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::OrthoNormalize(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_OrthoNormalize_mC3CA9C5F0C7D3B81BAFA288469379155D89E17FE_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___normal0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___tangent1, const RuntimeMethod* method)
{
	{
		// Vector3.OrthoNormalize(ref normal.internalVector, ref tangent.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_0 = ___normal0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0->get_address_of_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_2 = ___tangent1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_2->get_address_of_internalVector_0();
		Vector3_OrthoNormalize_mCC9CE49AEAB946CB7C478F71D510B2DFC101614B((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Project(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Project_m8146CDD3C146C55C894452B2D0AE289550E22A42_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___vector0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___onNormal1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.Project(vector.internalVector, onNormal.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___onNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Project_mFFD5EB4C76D953A44C6A4C13638DB6E54ACE447F((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ProjectOnPlane(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_ProjectOnPlane_mB667451A9FD90F25F86941A2ED426B3CF3F61855_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___vector0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___planeNormal1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.ProjectOnPlane(vector.internalVector, planeNormal.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___planeNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_ProjectOnPlane_mAACF0ED028A44FDE556EC25AAE0B4D2EAEF5950E((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Reflect(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Reflect_m407D40BA96A3A771E08FE3B202F9B587852A0997_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___inDirection0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___inNormal1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.Reflect(inDirection.internalVector, inNormal.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___inDirection0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___inNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Reflect_mDA0BFFC63BD745F7F35A883BC74C951E8A4ABC2C((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::RotateTowards(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_RotateTowards_m6303FF268846C13EA7047E569953C39284672458_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___current0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.RotateTowards(current.internalVector, target.internalVector, maxRadiansDelta, maxMagnitudeDelta));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___current0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4 = ___maxRadiansDelta2;
		float L_5 = ___maxMagnitudeDelta3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_RotateTowards_mCD213E789C106D6BB3FE0BA96CC7308005E0BA29((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4, (float)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_7;
		L_7 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_7;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_8 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_8;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Scale(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Scale_m30A95E615B15FBA23F0AA12C274A81F934422B11_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, const RuntimeMethod* method)
{
	{
		// public static Vector3<C> Scale(Vector3<C> a, Vector3<C> b) => MakeInternal(Vector3.Scale(a.internalVector, b.internalVector));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Scale_m3D347A2431E7B53FF18622C0249F38725130ECCE_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::SignedAngle(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_SignedAngle_mF08260342F7AB4374566F3DA4C396D94750A9ECE_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___from0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___to1, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___axis2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return Vector3.SignedAngle(from.internalVector, to.internalVector, axis.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___to1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_4 = ___axis2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4.get_internalVector_0();
		float L_6;
		L_6 = Vector3_SignedAngle_m5A39ACDB78D84D04ADC5EB2EA76CB2E2DA4FEFCD((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, /*hidden argument*/NULL);
		V_0 = (float)L_6;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		float L_7 = V_0;
		return (float)L_7;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Slerp(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_Slerp_m2E0B4A743FB71135733C3289C40262F5A1EC138B_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.Slerp(a.internalVector, b.internalVector, t));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_Slerp_m0AB4766A4D584C3FCF048D1F196B4A66DD7E8FEB((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6;
		L_6 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_7 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_7;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::SlerpUnclamped(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_SlerpUnclamped_m08B329393A7914369A8C0352E4016E147FAD1CC0_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.SlerpUnclamped(a.internalVector, b.internalVector, t));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_SlerpUnclamped_mFB883AD89894A0A5DEB45C5A3C1E5A95741B06D9((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6;
		L_6 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_7 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_7;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::SmoothDamp(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_SmoothDamp_m1D001CE612381769DB58E5C1585331198321AC0F_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___current0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___target1, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.SmoothDamp(current.internalVector, target.internalVector, ref currentVelocity.internalVector, smoothTime));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___current0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_4 = ___currentVelocity2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4->get_address_of_internalVector_0();
		float L_6 = ___smoothTime3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_SmoothDamp_mCC059D8E082035951A03C190A87A5CFEC02C9452((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, (float)L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_8;
		L_8 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_9 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_9;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::SmoothDamp(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>&,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_SmoothDamp_m238ACDE857D2F34DC6343AC025C3DD674F5C6C64_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___current0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___target1, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(Vector3.SmoothDamp(current.internalVector, target.internalVector, ref currentVelocity.internalVector, smoothTime, maxSpeed));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___current0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * L_4 = ___currentVelocity2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4->get_address_of_internalVector_0();
		float L_6 = ___smoothTime3;
		float L_7 = ___maxSpeed4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_SmoothDamp_mC893838C9830D080A110577FAE9C8A157E8F68F7((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, (float)L_6, (float)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_9;
		L_9 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_9;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_10 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_10;
	}
}
// System.Single Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::SqrMagnitude(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_1_SqrMagnitude_mB4063B080519FDAEDA4EAF3C07D5E794020FCE36_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___vector0, const RuntimeMethod* method)
{
	{
		// public static float SqrMagnitude(Vector3<C> vector) => Vector3.SqrMagnitude(vector.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		float L_2;
		L_2 = Vector3_SqrMagnitude_mFB9023288188C7A19F1CE3F621E2B56848352523_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/NULL);
		return (float)L_2;
	}
}
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_1_Equals_mEB23C752F18499D14B920813926F0E9DC7D2907D_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (other is Vector3<C>)
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// return internalVector == ((Vector3<C>)other).internalVector;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_internalVector_0();
		RuntimeObject * L_3 = ___other0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->get_internalVector_0();
		bool L_5;
		L_5 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/NULL);
		V_1 = (bool)L_5;
		goto IL_002b;
	}

IL_0027:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_6 = V_1;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool Vector3_1_Equals_mEB23C752F18499D14B920813926F0E9DC7D2907D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3_1_Equals_mEB23C752F18499D14B920813926F0E9DC7D2907D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Equals(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_1_Equals_m4C69144E80B25ED801DD48BA2DE93B7F3A63C9E3_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___other0, const RuntimeMethod* method)
{
	{
		// public bool Equals(Vector3<C> other) => internalVector == other.internalVector;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1 = ___other0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1.get_internalVector_0();
		bool L_3;
		L_3 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2, /*hidden argument*/NULL);
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool Vector3_1_Equals_m4C69144E80B25ED801DD48BA2DE93B7F3A63C9E3_AdjustorThunk (RuntimeObject * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3_1_Equals_m4C69144E80B25ED801DD48BA2DE93B7F3A63C9E3(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_1_GetHashCode_m3866FD2CF2550E2FD1A33FCBC636D6FCF1B0A2FB_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public override int GetHashCode() => internalVector.GetHashCode();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		int32_t L_1;
		L_1 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3_1_GetHashCode_m3866FD2CF2550E2FD1A33FCBC636D6FCF1B0A2FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3_1_GetHashCode_m3866FD2CF2550E2FD1A33FCBC636D6FCF1B0A2FB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_Normalize_m58BEA27AE4207F9EC7D8059FD9F0937457C2D28A_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// internalVector.Normalize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1_Normalize_m58BEA27AE4207F9EC7D8059FD9F0937457C2D28A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_Normalize_m58BEA27AE4207F9EC7D8059FD9F0937457C2D28A(_thisAdjusted, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Scale(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_Scale_mFE80925852A1622A61D313C78EA961C606A3A173_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___scale0, const RuntimeMethod* method)
{
	{
		// internalVector.Scale(scale.internalVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1 = ___scale0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1.get_internalVector_0();
		Vector3_Scale_m52F0C3F26DBEE84B5E292F2E084DA2F7329B6EFF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1_Scale_mFE80925852A1622A61D313C78EA961C606A3A173_AdjustorThunk (RuntimeObject * __this, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___scale0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_Scale_mFE80925852A1622A61D313C78EA961C606A3A173(_thisAdjusted, ___scale0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::Set(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1_Set_mDF8DB9E903541D91326CB90DD4C3BBB1B70C2932_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	{
		// internalVector.Set(newX, newY, newZ);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		float L_1 = ___newX0;
		float L_2 = ___newY1;
		float L_3 = ___newZ2;
		Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (float)L_1, (float)L_2, (float)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_1_Set_mDF8DB9E903541D91326CB90DD4C3BBB1B70C2932_AdjustorThunk (RuntimeObject * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	Vector3_1_Set_mDF8DB9E903541D91326CB90DD4C3BBB1B70C2932(_thisAdjusted, ___newX0, ___newY1, ___newZ2, method);
}
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_1_ToString_mB3C5F3FB83DA97DDFB1F86CB02C3068BF1A99FFD_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		// public string ToString(string format) => internalVector.ToString(format);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		String_t* L_1 = ___format0;
		String_t* L_2;
		L_2 = Vector3_ToString_mBD710BF9F46219074EE5B095F064EAB4F73B64C1((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		return (String_t*)L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_1_ToString_mB3C5F3FB83DA97DDFB1F86CB02C3068BF1A99FFD_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_1_ToString_mB3C5F3FB83DA97DDFB1F86CB02C3068BF1A99FFD(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_1_ToString_mF29841AFE42DBA5DB6C3275F01E227A16D195134_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, const RuntimeMethod* method)
{
	{
		// public override string ToString() => internalVector.ToString();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		String_t* L_1;
		L_1 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		return (String_t*)L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_1_ToString_mF29841AFE42DBA5DB6C3275F01E227A16D195134_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_1_ToString_mF29841AFE42DBA5DB6C3275F01E227A16D195134(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_1_ToString_mF9CEA1B253D07349BBA6BB62B11A6438421221D4_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	{
		// public string ToString(string format, System.IFormatProvider formatProvider) => internalVector.ToString(format, formatProvider);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this->get_address_of_internalVector_0();
		String_t* L_1 = ___format0;
		RuntimeObject* L_2 = ___formatProvider1;
		String_t* L_3;
		L_3 = Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (String_t*)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		return (String_t*)L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_1_ToString_mF9CEA1B253D07349BBA6BB62B11A6438421221D4_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 * _thisAdjusted = reinterpret_cast<Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_1_ToString_mF9CEA1B253D07349BBA6BB62B11A6438421221D4(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Addition(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_Addition_m8A32FD2C5C2AA007828E45C35D229281BF7BFA3F_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(a.internalVector + b.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_UnaryNegation(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_UnaryNegation_mC7F7CA269C038E6B5AA21B76C8AA1D027E9F943B_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(-a.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_3;
		L_3 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_4 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_4;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Subtraction(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_Subtraction_m8E5EBC1FEACF1A129EB7D5088138739603D9E3A6_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___b1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(a.internalVector - b.internalVector);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5;
		L_5 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_6 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_6;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Multiply(System.Single,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_Multiply_m0CB415607123532051302C9B73F9C3EF840E1C93_gshared (float ___d0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(d * a.internalVector);
		float L_0 = ___d0;
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_1 = ___a1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1.get_internalVector_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline((float)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_4;
		L_4 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Multiply(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_Multiply_m0A0011799E7CE6FA30A58041D651DF8D9CAD8CA0_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(a.internalVector * d);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (float)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_4;
		L_4 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C> Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Division(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  Vector3_1_op_Division_m4D0B74ECD9C50A97A9EA0F58AF4BA53EDE2DF6D4_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return MakeInternal(a.internalVector / d);
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Division_mBA12D08F4D51A4BC2E9841D42591B6208FF4B12E_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (float)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_4;
		L_4 = ((  Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  (*) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_5 = V_0;
		return (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105 )L_5;
	}
}
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Equality(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_1_op_Equality_mB7C47E8B47FB0E79C029A22F2054531FCA2BB411_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___lhs0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return lhs.internalVector == rhs.internalVector;
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		bool L_4;
		L_4 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::op_Inequality(Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>,Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<C>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_1_op_Inequality_m6D4ECCE702EC0952D738DE158690A8BF05333D39_gshared (Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___lhs0, Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return lhs.internalVector != rhs.internalVector;
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0.get_internalVector_0();
		Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105  L_2 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2.get_internalVector_0();
		bool L_4;
		L_4 = Vector3_op_Inequality_m3F83C01FE6C6B60CD27D44AD10406E1F604C2D08((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSGeometry.Vector3`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_1__cctor_mE99F8CBE1C8D1FC182762A6C0263BEB578B0BFF8_gshared (const RuntimeMethod* method)
{
	{
		// static C coordinateSpace = new C();
		RuntimeObject * L_0;
		L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		((Vector3_1_tF2D0710FFFE8E055FBF2897BD6B98F0D7EC1B105_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_coordinateSpace_1(L_0);
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
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		NullCheck((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this);
		((  void (*) (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mF2828744686B43E540BF1C0908FA8C14694F666F_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_trackResurrection_1(L_0);
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject * L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4;
		L_4 = GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201((RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		__this->set_handle_0(L_4);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, /*hidden argument*/NULL);
		__this->set_trackResurrection_1(L_3);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4);
		RuntimeObject * L_7;
		L_7 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_7;
		bool L_8 = (bool)__this->get_trackResurrection_1();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_11;
		L_11 = GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201((RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		__this->set_handle_0(L_11);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		bool L_3 = (bool)__this->get_trackResurrection_1();
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, (bool)L_3, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_8;
		L_8 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method)
{
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject *));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject ** L_3 = ___target0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_5;
		L_5 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		*(RuntimeObject **)L_3 = ((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		RuntimeObject ** L_6 = ___target0;
		RuntimeObject * L_7 = (*(RuntimeObject **)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_mFFF6306032DA8256E4F7D125EF76342E83CD6F68_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mFA68796C995A71918347DA98D160E26649D6A1FC_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereArrayIterator_1_Clone_mD021B473127C1F6F14F3A65B5532C1680C976944_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_2 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m863DA6E4F0A213B340E29BED24B21CCF8CF3A8CA_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_7 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_0;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_11 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mBDA5AE3243C59C98DC1F78407A7C6B939F0ED8E7_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_4 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m707C14212113530906675226212BFB17FB9FFDAD_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereEnumerableIterator_1_Clone_m784C946DD2F2922C39D9D7F0FE127F9B3F6459B3_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_2 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mE16D9D538B2554CA7720C9950DED49B47FDCD080_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m63AA91504371EFC63212838247EC0751DEB04725_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mBC8A7812EA44E454BCB18F3920133BFD5EF67FA6_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_4 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m35678AFC9144C9EF94635376847107F65ED8154E_gshared (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * __this, RuntimeObject* ___source0, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereEnumerableIterator_1_Clone_mB3A1D69B791207148C3299A482A7D6DBA0230959_gshared (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_1 = (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_2 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mCEBBEA894C7CC5F525326B1BA2CB2F3B61687BB5_gshared (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m21147472A56ACF566B0027CB4820C2E4636CA5A8_gshared (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_6;
		L_6 = InterfaceFuncInvoker0< HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A )L_6;
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_7 = (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)__this->get_predicate_4();
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_8 = V_1;
		NullCheck((Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_7, (HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_10 = V_1;
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m2DA522921983DA063E31890E24E74194DD6FB157_gshared (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_1 = (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)__this->get_predicate_4();
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_2 = ___predicate0;
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_3;
		L_3 = ((  Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * (*) (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_1, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_4 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2E41801886D9B4955E98984D01A1207BDB50584B_gshared (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * __this, RuntimeObject* ___source0, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		((  void (*) (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 * WhereEnumerableIterator_1_Clone_mD6E99ED6F2EBF99C41168E88741049BDF746310B_gshared (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * L_2 = (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *, RuntimeObject*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2C78DA00805D99AE609EBE8AF25352A9370B6005_gshared (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		((  void (*) (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mAA9A71443251F7FCA36211C1FED05C12AD5196A7_gshared (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Input.HandSkeletonJoint>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_6;
		L_6 = InterfaceFuncInvoker0< HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Oculus.Interaction.Input.HandSkeletonJoint>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_6;
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_7 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_8 = V_1;
		NullCheck((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_7, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_10 = V_1;
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Dispose() */, (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m21C9E336A76D2E8A327C84F93150FB27B1441644_gshared (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * __this, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_2 = ___predicate0;
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_3;
		L_3 = ((  Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * (*) (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_1, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * L_4 = (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *, RuntimeObject*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m287F1D35954FCA96B66D73E96710E77F37C13262_gshared (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * __this, RuntimeObject* ___source0, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		((  void (*) (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 * WhereEnumerableIterator_1_Clone_m440008376CEFA0EA8EA3EFAD21204CCFB3D00F45_gshared (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_1 = (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * L_2 = (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *, RuntimeObject*, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m59DCCAC4B7A18803467058020F4A5964E0E60028_gshared (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		((  void (*) (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m9EE0B9ABE0051B3A74553E21C7F181E63AE31D15_gshared (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = InterfaceFuncInvoker0< Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Quaternion>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6;
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_7 = (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)__this->get_predicate_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = V_1;
		NullCheck((Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_7, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = V_1;
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::Dispose() */, (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Quaternion>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m212857D216FE9A49D0C1BF53B849219B371EAD22_gshared (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * __this, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_1 = (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)__this->get_predicate_4();
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_2 = ___predicate0;
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_3;
		L_3 = ((  Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * (*) (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_1, (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * L_4 = (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *, RuntimeObject*, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2FE5EE5EA89604DAEA0FA56A0D4621828DC5C973_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, RuntimeObject* ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereEnumerableIterator_1_Clone_m9A9E2C9F0C5D4A4CFA7A9B1C26EBDFA66C266A40_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_2 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB9B0CAB988738D879AB4781D8FC2FE10D0D4A38A_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m65BBB5587A0B647868632178750A4068D84020AF_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = InterfaceFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_6;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = V_1;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = V_1;
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m374142FAA1FCE8C47E3308F725ADA92FBF247578_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_2 = ___predicate0;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_3;
		L_3 = ((  Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_4 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mFF43A0851AF3E2469A68EEE2A2698FD2CAC6E640_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereListIterator_1_Clone_m543689012B48160EAE9BC7EBCCE4BA0C39AFC412_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_2 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mF7804B57A97E06FE44F6B6E5ECB860105B14EC3B_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_11 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m367822A36B7AB1F301F12B849EFD9C456F898239_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_4 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mE85D449F2AE66891AB305C42D263F20F43445B16_gshared (WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 * __this, HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* ___source0, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate1, Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		((  void (*) (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 * WhereSelectArrayIterator_2_Clone_m25C57F500A592E7064735584E188B8E147FA0043_gshared (WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 * __this, const RuntimeMethod* method)
{
	{
		HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* L_0 = (HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95*)__this->get_source_3();
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_2 = (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 * L_3 = (WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 *, HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95*)L_0, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_1, (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m938CFB4749E34F73D6DD1EFEC5A1FE3F0E55242F_gshared (WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 * __this, const RuntimeMethod* method)
{
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* L_1 = (HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_6 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_7 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_8 = V_0;
		NullCheck((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_7, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_10 = (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)__this->get_selector_5();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_11 = V_0;
		NullCheck((Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_10);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_12;
		L_12 = ((  HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  (*) (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_10, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95* L_14 = (HandSkeletonJointU5BU5D_t4B699B1E9A4171D2EE43B044CB583B5C1EB64D95*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Dispose() */, (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mC91265583A3B96B44358D83256F9D0D910691C04_gshared (WhereSelectArrayIterator_2_t113D01BACC72FDBB88F217629E9FFA840A974648 * __this, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * L_1 = (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *, RuntimeObject*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mD121BC4D63B3E80C3E641FC464E6F1E802A41F93_gshared (WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectArrayIterator_2_Clone_m5BDC9295B6501FA8BACBBFC38D84C4C0C5D061BD_gshared (WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_2 = (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 * L_3 = (WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mF3F8DDAD42AB3886CA0F9A20A6EB044F514116F8_gshared (WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_10 = (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_10);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_12;
		L_12 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_14 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m5D4DBB7BF9BFCD884FB5CA116F44A4243B2F682B_gshared (WhereSelectArrayIterator_2_tB963D83C356CF59B1E162864ED62B8DF1E135B75 * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m4FFCAF1BCFFC737FC53D82E1945E4FF8547C4134_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m9F3626F90039C937532071737281A3F66B2649FC_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * L_3 = (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m865ABFBE319636B9BDBF5C3F4FF91703765ED8E3_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_10 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_14 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mF284F0BC101E6A5280500324DE5FCEA8007EE9FB_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m6A5D0F19F47F82890CC899D64858D85A153F8CA3_gshared (WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectArrayIterator_2_Clone_mB0F77635262512519570B772672BFBDEBAD8E99D_gshared (WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_2 = (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 * L_3 = (WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m6C10BBCE3053EDF8B07C922C8E2315DBCD21E401_gshared (WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_10 = (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_10);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_12;
		L_12 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m9D79F77D0C9A0B86DEDB02C97884806DA12D300B_gshared (WhereSelectArrayIterator_2_t2043375633FD0847827F35F33F82B465E6251DD4 * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mA99BE369B9B8C360F23F2A1ED2CE19F579B54CD9_gshared (WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B * __this, PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___source0, Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * ___predicate1, Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		((  void (*) (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 * WhereSelectArrayIterator_2_Clone_mE28F2F4754B8C9C77FB50D56AD0E0B8CD9482533_gshared (WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B * __this, const RuntimeMethod* method)
{
	{
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_0 = (PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)__this->get_source_3();
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_1 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_2 = (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B * L_3 = (WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B *, PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*, Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *, Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)L_0, (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_1, (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC0F12026525124A20934C727E5443B8F54869045_gshared (WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B * __this, const RuntimeMethod* method)
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_1 = (PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_6 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_7 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = V_0;
		NullCheck((Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_7, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_10 = (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)__this->get_selector_5();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_11 = V_0;
		NullCheck((Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_10, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_14 = (PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::Dispose() */, (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21CC314BED00702F2DE6C5C4E2FE2B310D9B896D_gshared (WhereSelectArrayIterator_2_t81F6466C9052036810AAD9C66FEE5A653C57AC9B * __this, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * L_1 = (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *, RuntimeObject*, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m11864CA0B89383DA59A4888AE0E3A9B11CE71F66_gshared (WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source0, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate1, Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectArrayIterator_2_Clone_mD18C29AA748CD62DC4A1836346D1240270DB73BC_gshared (WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 * __this, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_source_3();
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_2 = (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 * L_3 = (WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_0, (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_1, (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7E26AE8981528477EC0255DD4E3253A10D9781B4_gshared (WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (float)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_6 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_7 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		float L_8 = V_0;
		NullCheck((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_7, (float)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_10 = (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)__this->get_selector_5();
		float L_11 = V_0;
		NullCheck((Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_10);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_12;
		L_12 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_10, (float)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2757034079254F94C56F0F88A308CB936C4D864A_gshared (WhereSelectArrayIterator_2_t2380FF50C68BA6B2A3A955A0558197CC42D11291 * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mD44CAB9CD1300621CC51D26099D39BBE4A7AF8AE_gshared (WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___source0, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate1, Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mC11FB5A7EF224A388850682E46892E56FB449C94_gshared (WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D * __this, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_source_3();
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_2 = (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D * L_3 = (WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_0, (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_1, (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m1101123494F699E7ED4547DC419F4DDF9AB2737A_gshared (WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (float)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_6 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_7 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		float L_8 = V_0;
		NullCheck((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_7, (float)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_10 = (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)__this->get_selector_5();
		float L_11 = V_0;
		NullCheck((Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_10, (float)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Single,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mE7835F94EBF4466183293AA3CDF500D32B45A10E_gshared (WhereSelectArrayIterator_2_tBF1F7368E0EF1157617DD50CB92EDEF1ABDEE95D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m846F977EEABC654AF254E4C04CD8437816276E6D_gshared (WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereSelectArrayIterator_2_Clone_mF17E1C8FA49A98531E1F47D22F477957D0F332D8_gshared (WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE * __this, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_2 = (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE * L_3 = (WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE *, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mF54066AB0640B63D693C36F307977709A9E46250_gshared (WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_6 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_10 = (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)__this->get_selector_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		NullCheck((Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_10);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		L_12 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_10, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mFE4F102BF225B39423EA332560B48FD95764C9DB_gshared (WhereSelectArrayIterator_2_t1543407FA1D979E6EB6269A16304E3C52054F2CE * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_1 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE674D71BB7643F2087791DC98229F50951123628_gshared (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB * __this, RuntimeObject* ___source0, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate1, Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		((  void (*) (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 * WhereSelectEnumerableIterator_2_Clone_m6382C1E0D8D3836AC95B4FB10D3DEC6CF522E341_gshared (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_2 = (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB * L_3 = (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB *, RuntimeObject*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_1, (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m1FFB738E338A7CFDD08292150B606A11C85E3668_gshared (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		((  void (*) (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m28625AB323BF25AE86EE0C8F16C080E910467E01_gshared (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Input.HandSkeletonJoint>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_6;
		L_6 = InterfaceFuncInvoker0< HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Oculus.Interaction.Input.HandSkeletonJoint>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_6;
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_7 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_8 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_9 = V_1;
		NullCheck((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_8, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_11 = (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)__this->get_selector_5();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_12 = V_1;
		NullCheck((Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_11);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_13;
		L_13 = ((  HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  (*) (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_11, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Dispose() */, (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m439F98BD24C0DFC4E3974B375DFDF8BEC8AED1F3_gshared (WhereSelectEnumerableIterator_2_t04AB31927A6E89520049EC6E92923D1FBAC994AB * __this, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * L_1 = (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *, RuntimeObject*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m5322DC3EE753A3B56FEB7662D372B626FFC9E848_gshared (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectEnumerableIterator_2_Clone_m1C9E1ED0638DECC036195FC62A0C62B790C471A2_gshared (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_2 = (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E * L_3 = (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD5C8AC091117578870381FE44E070C4B3C08ECB2_gshared (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF163BF1AF1F89E528EAAC265DBFE9F37F3689CD8_gshared (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_11 = (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_11);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_13;
		L_13 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m5677C8BCED8E7F3EEB095A35332B263F3291C5A9_gshared (WhereSelectEnumerableIterator_2_t7EAA0B11B253891F06C3DC49A960F0030CC1CA9E * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m47635847AC02479D7C58622F296DCBF88E18C4B0_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mF150C4600D50245151AE0E8029CC7CBAB303E754_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * L_3 = (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m71E88D558F1C66319831455654381D3FD5E6FE94_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m8A98578C5E3B29ACA85548212356E9619C83FF3C_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_11 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m02212A04F4819B1D035DD77EAFBF32B448CB8F14_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6EC846F3D4286116C25FC655CBC9CA6769A907E7_gshared (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectEnumerableIterator_2_Clone_mF72B1D0FFD938865E4E0EB8BA560256985A32ACB_gshared (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_2 = (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 * L_3 = (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m898BA5E179F1EA37A4D673827495BBB03B83506F_gshared (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mEC59423538A792736E326AE176A2F9CADFF7C1D6_gshared (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_11 = (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_11);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_13;
		L_13 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m719FCFB0069074D330686C5D746F2202CAAEC956_gshared (WhereSelectEnumerableIterator_2_t95A95FCCD2819003CA2A570D48063CF161CD6379 * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m8C938FC8F8791C34B47D2036A30B94E4923B0D15_gshared (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 * __this, RuntimeObject* ___source0, Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * ___predicate1, Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		((  void (*) (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 * WhereSelectEnumerableIterator_2_Clone_mE337AF45DF10A0D8CDB309A8033F48490177A9AE_gshared (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_1 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_2 = (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 * L_3 = (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 *, RuntimeObject*, Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *, Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_1, (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m8ADA1D81B6928C8E46693489A7A03240F8950A96_gshared (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		((  void (*) (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m3D7FB806ECD2F1B8B6841977ACC0879B81B0206D_gshared (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Pose>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6;
		L_6 = InterfaceFuncInvoker0< Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Pose>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_6;
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_7 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_8 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = V_1;
		NullCheck((Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_8, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_11 = (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)__this->get_selector_5();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_12 = V_1;
		NullCheck((Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_11, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::Dispose() */, (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m8473DB263151A7B8C89F0006DD06D20F013B5283_gshared (WhereSelectEnumerableIterator_2_t3529F4FEC1C961CCD3F23682094813DA27D0ADA3 * __this, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * L_1 = (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *, RuntimeObject*, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m38AE1323344B5785E666CBB752913F25B96C244E_gshared (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 * __this, RuntimeObject* ___source0, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate1, Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectEnumerableIterator_2_Clone_m160EEDE430CD0E95EA2207D54C29774B00BCDFDD_gshared (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_2 = (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 * L_3 = (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 *, RuntimeObject*, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_1, (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2EC1C7ABF71ECDD882E079CF79ED8974D3D4C920_gshared (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m81BBDCCB6714271BDC821F983A9D53D61DBEDC29_gshared (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (float)L_6;
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_7 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_8 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		float L_9 = V_1;
		NullCheck((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_11 = (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)__this->get_selector_5();
		float L_12 = V_1;
		NullCheck((Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_11);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_13;
		L_13 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_11, (float)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mE6AE0F17EB0642152C84F4640C9713062AEDFF51_gshared (WhereSelectEnumerableIterator_2_t2A52520F681646B607AC6281E9876C142E5DD8E1 * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m965328D2ECA16C2BE75E3E223BDDFA35731CC5BB_gshared (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A * __this, RuntimeObject* ___source0, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate1, Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m34512788F517D64AF88551951B2D75A4CA0DD066_gshared (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_2 = (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A * L_3 = (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A *, RuntimeObject*, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_1, (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m03C13B47EFC2336E91F60AAEC480568F289F373A_gshared (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mAD7BCF14B4CD4C276B3D022E0EE2E390E2672FB6_gshared (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (float)L_6;
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_7 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_8 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		float L_9 = V_1;
		NullCheck((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_11 = (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)__this->get_selector_5();
		float L_12 = V_1;
		NullCheck((Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_11, (float)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Single,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m78EC6F7DCD8C5E50C5FF4CCD1F89CF89491CB627_gshared (WhereSelectEnumerableIterator_2_t8330901F0811E7C54CAD7107B2350ACFCBF3859A * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m08AAF0556887A235BC5BB109ABC63B1B9F20DC02_gshared (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 * __this, RuntimeObject* ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereSelectEnumerableIterator_2_Clone_m84810FB415BAFDF5ED1E26F7C9BE602EC6DDC6EF_gshared (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_2 = (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 * L_3 = (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2AF4199846FEA066E1A6A47D886BAE53B0E5DF91_gshared (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m2F02449324FCD47BC11F6F246F8B1E3A4112A049_gshared (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_8 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_11 = (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)__this->get_selector_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		NullCheck((Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_11);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_11, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m545A22B8E0B8568C3F0C61518998B12E48A82BAB_gshared (WhereSelectEnumerableIterator_2_tCDAD6399935B084702273B7CB02D93017C3162E4 * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_1 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB62C5110089E532E5A02FC5E2FB02B86D28E89D6_gshared (WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F * __this, List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * ___source0, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate1, Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		((  void (*) (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 * WhereSelectListIterator_2_Clone_m27C5EAA1307A48F8CB899B7DA0A82EF3E688884A_gshared (WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F * __this, const RuntimeMethod* method)
{
	{
		List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * L_0 = (List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *)__this->get_source_3();
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_1 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_2 = (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)__this->get_selector_5();
		WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F * L_3 = (WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F *, List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *)L_0, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_1, (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m155CB4CA63388EC1D4F62D6C9BC9F16D7C44C6C3_gshared (WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 * L_3 = (List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *)__this->get_source_3();
		NullCheck((List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *)L_3);
		Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6  L_4;
		L_4 = ((  Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6  (*) (List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t92F561CC77DE516A0293B29C982ACDC3391E1658 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * L_5 = (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *)__this->get_address_of_enumerator_6();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_6;
		L_6 = Enumerator_get_Current_mFF6988CD9E5309A0577F8335E26AA7191198035F_inline((Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *)(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_6;
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_7 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_8 = (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)__this->get_predicate_4();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_9 = V_1;
		NullCheck((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_8, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB339A94B37E01030C823BB96512593067BEF80DC * L_11 = (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)__this->get_selector_5();
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_12 = V_1;
		NullCheck((Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_11);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_13;
		L_13 = ((  HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  (*) (Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tB339A94B37E01030C823BB96512593067BEF80DC *)L_11, (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * L_14 = (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m7104D812814B404A855DFD8BCE0C67FD044F6377((Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *)(Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.Input.HandSkeletonJoint>::Dispose() */, (Iterator_1_tBD3F91668D911F5945632A9FDF70A5848BD6CC26 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Oculus.Interaction.Input.HandSkeletonJoint,Oculus.Interaction.Input.HandSkeletonJoint>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2030D885386103FDA9172672D90671ED5741C957_gshared (WhereSelectListIterator_2_t912D2CA762EC2D53D104D6B1FFE8BCEF3FA7319F * __this, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD * L_1 = (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t7E214A8B0456E617DE0100DC5CA366442CB22EBD *, RuntimeObject*, Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t31607A88702EFEFC5B33245A610C64EA7D6ED9F7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m161B525305766988A8E851D2FC33D5BC5689B7E0_gshared (WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectListIterator_2_Clone_mEB2AE199E0337D1BC4384474140E4348B2C439F5_gshared (WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_2 = (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)__this->get_selector_5();
		WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D * L_3 = (WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m776864743FB3087346F83301DED4526617AE4B84_gshared (WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 * L_11 = (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_11);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_13;
		L_13 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t5EFABA93ECCC8C4D3F2F1ED7E736806569803840 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_14 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE6CB6DAEBCD42ACA32E05328214491416065D459_gshared (WhereSelectListIterator_2_t628971C1F98B5C342C0075D3AE3955281DD1546D * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC542F38EC17CA13C41DB738F0D825E697982CA4E_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m9A196A73CDF63D17862E2CA0BFF6FDCA3D0E8E47_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * L_3 = (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m10D83660FAC86C1CBD7ED4E1368F14B5478499A5_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_8 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_11 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_14 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1E339E047A89DE7D5B31A0AE1A48944B1C933300_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76E72DE6342778135276AC0799EB2A9B11285986_gshared (WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectListIterator_2_Clone_m0E227BADBC05144B563C4AF5610A7D879470ECBF_gshared (WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_2 = (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)__this->get_selector_5();
		WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF * L_3 = (WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m57726602D816D4E8FAB99B8305285FC2ABC0CF98_gshared (WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 * L_11 = (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_11);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_13;
		L_13 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8605C9C7D480136BA10EE6CB63CF8F1074623765 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m66B49A5FCE43D3CFE5B7F8C3DFD4CB9360EC2E36_gshared (WhereSelectListIterator_2_tC1C86CB06D3DA1A096FFED55CB4B4EF3B71D8CEF * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCA2789E32566824C2033ABB0567D8BB7B1D1CFF7_gshared (WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D * __this, List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * ___source0, Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * ___predicate1, Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		((  void (*) (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 * WhereSelectListIterator_2_Clone_mA62FF15FF8FA0738A92A62144F6232E8A520D69C_gshared (WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D * __this, const RuntimeMethod* method)
{
	{
		List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * L_0 = (List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *)__this->get_source_3();
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_1 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_2 = (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D * L_3 = (WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D *, List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *, Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *, Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *)L_0, (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_1, (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDF3F7587A8D3FDDA83759D3BC1EE4679B0AA0D4D_gshared (WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * L_3 = (List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *)__this->get_source_3();
		NullCheck((List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *)L_3);
		Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB  L_4;
		L_4 = ((  Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB  (*) (List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * L_5 = (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *)__this->get_address_of_enumerator_6();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6;
		L_6 = Enumerator_get_Current_mFDB2FBE724A02C5CAFAE108E12A75676EFE43A5F_inline((Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *)(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_6;
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_7 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F * L_8 = (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)__this->get_predicate_4();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = V_1;
		NullCheck((Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t288BC2D8C12E52B8F2E7F675CFB740C44E7E813F *)L_8, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * L_11 = (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)__this->get_selector_5();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_12 = V_1;
		NullCheck((Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 *)L_11, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * L_14 = (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF9007138A9A75F58C71B24612243436A5852F2E8((Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *)(Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Quaternion>::Dispose() */, (Iterator_1_t4BD4EE08E1E7E81949C3754EC2969154580F4C65 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Pose,UnityEngine.Quaternion>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m192B3594DBDAA23DD28A42C54BC39CA8FD411CA7_gshared (WhereSelectListIterator_2_tA4AFE0F933BE35E59757614CBEDAA04AEBC6AD3D * __this, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F * L_1 = (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t6F3A191533D782BF1D9D4D3C5E1B535EC187EA9F *, RuntimeObject*, Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t34B33A6CBEAEB1EF3A60338636A0DC782C33A7BE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD882EED56A3FB1623EA4685D2A409A1025FB40FB_gshared (WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A * __this, List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___source0, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate1, Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		((  void (*) (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 * WhereSelectListIterator_2_Clone_mB1760467AAF2856BBAE2B04BE06C76F7674A704E_gshared (WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A * __this, const RuntimeMethod* method)
{
	{
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)__this->get_source_3();
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_2 = (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)__this->get_selector_5();
		WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A * L_3 = (WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A *, List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_0, (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_1, (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m395469CA5489FE4BDC3B8405ECF9C19F1008D229_gshared (WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_3 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)__this->get_source_3();
		NullCheck((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_3);
		Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  L_4;
		L_4 = ((  Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * L_5 = (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)__this->get_address_of_enumerator_6();
		float L_6;
		L_6 = Enumerator_get_Current_m1DC0B40110173B7E2D13319164F7657C3BE3536D_inline((Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (float)L_6;
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_7 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_8 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		float L_9 = V_1;
		NullCheck((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 * L_11 = (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)__this->get_selector_5();
		float L_12 = V_1;
		NullCheck((Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_11);
		HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  L_13;
		L_13 = ((  HandGrabPoseData_t76C89E3B33A12BCCE12F4578C2CCBD2494FE836A  (*) (Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF8B675E5FDF74DC43E0F61367C1EFF75CF7A3BB7 *)L_11, (float)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * L_14 = (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF6D031AEDDDEEAF750E0BFE7866FBBA9C9752C7E((Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Oculus.Interaction.HandGrab.HandGrabPoseData>::Dispose() */, (Iterator_1_t619ABC4AB1422B4935FFD4B0441762D6CD6AAC21 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,Oculus.Interaction.HandGrab.HandGrabPoseData>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2E12249D9ADB05B8053B2309F2D201F7886A41E3_gshared (WhereSelectListIterator_2_t1068BC55DE039294D28048265DFF40930881AA4A * __this, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 * L_1 = (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tE9058ADB9701ED901BF27DE278D3C294AD357D11 *, RuntimeObject*, Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tAF2A8A3B2BED822B269C027F9727E329C42B6449 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE72A3E981B94D2502A4AFDA08A6E9867C64ED651_gshared (WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 * __this, List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___source0, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * ___predicate1, Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m932F0C8E73F1307B320D9321DECE070701BB780C_gshared (WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 * __this, const RuntimeMethod* method)
{
	{
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)__this->get_source_3();
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_1 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_2 = (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)__this->get_selector_5();
		WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 * L_3 = (WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 *, List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_0, (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_1, (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m786886FF98DCF38B8D4705E8E73EDA2EFC9FCF46_gshared (WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_3 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)__this->get_source_3();
		NullCheck((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_3);
		Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  L_4;
		L_4 = ((  Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783  (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * L_5 = (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)__this->get_address_of_enumerator_6();
		float L_6;
		L_6 = Enumerator_get_Current_m1DC0B40110173B7E2D13319164F7657C3BE3536D_inline((Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (float)L_6;
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_7 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A * L_8 = (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)__this->get_predicate_4();
		float L_9 = V_1;
		NullCheck((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 * L_11 = (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)__this->get_selector_5();
		float L_12 = V_1;
		NullCheck((Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE11BDF71BCB314E58F1A9CFC9DAE08A5F717E2A0 *)L_11, (float)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * L_14 = (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF6D031AEDDDEEAF750E0BFE7866FBBA9C9752C7E((Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)(Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Single,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m0CA9E839CED94CB32A63000C2B9318E221D5C580_gshared (WhereSelectListIterator_2_t77C04C3B7AD0F11B52AC864B3B1635FBFC5D2259 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA14F7C9DF1D8216DFFEA4B86BBCCFFA347A0B888_gshared (WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereSelectListIterator_2_Clone_m37D1E7943A842F05C947619F1CE6EF23D3D7ABEF_gshared (WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 * __this, const RuntimeMethod* method)
{
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_2 = (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)__this->get_selector_5();
		WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 * L_3 = (WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 *, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC28DEB0493C4E28648FCC50B4D63FBA6E477E53F_gshared (WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)__this->get_source_3();
		NullCheck((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_3);
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  L_4;
		L_4 = ((  Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * L_5 = (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)__this->get_address_of_enumerator_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_8 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * L_11 = (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)__this->get_selector_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		NullCheck((Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_11);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 *)L_11, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * L_14 = (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF7052EC0C29FDDC452753BA7F800C21617B97AE1_gshared (WhereSelectListIterator_2_t6CE30FF61343DD85C3669D9F875740DDC7EBAE23 * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_1 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B * WitEntityDataBase_1_FromEntityWitResponseNode_mC3C722797596DB88C0AF8E72D41F78CD60FCBF82_gshared (WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B * V_0 = NULL;
	{
		// responseNode = node;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = ___node0;
		__this->set_responseNode_0(L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_1);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_2;
		L_2 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_1, (String_t*)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_2, /*hidden argument*/NULL);
		__this->set_id_1(L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_4 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_4);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_5;
		L_5 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_4, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_5, /*hidden argument*/NULL);
		__this->set_name_2(L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_7 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_7);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
		L_8 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_7, (String_t*)_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_8, /*hidden argument*/NULL);
		__this->set_role_3(L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_10 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_10);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_11;
		L_11 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_10, (String_t*)_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_11);
		__this->set_start_4(L_12);
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_13 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_13);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_14;
		L_14 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_13, (String_t*)_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_14);
		__this->set_end_5(L_15);
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_16 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_16);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_17;
		L_17 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_16, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_17, /*hidden argument*/NULL);
		__this->set_type_6(L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_19 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_19);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_20;
		L_20 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_19, (String_t*)_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_20, /*hidden argument*/NULL);
		__this->set_body_7(L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_22 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_22);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_23;
		L_23 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_22, (String_t*)_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_23);
		float L_24;
		L_24 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_23);
		__this->set_confidence_9(L_24);
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_25 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_26, /*hidden argument*/NULL);
		__this->set_hasData_10((bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0));
		// value = OnParseValue(node);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_28 = ___node0;
		NullCheck((WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B *)__this);
		int32_t L_29;
		L_29 = VirtFuncInvoker1< int32_t, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, (WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B *)__this, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_28);
		__this->set_value_8(L_29);
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_30 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_30);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_31;
		L_31 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_30, (String_t*)_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_31);
		WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_32;
		L_32 = VirtFuncInvoker0< WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_31);
		__this->set_entities_11(L_32);
		// return this;
		V_0 = (WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B *)__this;
		goto IL_00f3;
	}

IL_00f3:
	{
		// }
		WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B * L_33 = V_0;
		return (WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B *)L_33;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m902867B6AD3205216BEFE4621649348CA95A130D_gshared (WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return value.ToString();
		int32_t* L_0 = (int32_t*)__this->get_address_of_value_8();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(int32_t*)L_0, /*hidden argument*/NULL);
		V_0 = (String_t*)L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_2 = V_0;
		return (String_t*)L_2;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m1B06884C18F7B834531741F5AAB349FA53775969_gshared (WitEntityDataBase_1_t6E6DA3A8328833FFAD25B5C6D0283127F2E45B1B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 * WitEntityDataBase_1_FromEntityWitResponseNode_mFFA5A365A128E9CB5DBD310FF80BFA2081312CE8_gshared (WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 * V_0 = NULL;
	{
		// responseNode = node;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = ___node0;
		__this->set_responseNode_0(L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_1);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_2;
		L_2 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_1, (String_t*)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_2, /*hidden argument*/NULL);
		__this->set_id_1(L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_4 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_4);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_5;
		L_5 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_4, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_5, /*hidden argument*/NULL);
		__this->set_name_2(L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_7 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_7);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
		L_8 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_7, (String_t*)_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_8, /*hidden argument*/NULL);
		__this->set_role_3(L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_10 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_10);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_11;
		L_11 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_10, (String_t*)_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_11);
		__this->set_start_4(L_12);
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_13 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_13);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_14;
		L_14 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_13, (String_t*)_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_14);
		__this->set_end_5(L_15);
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_16 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_16);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_17;
		L_17 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_16, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_17, /*hidden argument*/NULL);
		__this->set_type_6(L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_19 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_19);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_20;
		L_20 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_19, (String_t*)_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_20, /*hidden argument*/NULL);
		__this->set_body_7(L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_22 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_22);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_23;
		L_23 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_22, (String_t*)_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_23);
		float L_24;
		L_24 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_23);
		__this->set_confidence_9(L_24);
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_25 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_26, /*hidden argument*/NULL);
		__this->set_hasData_10((bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0));
		// value = OnParseValue(node);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_28 = ___node0;
		NullCheck((WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 *)__this);
		RuntimeObject * L_29;
		L_29 = VirtFuncInvoker1< RuntimeObject *, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, (WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 *)__this, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_28);
		__this->set_value_8(L_29);
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_30 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_30);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_31;
		L_31 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_30, (String_t*)_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_31);
		WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_32;
		L_32 = VirtFuncInvoker0< WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_31);
		__this->set_entities_11(L_32);
		// return this;
		V_0 = (WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 *)__this;
		goto IL_00f3;
	}

IL_00f3:
	{
		// }
		WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 * L_33 = V_0;
		return (WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 *)L_33;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_mDC94929842EB95FE0372378AF865345759246FA6_gshared (WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return value.ToString();
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_value_8();
		NullCheck((RuntimeObject *)(*L_0));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*L_0));
		V_0 = (String_t*)L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_2 = V_0;
		return (String_t*)L_2;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_mDAAA3CC289E54C447D56259D5227FF589F537291_gshared (WitEntityDataBase_1_tB6E2186E274E2D2F47A5E6FED461B358A173C1A8 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Facebook.WitAi.Data.Entities.WitEntityDataBase`1<T> Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA * WitEntityDataBase_1_FromEntityWitResponseNode_m81E25ABBDC967E3F6B0243A1DB6A644C134634F5_gshared (WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA * V_0 = NULL;
	{
		// responseNode = node;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = ___node0;
		__this->set_responseNode_0(L_0);
		// id = node[WitEntity.Fields.ID];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_1);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_2;
		L_2 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_1, (String_t*)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		String_t* L_3;
		L_3 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_2, /*hidden argument*/NULL);
		__this->set_id_1(L_3);
		// name = node[WitEntity.Fields.NAME];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_4 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_4);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_5;
		L_5 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_4, (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		String_t* L_6;
		L_6 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_5, /*hidden argument*/NULL);
		__this->set_name_2(L_6);
		// role = node[WitEntity.Fields.ROLE];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_7 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_7);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
		L_8 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_7, (String_t*)_stringLiteral2BC1949680B79EF335143D2614303F45C2BD5433);
		String_t* L_9;
		L_9 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_8, /*hidden argument*/NULL);
		__this->set_role_3(L_9);
		// start = node[WitEntity.Fields.START].AsInt;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_10 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_10);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_11;
		L_11 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_10, (String_t*)_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_11);
		__this->set_start_4(L_12);
		// end = node[WitEntity.Fields.END].AsInt;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_13 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_13);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_14;
		L_14 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_13, (String_t*)_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_14);
		__this->set_end_5(L_15);
		// type = node[WitEntity.Fields.TYPE];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_16 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_16);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_17;
		L_17 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_16, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		String_t* L_18;
		L_18 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_17, /*hidden argument*/NULL);
		__this->set_type_6(L_18);
		// body = node[WitEntity.Fields.BODY];
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_19 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_19);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_20;
		L_20 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_19, (String_t*)_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		String_t* L_21;
		L_21 = WitResponseNode_op_Implicit_m2B3EA6072532C033BA1998A431AFB6A475DF2794((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_20, /*hidden argument*/NULL);
		__this->set_body_7(L_21);
		// confidence = node[WitEntity.Fields.CONFIDENCE].AsFloat;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_22 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_22);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_23;
		L_23 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_22, (String_t*)_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_23);
		float L_24;
		L_24 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_23);
		__this->set_confidence_9(L_24);
		// hasData = !string.IsNullOrEmpty(node.Value);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_25 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3((String_t*)L_26, /*hidden argument*/NULL);
		__this->set_hasData_10((bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0));
		// value = OnParseValue(node);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_28 = ___node0;
		NullCheck((WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA *)__this);
		float L_29;
		L_29 = VirtFuncInvoker1< float, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(4 /* T Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::OnParseValue(Facebook.WitAi.Lib.WitResponseNode) */, (WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA *)__this, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_28);
		__this->set_value_8(L_29);
		// entities = node[WitEntity.Fields.ENTITIES].AsArray;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_30 = ___node0;
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_30);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_31;
		L_31 = VirtFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_30, (String_t*)_stringLiteral6A13904391B9244725CDA479F017C96337B784A1);
		NullCheck((WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_31);
		WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_32;
		L_32 = VirtFuncInvoker0< WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *)L_31);
		__this->set_entities_11(L_32);
		// return this;
		V_0 = (WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA *)__this;
		goto IL_00f3;
	}

IL_00f3:
	{
		// }
		WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA * L_33 = V_0;
		return (WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA *)L_33;
	}
}
// System.String Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m73823BEE68F94BF601512B7596B33FC7FF2311E9_gshared (WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return value.ToString();
		float* L_0 = (float*)__this->get_address_of_value_8();
		String_t* L_1;
		L_1 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)L_0, /*hidden argument*/NULL);
		V_0 = (String_t*)L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_2 = V_0;
		return (String_t*)L_2;
	}
}
// System.Void Facebook.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m9B7ADEC8C8AB4D6D59F7E31E1CCFA7D86BEADF27_gshared (WitEntityDataBase_1_t8367934729E4910D8ED3EE39645388CE35102CFA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_mFD4B4AD2E4B64CEB253946317B11C4C83CB62B1C_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		float L_6 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___a0;
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___b1;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___a0;
		float L_12 = L_11.get_y_3();
		float L_13 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___a0;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___b1;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___a0;
		float L_19 = L_18.get_z_4();
		float L_20 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m05270DE1691E3EABA0DC5E7A291D52A445BDDD9F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))))));
		V_0 = ((float)((float)L_12));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Max_m963E0011CD55D865E1DE0C5E7D33715B9E7C60B7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___lhs0;
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___rhs1;
		float L_8 = L_7.get_y_3();
		float L_9;
		L_9 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_6, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___lhs0;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___rhs1;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = Mathf_Max_m5C96B726079E95BB1A1DC60532553CB723D24C79(L_11, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_003c;
	}

IL_003c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Min_mAB96EA6DFFA1BB1C3EBB27535B7FBAF4898A9661_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = Mathf_Min_m2685AF38FD5B92F51F6A07F4B770DF34F4A53FE6(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___lhs0;
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___rhs1;
		float L_8 = L_7.get_y_3();
		float L_9;
		L_9 = Mathf_Min_m2685AF38FD5B92F51F6A07F4B770DF34F4A53FE6(L_6, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___lhs0;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___rhs1;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = Mathf_Min_m2685AF38FD5B92F51F6A07F4B770DF34F4A53FE6(L_11, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_003c;
	}

IL_003c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m3D347A2431E7B53FF18622C0249F38725130ECCE_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mFB9023288188C7A19F1CE3F621E2B56848352523_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_m52F0C3F26DBEE84B5E292F2E084DA2F7329B6EFF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale0, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___scale0;
		float L_2 = L_1.get_x_2();
		__this->set_x_2(((float)il2cpp_codegen_multiply((float)L_0, (float)L_2)));
		float L_3 = __this->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___scale0;
		float L_5 = L_4.get_y_3();
		__this->set_y_3(((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)));
		float L_6 = __this->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___scale0;
		float L_8 = L_7.get_z_4();
		__this->set_z_4(((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	{
		float L_0 = ___newX0;
		__this->set_x_2(L_0);
		float L_1 = ___newY1;
		__this->set_y_3(L_1);
		float L_2 = ___newZ2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m92CBF5B97ECB34A9B802EDD5C4A8187463278560_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mBA12D08F4D51A4BC2E9841D42591B6208FF4B12E_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  Enumerator_get_Current_mFF6988CD9E5309A0577F8335E26AA7191198035F_gshared_inline (Enumerator_t749ECD21102D25154785738AC993322CE5A9A3D6 * __this, const RuntimeMethod* method)
{
	{
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_0 = (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )__this->get_current_3();
		return (HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Enumerator_get_Current_mFDB2FBE724A02C5CAFAE108E12A75676EFE43A5F_gshared_inline (Enumerator_tA7E1DE1C5B2833EE935A19CAF705B2C053EBC9AB * __this, const RuntimeMethod* method)
{
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )__this->get_current_3();
		return (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_m1DC0B40110173B7E2D13319164F7657C3BE3536D_gshared_inline (Enumerator_tC1FD01C8BB5327D442D71FD022B4338ACD701783 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_current_3();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_current_3();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
