#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E1 (0x5A9 - 0x3C8)
// BlueprintGeneratedClass B_Pickups.B_Pickups_C
class AB_Pickups_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Pivot_Offset;                                      // 0x3E0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation_Bias;                                     // 0x3EC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                  Static_Mesh_Pickup;                                // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skeletal_Mesh_Pickup;                              // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkeletalMesh;                                    // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_a_Backpack;                                     // 0x409(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F9A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            ListOfMaterialsExemptFromReparenting;              // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                   SkeletalOrStaticMeshAssetPrimitive;                // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentElementIndex;                               // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      MIDArray;                                          // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                    CurrentMaterial;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CurrentParentMaterial;                             // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MaterialParentIsValid;                             // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            ListOfParentMaterialsExemptFromReparenting;        // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                       BackpackParticleSystem;                            // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Accumulation;                                 // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed_After_Being_picked_up;                       // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ShrinkParticleWhenPickedUpCurve;                   // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Tossed;                                            // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Activate_Rarity_Particle_Systems;                  // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F9D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                Skeletal_Mesh_Pickup_Hologram;                     // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Hologram_MIDs;                                     // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                      NormalMaps;                                        // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                          Rarity_Color;                                      // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Rarity_Level;                                      // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Current_MID;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Sweep_Brightness;                                  // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                Sweep_Speed;                                       // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Component_Radius__Scaled_;                         // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Component_Radius_Multiplier;                       // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Empty_Normal;                                      // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Static_Mesh_Pickup_Hologram;                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   SkeletalOrStaticMeshHologramAssetPrimitive;        // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Sparkle_Spawn_Rate__Ground_;                       // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                  Outline_Rarity_Colors;                             // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Sphere_Radius;                                     // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Picked_Up_Delay_Before_Glow;                       // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Picked_Up_Fade_In_Time;                            // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Picked_Up_Hold_Time;                               // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Picked_Up_Fade_Out_Time;                           // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Picked_Up_Sweep_Speed;                             // 0x544(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBluglo;                                          // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       BlugloParticleSystem;                              // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Picked_Up_Trail_PS;                                // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Sparkle_Spawn_Rate__Picked_Up_;                    // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                Lifetime__Picked_Up_;                              // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                    Hologram_Material;                                 // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLootGiftForOthers;                               // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  PickupForceFeedback;                               // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Violentium_Particle;                               // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ViolentiumParticleSystem;                          // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Violentium;                                     // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pickups_C");
		return Clss;
	}

	void CreateHologramMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UPhysicalMaterial* CallFunc_GetPhysicalMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item2, class UTexture* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item4, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UTexture* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue2);
	void SetHologramPickedUpParams(bool Tier_0_or_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float CallFunc_Fraction_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2);
	void SpawnPickedUpTrailPS(class UParticleSystemComponent* TrailPS, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void SetRarityColor(enum class EFortRarity Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, int32 Temp_int_Variable7, int32 Temp_int_Variable8, int32 Temp_int_Variable9, int32 Temp_int_Variable10, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, int32 K2Node_Select_Default, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void UserConstructionScript(bool Temp_bool_Variable, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FTransform& Temp_struct_Variable2, bool Temp_bool_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTransform& Temp_struct_Variable3, float CallFunc_FClamp_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, const struct FTransform& Temp_struct_Variable4, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue4, const struct FTransform& Temp_struct_Variable5, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_Select_Default, class UPrimitiveComponent* K2Node_Select2_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue2);
	void ReceiveTick(float DeltaSeconds);
	void OnAboutToEnterBackpack(class AFortPawn* PickupTarget);
	void OnTossed();
	void OnPickedUp();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups(int32 EntryPoint, class AFortPawn* K2Node_Event_PickupTarget, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_LastIndex_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsActive_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_Array_Get_Item, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue2, float K2Node_Event_DeltaSeconds, const struct FLinearColor& CallFunc_Array_Get_Item2, float CallFunc_Add_FloatFloat_ReturnValue, float Temp_float_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortResourceItemDefinition* K2Node_DynamicCast_AsFort_Resource_Item_Definition, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float Temp_float_Variable2, bool CallFunc_Array_Contains_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Array_Contains_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPickupBackpack* K2Node_DynamicCast_AsFort_Pickup_Backpack, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_K2_AttachToComponent_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess5, float K2Node_Select_Default, float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, int32 Temp_int_Variable2, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item6, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
