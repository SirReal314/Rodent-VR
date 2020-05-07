// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StopConditions/StopCondition.h"
#include "RodentGameMode.h"
#include "UObject/NoExportTypes.h"
#include "EnterRegionStopCondition.generated.h"

/**
 *
 */
UCLASS()
class UEnterRegionStopCondition : public UStopCondition
{
	GENERATED_BODY()

private:
	float EnterRegionDelaySec;
	TMap<int, int> EnterRegionCounts;
	TMap<int, int> EnterRegionStopConditionCounts;

	UFUNCTION()
		void OnRewardRegionEnter(int RegionEnteredId);

public:
	~UEnterRegionStopCondition();

	void Init();

	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);

	UFUNCTION()
		void ClearRegionCounts();
	UFUNCTION()
		void RemoveRegionCount(int RegionId);
	UFUNCTION()
		void AddRegionCount(int RegionId, int EnterRegionCount);
	UFUNCTION()
		float GetEnterRegionDelaySec();
	UFUNCTION()
		void SetEnterRegionDelaySec(float EnterRegionDelaySecValue);

};
