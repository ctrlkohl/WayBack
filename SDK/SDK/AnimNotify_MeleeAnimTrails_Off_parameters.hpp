#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x29 - 0x0)
// Function AnimNotify_MeleeAnimTrails_Off.AnimNotify_MeleeAnimTrails_Off_C.Received_Notify
struct UAnimNotify_MeleeAnimTrails_Off_C_Received_Notify_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F67[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
