// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/GameModeBase.h"
#include "RapidXML/rapidxml.hpp"
//#include "StopConditions/StopConditionsChecker.h"
#include <string>
#include "RodentGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeLoadedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeFinishedDelegate);

class UStopConditionsChecker;
/**
 * 
 */
UCLASS()
class ARodentGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UStopConditionsChecker* StopConditionsChecker;

	UFUNCTION()
	void OnMazeLoaded();
	UFUNCTION()
	void OnMazeFinished();

public:
	ARodentGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AirPufferLeftDeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AirPufferRightDeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirPufferFrontAngle;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MouseADeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MouseBDeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseAMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseBMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BehaviorRecordingFilename;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> RewardDeviceNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PlaylistFiles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CurrentMazeIndex;


	UFUNCTION(BlueprintCallable, Category="Settings Loader")
	void LoadSettings();

	UFUNCTION(BlueprintCallable, Category = "Settings Loader")
	void LoadNextMaze();
	
	virtual void Tick(float DeltaSeconds) override;


	static FMazeLoadedDelegate OnMazeLoadedDelegate;
	static FMazeFinishedDelegate OnMazeFinishedDelegate;
};
