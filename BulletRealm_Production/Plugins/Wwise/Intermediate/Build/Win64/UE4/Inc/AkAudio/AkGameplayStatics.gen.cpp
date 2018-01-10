// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioDevice.h"
#include "Classes/AkGameplayStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkGameplayStatics::StaticRegisterNativesUAkGameplayStatics()
	{
		UClass* Class = UAkGameplayStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddOutputCaptureMarker", (Native)&UAkGameplayStatics::execAddOutputCaptureMarker },
			{ "ClearBanks", (Native)&UAkGameplayStatics::execClearBanks },
			{ "GetAkComponent", (Native)&UAkGameplayStatics::execGetAkComponent },
			{ "LoadBank", (Native)&UAkGameplayStatics::execLoadBank },
			{ "LoadBankByName", (Native)&UAkGameplayStatics::execLoadBankByName },
			{ "LoadBanks", (Native)&UAkGameplayStatics::execLoadBanks },
			{ "LoadInitBank", (Native)&UAkGameplayStatics::execLoadInitBank },
			{ "PostEvent", (Native)&UAkGameplayStatics::execPostEvent },
			{ "PostEventAtLocation", (Native)&UAkGameplayStatics::execPostEventAtLocation },
			{ "PostEventAtLocationByName", (Native)&UAkGameplayStatics::execPostEventAtLocationByName },
			{ "PostEventAttached", (Native)&UAkGameplayStatics::execPostEventAttached },
			{ "PostEventByName", (Native)&UAkGameplayStatics::execPostEventByName },
			{ "PostTrigger", (Native)&UAkGameplayStatics::execPostTrigger },
			{ "SetOcclusionRefreshInterval", (Native)&UAkGameplayStatics::execSetOcclusionRefreshInterval },
			{ "SetOutputBusVolume", (Native)&UAkGameplayStatics::execSetOutputBusVolume },
			{ "SetRTPCValue", (Native)&UAkGameplayStatics::execSetRTPCValue },
			{ "SetState", (Native)&UAkGameplayStatics::execSetState },
			{ "SetSwitch", (Native)&UAkGameplayStatics::execSetSwitch },
			{ "SpawnAkComponentAtLocation", (Native)&UAkGameplayStatics::execSpawnAkComponentAtLocation },
			{ "StartAllAmbientSounds", (Native)&UAkGameplayStatics::execStartAllAmbientSounds },
			{ "StartOutputCapture", (Native)&UAkGameplayStatics::execStartOutputCapture },
			{ "StartProfilerCapture", (Native)&UAkGameplayStatics::execStartProfilerCapture },
			{ "StopActor", (Native)&UAkGameplayStatics::execStopActor },
			{ "StopAll", (Native)&UAkGameplayStatics::execStopAll },
			{ "StopAllAmbientSounds", (Native)&UAkGameplayStatics::execStopAllAmbientSounds },
			{ "StopOutputCapture", (Native)&UAkGameplayStatics::execStopOutputCapture },
			{ "StopProfilerCapture", (Native)&UAkGameplayStatics::execStopProfilerCapture },
			{ "UnloadBank", (Native)&UAkGameplayStatics::execUnloadBank },
			{ "UnloadBankByName", (Native)&UAkGameplayStatics::execUnloadBankByName },
			{ "UseReverbVolumes", (Native)&UAkGameplayStatics::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker()
	{
		struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
		{
			FString MarkerText;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddOutputCaptureMarker"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventAddOutputCaptureMarker_Parms));
			UProperty* NewProp_MarkerText = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MarkerText"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarkerText, AkGameplayStatics_eventAddOutputCaptureMarker_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Add text marker in output capture file.\n@param MarkerText - The name text to put in the marker."));
			MetaData->SetValue(NewProp_MarkerText, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clear all loaded banks"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent()
	{
		struct AkGameplayStatics_eventGetAkComponent_Parms
		{
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			UAkComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAkComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventGetAkComponent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000080588, Z_Construct_UClass_UAkComponent_NoRegister());
			UProperty* NewProp_LocationType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocationType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocationType, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EAttachLocation());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000000080);
			UProperty* NewProp_AttachToComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachToComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachToComponent, AkGameplayStatics_eventGetAkComponent_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AttachPointName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_LocationType"), TEXT("KeepRelativeOffset"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get an AkComponent attached to and following the specified component.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at."));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AttachToComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank()
	{
		struct AkGameplayStatics_eventLoadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventLoadBank_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventLoadBank_Parms), 0x0010040000000080);
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, AkGameplayStatics_eventLoadBank_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads a bank.\n* @param Bank - The bank to load."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName()
	{
		struct AkGameplayStatics_eventLoadBankByName_Parms
		{
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBankByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventLoadBankByName_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventLoadBankByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Bank Name\" field of Load Bank"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads a bank by its name.\n* @param Bank - The bank to load."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks()
	{
		struct AkGameplayStatics_eventLoadBanks_Parms
		{
			TArray<UAkAudioBank*> SoundBanks;
			bool SynchronizeSoundBanks;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422409, 65535, sizeof(AkGameplayStatics_eventLoadBanks_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(SynchronizeSoundBanks, AkGameplayStatics_eventLoadBanks_Parms);
			UProperty* NewProp_SynchronizeSoundBanks = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SynchronizeSoundBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SynchronizeSoundBanks, AkGameplayStatics_eventLoadBanks_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(SynchronizeSoundBanks, AkGameplayStatics_eventLoadBanks_Parms), sizeof(bool), true);
			UProperty* NewProp_SoundBanks = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SoundBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SoundBanks, AkGameplayStatics_eventLoadBanks_Parms), 0x0010000008000182);
			UProperty* NewProp_SoundBanks_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SoundBanks, TEXT("SoundBanks"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UAkAudioBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads an array of bank.\n* @param Banks - An array of banks to load\n* @param CleanUpBanks - If true, will unload any loaded banks that are not in Banks"));
			MetaData->SetValue(NewProp_SoundBanks, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadInitBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Loads the init bank."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent()
	{
		struct AkGameplayStatics_eventPostEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000580);
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEvent_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEvent_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEvent_Parms), sizeof(bool), true);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventPostEvent_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopWhenAttachedToDestroyed"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event attached to and following the root component of the specified actor.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation()
	{
		struct AkGameplayStatics_eventPostEventAtLocation_Parms
		{
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			FString EventName;
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventPostEventAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000580);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010040000000080, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010040000000080);
			UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Orientation, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventPostEventAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName()
	{
		struct AkGameplayStatics_eventPostEventAtLocationByName_Parms
		{
			FString EventName;
			FVector Location;
			FRotator Orientation;
			UObject* WorldContextObject;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventAtLocationByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventPostEventAtLocationByName_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Orientation, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventAtLocationByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Event Name\" field of PostEventAtLocation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event by name at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached()
	{
		struct AkGameplayStatics_eventPostEventAttached_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			FName AttachPointName;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventAttached"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostEventAttached_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000580);
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventAttached_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventAttached_Parms), sizeof(bool), true);
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventPostEventAttached_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AttachPointName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopWhenAttachedToDestroyed"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event attached to and following the specified component.\n@param AkEvent - Wwise Event to post.\n@param Actor - actor on which to post the Wwise Event.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at (NOT FUNCTIONAL).\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName()
	{
		struct AkGameplayStatics_eventPostEventByName_Parms
		{
			FString EventName;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostEventByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostEventByName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventByName_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventByName_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AkGameplayStatics_eventPostEventByName_Parms), sizeof(bool), true);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostEventByName_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventPostEventByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopWhenAttachedToDestroyed"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Event Name\" field of PostEvent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Wwise Event by name attached to and following the root component of the specified actor.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed."));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger()
	{
		struct AkGameplayStatics_eventPostTrigger_Parms
		{
			FName Trigger;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostTrigger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventPostTrigger_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventPostTrigger_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Trigger = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Trigger"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Trigger, AkGameplayStatics_eventPostTrigger_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts a Trigger, targetting the root component of a specified actor.\n@param Trigger - Name of the Trigger\n@param Actor - Actor on which to post the Trigger"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval()
	{
		struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
		{
			float RefreshInterval;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOcclusionRefreshInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_RefreshInterval = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RefreshInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefreshInterval, AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the occlusion calculation refresh interval, targetting the root component of a specified actor.\n@param RefreshInterval - Value of the wanted refresh interval\n@param Actor - Actor on which to set the refresh interval"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume()
	{
		struct AkGameplayStatics_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOutputBusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetOutputBusVolume_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetOutputBusVolume_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_BusVolume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BusVolume, AkGameplayStatics_eventSetOutputBusVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set\n@param Actor - Actor on which to set the flag"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue()
	{
		struct AkGameplayStatics_eventSetRTPCValue_Parms
		{
			FName RTPC;
			float Value;
			int32 InterpolationTimeMs;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRTPCValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetRTPCValue_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InterpolationTimeMs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InterpolationTimeMs"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(InterpolationTimeMs, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080);
			UProperty* NewProp_RTPC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RTPC"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(RTPC, AkGameplayStatics_eventSetRTPCValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the value of a Game Parameter, optionally targetting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState()
	{
		struct AkGameplayStatics_eventSetState_Parms
		{
			FName StateGroup;
			FName State;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetState_Parms));
			UProperty* NewProp_State = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("State"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(State, AkGameplayStatics_eventSetState_Parms), 0x0010000000000080);
			UProperty* NewProp_StateGroup = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StateGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(StateGroup, AkGameplayStatics_eventSetState_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the active State for a given State Group.\n@param StateGroup - Name of the State Group to be modified\n@param State - Name of the State to be made active"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch()
	{
		struct AkGameplayStatics_eventSetSwitch_Parms
		{
			FName SwitchGroup;
			FName SwitchState;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventSetSwitch_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventSetSwitch_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_SwitchState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchState"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SwitchState, AkGameplayStatics_eventSetSwitch_Parms), 0x0010000000000080);
			UProperty* NewProp_SwitchGroup = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SwitchGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SwitchGroup, AkGameplayStatics_eventSetSwitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the active Switch for a given Switch Group, targetting the root component of a specified actor.\n@param SwitchGroup - Name of the Switch Group to be modified\n@param SwitchState - Name of the Switch to be made active\n@param Actor - Actor on which to set the switch"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation()
	{
		struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
		{
			UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			bool AutoPost;
			FString EventName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnAkComponentAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822409, 65535, sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000080588, Z_Construct_UClass_UAkComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AutoDestroy, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms);
			UProperty* NewProp_AutoDestroy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AutoDestroy, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(AutoDestroy, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(EventName, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010040000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AutoPost, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms);
			UProperty* NewProp_AutoPost = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AutoPost"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AutoPost, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(AutoPost, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_Orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Orientation, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AkEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AkEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AkEvent, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioEvent_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("5"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AutoDestroy"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event.\n@param AutoPost - Automatically post the event once the AkComponent is created.\n@param AutoDestroy - Automatically destroy the AkComponent once the event is finished."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_EventName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds()
	{
		struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartAllAmbientSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStartAllAmbientSounds_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventStartAllAmbientSounds_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkAmbientSound"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start all Ak ambient sounds."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture()
	{
		struct AkGameplayStatics_eventStartOutputCapture_Parms
		{
			FString Filename;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartOutputCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStartOutputCapture_Parms));
			UProperty* NewProp_Filename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Filename, AkGameplayStatics_eventStartOutputCapture_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file."));
			MetaData->SetValue(NewProp_Filename, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture()
	{
		struct AkGameplayStatics_eventStartProfilerCapture_Parms
		{
			FString Filename;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartProfilerCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStartProfilerCapture_Parms));
			UProperty* NewProp_Filename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Filename, AkGameplayStatics_eventStartProfilerCapture_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file."));
			MetaData->SetValue(NewProp_Filename, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor()
	{
		struct AkGameplayStatics_eventStopActor_Parms
		{
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStopActor_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventStopActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop all sounds for an actor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAll"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop all sounds."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds()
	{
		struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAllAmbientSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventStopAllAmbientSounds_Parms));
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AkGameplayStatics_eventStopAllAmbientSounds_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|AkAmbientSound"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop all Ak ambient sounds."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopOutputCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture()
	{
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopProfilerCapture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank()
	{
		struct AkGameplayStatics_eventUnloadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadBank"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventUnloadBank_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventUnloadBank_Parms), 0x0010040000000080);
			UProperty* NewProp_Bank = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Bank, AkGameplayStatics_eventUnloadBank_Parms), 0x0010000000000080, Z_Construct_UClass_UAkAudioBank_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unloads a bank.\n@param Bank - The bank to unload."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName()
	{
		struct AkGameplayStatics_eventUnloadBankByName_Parms
		{
			FString BankName;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UnloadBankByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventUnloadBankByName_Parms));
			UProperty* NewProp_BankName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BankName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BankName, AkGameplayStatics_eventUnloadBankByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|SoundBanks"));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecatedFunction"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DeprecationMessage"), TEXT("Please use the \"Bank Name\" field of Unload Bank"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Unloads a bank by its name.\n@param Bank - The bank to unload."));
			MetaData->SetValue(NewProp_BankName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes()
	{
		struct AkGameplayStatics_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
			AActor* Actor;
		};
		UObject* Outer = Z_Construct_UClass_UAkGameplayStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022409, 65535, sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms));
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, AkGameplayStatics_eventUseReverbVolumes_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(inUseReverbVolumes, AkGameplayStatics_eventUseReverbVolumes_Parms);
			UProperty* NewProp_inUseReverbVolumes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inUseReverbVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inUseReverbVolumes, AkGameplayStatics_eventUseReverbVolumes_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(inUseReverbVolumes, AkGameplayStatics_eventUseReverbVolumes_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audiokinetic|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes - Whether to use reverb volumes or not.\n@param Actor - Actor on which to set the flag"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister()
	{
		return UAkGameplayStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AkAudio();
			OuterClass = UAkGameplayStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetState());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopAll());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker(), "AddOutputCaptureMarker"); // 2727933747
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks(), "ClearBanks"); // 1543546564
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent(), "GetAkComponent"); // 3044450199
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadBank(), "LoadBank"); // 3090073532
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName(), "LoadBankByName"); // 2421623181
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks(), "LoadBanks"); // 402733124
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank(), "LoadInitBank"); // 1259959059
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEvent(), "PostEvent"); // 209273687
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation(), "PostEventAtLocation"); // 3558139353
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName(), "PostEventAtLocationByName"); // 614575399
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached(), "PostEventAttached"); // 1157042696
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName(), "PostEventByName"); // 174786968
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger(), "PostTrigger"); // 2613453595
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval(), "SetOcclusionRefreshInterval"); // 2760362184
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume(), "SetOutputBusVolume"); // 2416012768
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue(), "SetRTPCValue"); // 1611934061
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetState(), "SetState"); // 376386171
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch(), "SetSwitch"); // 3366934345
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation(), "SpawnAkComponentAtLocation"); // 1653958522
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds(), "StartAllAmbientSounds"); // 159730385
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture(), "StartOutputCapture"); // 103224411
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture(), "StartProfilerCapture"); // 746974296
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopActor(), "StopActor"); // 876995177
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopAll(), "StopAll"); // 3886348880
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds(), "StopAllAmbientSounds"); // 2322248568
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture(), "StopOutputCapture"); // 1894768333
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture(), "StopProfilerCapture"); // 3101362923
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank(), "UnloadBank"); // 3967900088
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName(), "UnloadBankByName"); // 844432255
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes(), "UseReverbVolumes"); // 490448459
				static TCppClassTypeInfo<TCppClassTypeTraits<UAkGameplayStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AkGameplayStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AkGameplayStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGameplayStatics, 1589477069);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGameplayStatics(Z_Construct_UClass_UAkGameplayStatics, &UAkGameplayStatics::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
