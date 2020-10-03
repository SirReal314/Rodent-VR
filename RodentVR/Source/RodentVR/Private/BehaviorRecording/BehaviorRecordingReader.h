// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorSnapshot.h"
#include "BehaviorRecordingReader.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UBehaviorRecordingReader : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void LoadBehaviorRecordingFromFile(FString BehaviorRecordingFileName, FString& SettingsFileName, FString& MazeFileName, TArray<UBehaviorSnapshot*>& BehaviorSnapshots);
	
};
