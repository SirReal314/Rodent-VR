// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "StopConditions/StopCondition.h"
#include "MazeObjectSettings.h"
#include "Settings/TextureSettings.h"
#include "Settings/StartPositionSettings.h"
#include "Settings/RegionSettings.h"
#include "Settings/RegionSystemSettings.h"
#include "UObject/NoExportTypes.h"
#include "MazeSettings.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class UMazeSettings : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetMazeName, BlueprintSetter = SetMazeName)
		FString MazeName;
	UPROPERTY(BlueprintGetter = GetMazeSettingsFileName, BlueprintSetter = SetMazeSettingsFileName)
		FString MazeSettingsFileName;
	UPROPERTY(BlueprintGetter = GetBehaviorRecordingFileName, BlueprintSetter = SetBehaviorRecordingFileName)
		FString BehaviorRecordingFileName;
	UPROPERTY(BlueprintGetter = GetBehaviorRecordingTimeBetweenSnapshots, BlueprintSetter = SetBehaviorRecordingTimeBetweenSnapshots)
		float BehaviorRecordingTimeBetweenSnapshots = 0.1f;
	UPROPERTY(BlueprintGetter = GetPlayerStart, BlueprintSetter = SetPlayerStart)
		UStartPositionSettings* PlayerStart;
	UPROPERTY(BlueprintGetter = GetRegionSystemSettings)
		TArray<URegionSystemSettings*> RegionSystemSettings;
	UPROPERTY(BlueprintGetter = GetRegionSettings)
		TArray<URegionSettings*> RegionSettings;
	UPROPERTY(BlueprintGetter = GetMazeObjects)
		TArray<UMazeObjectSettings*> MazeObjects;
	UPROPERTY(BlueprintGetter = GetTextures)
		TMap<FString, UTextureSettings*> Textures;
	UPROPERTY(BlueprintGetter = GetStopConditions)
		TArray<UStopCondition*> StopConditions;
	UPROPERTY(BlueprintGetter = GetMazeIterations, BlueprintSetter = SetMazeIterations)
		float Iterations;
	UPROPERTY(BlueprintGetter = GetMazeIterator, BlueprintSetter = SetMazeIterator)
		float Iterator;
	UPROPERTY(BlueprintGetter = GetDelay, BlueprintSetter = SetDelay)
		float Delay;
	UPROPERTY(BlueprintGetter = IsFirst, BlueprintSetter = SetIsFirst)
		bool First = true;

public:
	UMazeSettings();

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool DoesMazeHaveSettings() const;

	UFUNCTION(BlueprintGetter)
		float GetMazeIterations();
	UFUNCTION(BlueprintSetter)
		void SetMazeIterations(float IterationsValue);
	UFUNCTION(BlueprintGetter)
		float GetMazeIterator();
	UFUNCTION(BlueprintSetter)
		void SetMazeIterator(float IteratorValue);
	UFUNCTION(BlueprintCallable)
		void IterateMaze();
	UFUNCTION(BlueprintCallable)
		void ReverseIterateMaze();
	UFUNCTION(BlueprintGetter)
		float GetDelay();
	UFUNCTION(BlueprintSetter)
		void SetDelay(float Value);
	UFUNCTION(BlueprintGetter)
		bool IsFirst();
	UFUNCTION(BlueprintSetter)
		void SetIsFirst(bool Value);

	UFUNCTION(BlueprintGetter)
		FString GetMazeName();
	UFUNCTION(BlueprintSetter)
		void SetMazeName(FString MazeNameValue);
	UFUNCTION(BlueprintGetter)
		FString GetMazeSettingsFileName();
	UFUNCTION(BlueprintSetter)
		void SetMazeSettingsFileName(FString MazeSettingsFileNameValue);
	UFUNCTION(BlueprintGetter)
		FString GetBehaviorRecordingFileName();
	UFUNCTION(BlueprintSetter)
		void SetBehaviorRecordingFileName(FString BehaviorRecordingFileNameValue);
	UFUNCTION(BlueprintGetter)
		float GetBehaviorRecordingTimeBetweenSnapshots();
	UFUNCTION(BlueprintSetter)
		void SetBehaviorRecordingTimeBetweenSnapshots(float BehaviorRecordingTimeBetweenSnapshotsValue);
	UFUNCTION(BlueprintGetter)
		UStartPositionSettings* GetPlayerStart();
	UFUNCTION(BlueprintSetter)
		void SetPlayerStart(UStartPositionSettings* PlayerStartValue);
	UFUNCTION(BlueprintGetter)
		TMap<FString, UTextureSettings*> GetTextures();
	UFUNCTION(BlueprintCallable)
		void ClearTextures();
	UFUNCTION(BlueprintCallable)
		void RemoveTexture(FString SlotName);
	UFUNCTION(BlueprintCallable)
		void AddTexture(FString SlotName, UTextureSettings* TextureValue);
	UFUNCTION(BlueprintCallable)
		void ClearStopConditions();
	UFUNCTION(BlueprintCallable)
		void RemoveStopCondition(UStopCondition* StopCondition);
	UFUNCTION(BlueprintCallable)
		void AddStopCondition(UStopCondition* StopCondition);
	UFUNCTION(BlueprintGetter)
		TArray<UStopCondition*> GetStopConditions();
	UFUNCTION(BlueprintCallable)
		void ClearMazeObjects();
	UFUNCTION(BlueprintCallable)
		void RemoveMazeObject(UMazeObjectSettings* MazeObjectValue);
	UFUNCTION(BlueprintCallable)
		void AddMazeObject(UMazeObjectSettings* MazeObjectValue);
	UFUNCTION(BlueprintGetter)
		TArray<UMazeObjectSettings*> GetMazeObjects();

	UFUNCTION(BlueprintCallable)
		void ClearRegionSystemSettings();
	UFUNCTION(BlueprintCallable)
		void RemoveRegionSystemSetting(URegionSystemSettings* RegionSystemSettingValue);
	UFUNCTION(BlueprintCallable)  
		void AddRegionSystemSetting(URegionSystemSettings* RegionSystemSettingValue);
	UFUNCTION(BlueprintGetter)
		TArray<URegionSystemSettings*> GetRegionSystemSettings();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		URegionSystemSettings* GetSystemSettingById(FString SystemSettingIdValue);

	UFUNCTION(BlueprintCallable)
		void ClearRegionSettings();
	UFUNCTION(BlueprintCallable)
		void RemoveRegionSettings(URegionSettings* RegionSettingsValue);
	UFUNCTION(BlueprintCallable)
		void AddRegionSettings(URegionSettings* RegionSettingsValue);
	UFUNCTION(BlueprintGetter)
		TArray<URegionSettings*> GetRegionSettings();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		URegionSettings* GetRegionById(FString RegionIdValue);
};
