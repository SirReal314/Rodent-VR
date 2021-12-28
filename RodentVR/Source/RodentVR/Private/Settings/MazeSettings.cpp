// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSettings.h"
#include "Simulator/AssetLoader.h"
#include "StopConditions/EnterRegionStopCondition.h"
#include "StopConditions/StopCondition.h"

UMazeSettings::UMazeSettings()
{
	this->PlayerStart = NewObject<UStartPositionSettings>(this, TEXT("PlayerStart"));
}


bool UMazeSettings::DoesMazeHaveSettings() const
{
	bool HasStopConditions = (this->StopConditions.Num() > 0);
	bool HasTextures = (this->Textures.Num() > 0);
	bool HasMazeObjects = (this->MazeObjects.Num() > 0);
	bool HasRegions = (this->RegionSettings.Num() > 0);
	return HasStopConditions || HasTextures || HasMazeObjects || HasRegions;
}

float UMazeSettings::GetMazeIterations()
{
	return this->Iterations;
}

void UMazeSettings::SetMazeIterations(float IterationsValue)
{
	this->Iterations = IterationsValue;
}

float UMazeSettings::GetMazeIterator()
{
	return this->Iterator;
}

void UMazeSettings::SetMazeIterator(float IteratorValue)
{
	this->Iterator = IteratorValue;
}

void UMazeSettings::IterateMaze()
{
	this->Iterator--;
}

void UMazeSettings::ReverseIterateMaze()
{
	this->Iterator++;
}

float UMazeSettings::GetDelay()
{
	return this->Delay;
}

void UMazeSettings::SetDelay(float Value)
{
	this->Delay = Value;
}

bool UMazeSettings::IsFirst()
{
	return this->First;
}

void UMazeSettings::SetIsFirst(bool Value)
{
	this->First = Value;
}

FString UMazeSettings::GetMazeName()
{
	return this->MazeName;
}

void UMazeSettings::SetMazeName(FString MazeNameValue)
{
	this->MazeName = MazeNameValue;

	this->MazeObjects.Empty();
	this->Textures.Empty();
	this->RegionSettings.Empty();
	this->StopConditions.Empty();
	this->PlayerStart = NewObject<UStartPositionSettings>();
}

FString UMazeSettings::GetMazeSettingsFileName()
{
	return this->MazeSettingsFileName;
}

void UMazeSettings::SetMazeSettingsFileName(FString MazeSettingsFileNameValue)
{
	this->MazeSettingsFileName = MazeSettingsFileNameValue;
}

FString UMazeSettings::GetBehaviorRecordingFileName()
{
	return this->BehaviorRecordingFileName;
}

void UMazeSettings::SetBehaviorRecordingFileName(FString BehaviorRecordingFileNameValue)
{
	this->BehaviorRecordingFileName = BehaviorRecordingFileNameValue;
}

float UMazeSettings::GetBehaviorRecordingTimeBetweenSnapshots()
{
	return this->BehaviorRecordingTimeBetweenSnapshots;
}

void UMazeSettings::SetBehaviorRecordingTimeBetweenSnapshots(float BehaviorRecordingTimeBetweenSnapshotsValue)
{
	this->BehaviorRecordingTimeBetweenSnapshots = BehaviorRecordingTimeBetweenSnapshotsValue;
}

UStartPositionSettings* UMazeSettings::GetPlayerStart()
{
	return this->PlayerStart;
}

void UMazeSettings::SetPlayerStart(UStartPositionSettings* PlayerStartValue)
{
	this->PlayerStart = PlayerStartValue;
}

TMap<FString, UTextureSettings*> UMazeSettings::GetTextures()
{
	return this->Textures;
}

void UMazeSettings::ClearTextures()
{
	this->Textures.Empty();
}

void UMazeSettings::AddTexture(FString SlotName, UTextureSettings* TextureValue)
{
	this->Textures.Add(SlotName, TextureValue);
}

void UMazeSettings::RemoveTexture(FString SlotName)
{
	this->Textures.Remove(SlotName);
}

void UMazeSettings::ClearStopConditions()
{
	this->StopConditions.Empty();
}

void UMazeSettings::RemoveStopCondition(UStopCondition* StopCondition)
{
	this->StopConditions.Remove(StopCondition);
}

void UMazeSettings::AddStopCondition(UStopCondition* StopCondition)
{
	this->StopConditions.Add(StopCondition);
}

TArray<UStopCondition*> UMazeSettings::GetStopConditions()
{
	return this->StopConditions;
}

void UMazeSettings::ClearMazeObjects()
{
	this->MazeObjects.Empty();
}

void UMazeSettings::RemoveMazeObject(UMazeObjectSettings* MazeObjectValue)
{
	this->MazeObjects.Remove(MazeObjectValue);
}

void UMazeSettings::AddMazeObject(UMazeObjectSettings* MazeObjectValue)
{
	this->MazeObjects.Add(MazeObjectValue);
}

TArray<UMazeObjectSettings*> UMazeSettings::GetMazeObjects()
{
	return this->MazeObjects;
}

void UMazeSettings::ClearRegionSystemSettings()
{
	this->RegionSystemSettings.Empty();
}

void UMazeSettings::RemoveRegionSystemSetting(URegionSystemSettings* RegionSystemSettingValue)
{
	this->RegionSystemSettings.Remove(RegionSystemSettingValue);

}

void UMazeSettings::AddRegionSystemSetting(URegionSystemSettings* RegionSystemSettingValue)
{
	this->RegionSystemSettings.Add(RegionSystemSettingValue);
}

TArray<URegionSystemSettings*> UMazeSettings::GetRegionSystemSettings()
{
	return this->RegionSystemSettings;
}


URegionSystemSettings* UMazeSettings::GetSystemSettingById(FString SystemIdValue)
{
	for (URegionSystemSettings* System : this->GetRegionSystemSettings())
	{
		
	}
	return nullptr;
}

void UMazeSettings::ClearRegionSettings()
{
	this->RegionSettings.Empty();
}

void UMazeSettings::RemoveRegionSettings(URegionSettings* RegionSettingsValue)
{
	this->RegionSettings.Remove(RegionSettingsValue);

	for (UStopCondition* StopCondition : this->GetStopConditions())
	{
		UEnterRegionStopCondition* EnterRegionStopCondition = Cast<UEnterRegionStopCondition>(StopCondition);
		if (IsValid(EnterRegionStopCondition))
		{
			EnterRegionStopCondition->RemoveRegionStopConditionCount(RegionSettingsValue);
		}
	}
}

void UMazeSettings::AddRegionSettings(URegionSettings* RegionSettingsValue)
{
	this->RegionSettings.Add(RegionSettingsValue);
}

TArray<URegionSettings*> UMazeSettings::GetRegionSettings()
{
	return this->RegionSettings;
}


URegionSettings* UMazeSettings::GetRegionById(FString RegionIdValue)
{
	for (URegionSettings* Region : this->GetRegionSettings())
	{
		if (Region->GetRegionId() == RegionIdValue)
		{
			return Region;
		}
	}
	return nullptr;
}
