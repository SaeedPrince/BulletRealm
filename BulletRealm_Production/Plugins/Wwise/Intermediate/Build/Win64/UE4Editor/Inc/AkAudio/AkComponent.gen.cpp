// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetActiveListeners();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_Stop();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAttenuationRadius", (Native)&UAkComponent::execGetAttenuationRadius },
			{ "PostAkEvent", (Native)&UAkComponent::execPostAkEvent },
			{ "PostAkEventByName", (Native)&UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEvent", (Native)&UAkComponent::execPostAssociatedAkEvent },
			{ "PostTrigger", (Native)&UAkComponent::execPostTrigger },
			{ "SetActiveListeners", (Native)&UAkComponent::execSetActiveListeners },
			{ "SetAttenuationScalingFactor", (Native)&UAkComponent::execSetAttenuationScalingFactor },
			{ "SetOutputBusVolume", (Native)&UAkComponent::execSetOutputBusVolume },
			{ "SetRTPCValue", (Native)&UAkComponent::execSetRTPCValue },
			{ "SetStopWhenOwnerDestroyed", (Native)&UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", (Native)&UAkComponent::execSetSwitch },
			{ "Stop", (Native)&UAkComponent::execStop },
			{ "UseReverbVolumes", (Native)&UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAttenuationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020409, 65535, sizeof(AkComponent_eventGetAttenuationRadius_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventGetAttenuationRadius_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent()
	{
		struct AkComponent_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostAkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostAkEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventPostAkEvent_Parms), 0x0010000000000580);
			UProperty* NewProp_in_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("in_EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(in_EventName, AkComponent_eventPostAkEvent_Parms), 0x0010040000000080);
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkComponent_eventPostAkEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts an event to Wwise, using this component as the game object source\n\n@param AkEvent               The event to post"));
			MetaData->SetValue(NewProp_in_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostAkEventByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostAkEventByName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventPostAkEventByName_Parms), 0x0010000000000580);
			UProperty* NewProp_in_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("in_EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(in_EventName, AkComponent_eventPostAkEventByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Event Name\" field of Post Ak Event"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts an event to Wwise using its name, using this component as the game object source\n\n@param AkEvent               The event to post"));
			MetaData->SetValue(NewProp_in_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent()
	{
		struct AkComponent_eventPostAssociatedAkEvent_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostAssociatedAkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostAssociatedAkEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkComponent_eventPostAssociatedAkEvent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts this component's AkAudioEvent to Wwise, using this component as the game object source"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			FString Trigger;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostTrigger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventPostTrigger_Parms));
			UProperty* NewProp_Trigger = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Trigger"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Trigger, AkComponent_eventPostTrigger_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetActiveListeners()
	{
		struct AkComponent_eventSetActiveListeners_Parms
		{
			int32 in_uListenerMask;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetActiveListeners"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetActiveListeners_Parms));
			UProperty* NewProp_in_uListenerMask = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("in_uListenerMask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(in_uListenerMask, AkComponent_eventSetActiveListeners_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a game object's active listeners\n\n@param in_uListenerMask      Bitmask representing the active listeners (LSB = Listener 0, set to 1 means active)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAttenuationScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AkComponent_eventSetAttenuationScalingFactor_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOutputBusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetOutputBusVolume_Parms));
			UProperty* NewProp_BusVolume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BusVolume, AkComponent_eventSetOutputBusVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue()
	{
		struct AkComponent_eventSetRTPCValue_Parms
		{
			FString RTPC;
			float Value;
			int32 InterpolationTimeMs;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRTPCValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetRTPCValue_Parms));
			UProperty* NewProp_InterpolationTimeMs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InterpolationTimeMs"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(InterpolationTimeMs, AkComponent_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AkComponent_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_RTPC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RTPC"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RTPC, AkComponent_eventSetRTPCValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets an RTPC value, using this component as the game object source\n\n@param RTPC                  The name of the RTPC to set\n@param Value                 The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenOwnerDestroyed, AkComponent_eventSetStopWhenOwnerDestroyed_Parms);
			UProperty* NewProp_bStopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenOwnerDestroyed, AkComponent_eventSetStopWhenOwnerDestroyed_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenOwnerDestroyed, AkComponent_eventSetStopWhenOwnerDestroyed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			FString SwitchGroup;
			FString SwitchState;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventSetSwitch_Parms));
			UProperty* NewProp_SwitchState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SwitchState, AkComponent_eventSetSwitch_Parms), 0x0010000000000080);
			UProperty* NewProp_SwitchGroup = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SwitchGroup, AkComponent_eventSetSwitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops playback using this component as the game object to stop"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		UObject* Outer = Z_Construct_UClass_UAkComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(AkComponent_eventUseReverbVolumes_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(inUseReverbVolumes, AkComponent_eventUseReverbVolumes_Parms);
			UProperty* NewProp_inUseReverbVolumes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inUseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inUseReverbVolumes, AkComponent_eventUseReverbVolumes_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(inUseReverbVolumes, AkComponent_eventUseReverbVolumes_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes    Whether to use reverb volumes or not."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostAkEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostAkEventByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_PostTrigger());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetActiveListeners());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetRTPCValue());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_SetSwitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkComponent_UseReverbVolumes());

				UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, UAkComponent), 0x0010040000000005);
				UProperty* NewProp_AkAudioEvent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AkAudioEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkAudioEvent, UAkComponent), 0x0010000000000005, Z_Construct_UClass_UAkAudioEvent_NoRegister());
				UProperty* NewProp_OcclusionRefreshInterval = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OcclusionRefreshInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OcclusionRefreshInterval, UAkComponent), 0x0010000000000005);
				UProperty* NewProp_AttenuationScalingFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationScalingFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AttenuationScalingFactor, UAkComponent), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(StopWhenOwnerDestroyed, UAkComponent);
				UProperty* NewProp_StopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(StopWhenOwnerDestroyed, UAkComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(StopWhenOwnerDestroyed, UAkComponent), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius(), "GetAttenuationRadius"); // 650887783
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostAkEvent(), "PostAkEvent"); // 1735402426
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostAkEventByName(), "PostAkEventByName"); // 887460483
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent(), "PostAssociatedAkEvent"); // 164433466
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_PostTrigger(), "PostTrigger"); // 1732466351
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetActiveListeners(), "SetActiveListeners"); // 4278928626
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor(), "SetAttenuationScalingFactor"); // 2847467645
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume(), "SetOutputBusVolume"); // 1804623147
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetRTPCValue(), "SetRTPCValue"); // 859237016
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed(), "SetStopWhenOwnerDestroyed"); // 3044418209
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_SetSwitch(), "SetSwitch"); // 927620291
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_Stop(), "Stop"); // 1845080565
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkComponent_UseReverbVolumes(), "UseReverbVolumes"); // 1709507227
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("AutoExpandCategories"), TEXT("AkComponent"));
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Audiokinetic"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UAkComponent"));
				MetaData->SetValue(NewProp_EventName, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_EventName, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_AkAudioEvent, TEXT("ToolTip"), TEXT("Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect."));
				MetaData->SetValue(NewProp_OcclusionRefreshInterval, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_OcclusionRefreshInterval, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_OcclusionRefreshInterval, TEXT("ToolTip"), TEXT("Time interval between occlusion/obstruction checks. Set to 0 to disable occlusion on this component."));
				MetaData->SetValue(NewProp_AttenuationScalingFactor, TEXT("Category"), TEXT("AkComponent"));
				MetaData->SetValue(NewProp_AttenuationScalingFactor, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_AttenuationScalingFactor, TEXT("ToolTip"), TEXT("Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect."));
				MetaData->SetValue(NewProp_StopWhenOwnerDestroyed, TEXT("ModuleRelativePath"), TEXT("Classes/AkComponent.h"));
				MetaData->SetValue(NewProp_StopWhenOwnerDestroyed, TEXT("ToolTip"), TEXT("Stop sound when owner is destroyed?"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkComponent, 2708894268);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
