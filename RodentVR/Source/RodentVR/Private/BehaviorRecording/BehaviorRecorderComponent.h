// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BehaviorRecording/BehaviorSnapshot.h"
#include "BehaviorRecorderComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UBehaviorRecorderComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBehaviorRecorderComponent();

	UFUNCTION()
	void Save(FString Filename);
	
	void Save();

private:
	TArray<BehaviorSnapshot> Snapshots;
	float StartTimeSec;
	int CurrentRegion;
	UFUNCTION()
	void OnRewardRegionEnter(int RegionEnteredId);
	UFUNCTION()
	void OnMazeLoaded();
	UFUNCTION()
	void OnMazeFinished();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};