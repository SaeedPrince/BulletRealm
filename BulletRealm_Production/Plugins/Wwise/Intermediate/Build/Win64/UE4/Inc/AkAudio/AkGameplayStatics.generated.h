// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioBank;
class UObject;
class AActor;
class UAkAudioEvent;
struct FVector;
struct FRotator;
class UAkComponent;
class USceneComponent;
#ifdef AKAUDIO_AkGameplayStatics_generated_h
#error "AkGameplayStatics.generated.h already included, missing '#pragma once' in AkGameplayStatics.h"
#endif
#define AKAUDIO_AkGameplayStatics_generated_h

#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopProfilerCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopProfilerCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartProfilerCapture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StartProfilerCapture(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopOutputCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopOutputCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOutputCaptureMarker) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MarkerText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::AddOutputCaptureMarker(Z_Param_MarkerText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartOutputCapture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StartOutputCapture(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBankByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::UnloadBankByName(Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBank) \
	{ \
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::UnloadBank(Z_Param_Bank,Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadInitBank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadInitBank(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBanks) \
	{ \
		P_GET_TARRAY_REF(UAkAudioBank*,Z_Param_Out_SoundBanks); \
		P_GET_UBOOL(Z_Param_SynchronizeSoundBanks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadBanks(Z_Param_Out_SoundBanks,Z_Param_SynchronizeSoundBanks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBankByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadBankByName(Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBank) \
	{ \
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadBank(Z_Param_Bank,Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBanks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::ClearBanks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllAmbientSounds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopAllAmbientSounds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAllAmbientSounds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StartAllAmbientSounds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RefreshInterval); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetOcclusionRefreshInterval(Z_Param_RefreshInterval,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputBusVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusVolume); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetOutputBusVolume(Z_Param_BusVolume,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReverbVolumes) \
	{ \
		P_GET_UBOOL(Z_Param_inUseReverbVolumes); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::UseReverbVolumes(Z_Param_inUseReverbVolumes,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSwitch) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SwitchGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SwitchState); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetSwitch(Z_Param_SwitchGroup,Z_Param_SwitchState,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTrigger) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Trigger); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::PostTrigger(Z_Param_Trigger,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StateGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetState(Z_Param_StateGroup,Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRTPCValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_RTPC); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InterpolationTimeMs); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetRTPCValue(Z_Param_RTPC,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_UBOOL(Z_Param_AutoPost); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_UBOOL(Z_Param_AutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::SpawnAkComponentAtLocation(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_AutoPost,Z_Param_EventName,Z_Param_AutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAtLocationByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::PostEventAtLocationByName(Z_Param_EventName,Z_Param_Location,Z_Param_Orientation,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAtLocation) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAtLocation(Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_EventName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::PostEventByName(Z_Param_EventName,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEvent) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAttached) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAttached(Z_Param_AkEvent,Z_Param_Actor,Z_Param_AttachPointName,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetAkComponent(Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType)); \
		P_NATIVE_END; \
	}


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopProfilerCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopProfilerCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartProfilerCapture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StartProfilerCapture(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopOutputCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopOutputCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOutputCaptureMarker) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MarkerText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::AddOutputCaptureMarker(Z_Param_MarkerText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartOutputCapture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StartOutputCapture(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBankByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::UnloadBankByName(Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBank) \
	{ \
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::UnloadBank(Z_Param_Bank,Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadInitBank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadInitBank(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBanks) \
	{ \
		P_GET_TARRAY_REF(UAkAudioBank*,Z_Param_Out_SoundBanks); \
		P_GET_UBOOL(Z_Param_SynchronizeSoundBanks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadBanks(Z_Param_Out_SoundBanks,Z_Param_SynchronizeSoundBanks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBankByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadBankByName(Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBank) \
	{ \
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BankName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::LoadBank(Z_Param_Bank,Z_Param_BankName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearBanks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::ClearBanks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllAmbientSounds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopAllAmbientSounds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAllAmbientSounds) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StartAllAmbientSounds(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::StopActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RefreshInterval); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetOcclusionRefreshInterval(Z_Param_RefreshInterval,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputBusVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusVolume); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetOutputBusVolume(Z_Param_BusVolume,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReverbVolumes) \
	{ \
		P_GET_UBOOL(Z_Param_inUseReverbVolumes); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::UseReverbVolumes(Z_Param_inUseReverbVolumes,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSwitch) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SwitchGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SwitchState); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetSwitch(Z_Param_SwitchGroup,Z_Param_SwitchState,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTrigger) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Trigger); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::PostTrigger(Z_Param_Trigger,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StateGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetState(Z_Param_StateGroup,Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRTPCValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_RTPC); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InterpolationTimeMs); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::SetRTPCValue(Z_Param_RTPC,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_UBOOL(Z_Param_AutoPost); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_UBOOL(Z_Param_AutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::SpawnAkComponentAtLocation(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_AutoPost,Z_Param_EventName,Z_Param_AutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAtLocationByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::PostEventAtLocationByName(Z_Param_EventName,Z_Param_Location,Z_Param_Orientation,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAtLocation) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAtLocation(Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_EventName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAkGameplayStatics::PostEventByName(Z_Param_EventName,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEvent) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAttached) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAttached(Z_Param_AkEvent,Z_Param_Actor,Z_Param_AttachPointName,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetAkComponent(Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType)); \
		P_NATIVE_END; \
	}


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkGameplayStatics(); \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkGameplayStatics(); \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public:


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameplayStatics)


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_PRIVATE_PROPERTY_OFFSET
#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_17_PROLOG
#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_PRIVATE_PROPERTY_OFFSET \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_RPC_WRAPPERS \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_INCLASS \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_PRIVATE_PROPERTY_OFFSET \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_INCLASS_NO_PURE_DECLS \
	BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkGameplayStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletRealm_Production_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS