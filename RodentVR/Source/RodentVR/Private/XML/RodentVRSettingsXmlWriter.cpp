// Fill out your copyright notice in the Description page of Project Settings.


#include "XML/RodentVRSettingsXmlWriter.h"
#include "XML/MazeSettingsXmlWriter.h"

void URodentVRSettingsXmlWriter::SaveRodentVRSettings(URodentVRSettings* Settings, bool SaveMazesInPlaylist)
{
	rapidxml::xml_document<>* Document = UXmlFileWriter::CreateDocument("Settings");
	rapidxml::xml_node<>* Root = Document->first_node();

	URodentVRSettingsXmlWriter::SaveBallInput(Document, Root, Settings);
	URodentVRSettingsXmlWriter::SaveAirPuffers(Document, Root, Settings);
	URodentVRSettingsXmlWriter::SaveRewardDevices(Document, Root, Settings);
	URodentVRSettingsXmlWriter::SavePlaylist(Document, Root, Settings);
	URodentVRSettingsXmlWriter::SaveGraphics(Document, Root, Settings);

	UXmlFileWriter::AddBoolAttribute(Document, Root, "IsNidaqEnabled", Settings->GetIsNidaqEnabled());
	UXmlFileWriter::AddBoolAttribute(Document, Root, "ShouldWarnIfNidaqServicesDisabled", Settings->GetShouldWarnIfNidaqServicesDisabled());


	UXmlFileWriter::SaveFile(Document, TCHAR_TO_UTF8(*Settings->GetSettingsFileName()));

	if (SaveMazesInPlaylist)
	{
		for (UMazeSettings* MazeSettings : Settings->GetMazePlaylist())
		{
			UMazeSettingsXmlWriter::SaveMazeSettings(MazeSettings);
		}
	}
}

void URodentVRSettingsXmlWriter::SaveBallInput(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings)
{
	rapidxml::xml_node<>* BallInputNode = UXmlFileWriter::AddNode(Document, Root, "BallInput");
	rapidxml::xml_node<>* MouseADeviceNode = UXmlFileWriter::AddNode(Document, BallInputNode, "MouseADevice");
	rapidxml::xml_node<>* MouseBDeviceNode = UXmlFileWriter::AddNode(Document, BallInputNode, "MouseBDevice");
	UXmlFileWriter::AddStringAttribute(Document, MouseADeviceNode, "DeviceName", Settings->GetBallInputMouseADevice());
	UXmlFileWriter::AddStringAttribute(Document, MouseBDeviceNode, "DeviceName", Settings->GetBallInputMouseBDevice());
	UXmlFileWriter::AddFloatAttribute(Document, MouseADeviceNode, "Multiplier", Settings->GetBallInputMouseAMultiplier());
	UXmlFileWriter::AddFloatAttribute(Document, MouseBDeviceNode, "Multiplier", Settings->GetBallInputMouseBMultiplier());
	UXmlFileWriter::AddBoolAttribute(Document, MouseADeviceNode, "IsOnBack", Settings->GetBallInputMouseAIsOnBack());
	UXmlFileWriter::AddBoolAttribute(Document, MouseBDeviceNode, "IsOnRight", Settings->GetBallInputMouseBIsOnRight());
}

void URodentVRSettingsXmlWriter::SaveAirPuffers(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings)
{
	rapidxml::xml_node<>* AirPuffersNode = UXmlFileWriter::AddNode(Document, Root, "AirPuffers");
	UXmlFileWriter::AddFloatAttribute(Document, AirPuffersNode, "FrontToleranceAngle", Settings->GetAirPufferFrontAngle());
	UXmlFileWriter::AddDeviceNode(Document, AirPuffersNode, "LeftDevice", Settings->GetAirPufferLeftDevice());
	UXmlFileWriter::AddDeviceNode(Document, AirPuffersNode, "RightDevice", Settings->GetAirPufferRightDevice());
}

void URodentVRSettingsXmlWriter::SaveRewardDevices(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings)
{
	rapidxml::xml_node<>* RewardDevicesNode = UXmlFileWriter::AddNode(Document, Root, "RewardDevices");
	for (UDevice* Device : Settings->GetRewardDevices())
	{
		UXmlFileWriter::AddDeviceNode(Document, RewardDevicesNode, "RewardDevice", Device);
	}
}

void URodentVRSettingsXmlWriter::SavePlaylist(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings)
{
	rapidxml::xml_node<>* PlaylistNode = UXmlFileWriter::AddNode(Document, Root, "Playlist");
	for (UMazeSettings* Maze : Settings->GetMazePlaylist())
	{
		rapidxml::xml_node<>* MazeNode = UXmlFileWriter::AddNode(Document, PlaylistNode, "MazeFile");
		UXmlFileWriter::AddStringAttribute(Document, MazeNode, "Path", Maze->GetMazeSettingsFileName());
	}
}

void URodentVRSettingsXmlWriter::SaveGraphics(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings)
{
	rapidxml::xml_node<>* GraphicsNode = UXmlFileWriter::AddNode(Document, Root, "Graphics");
	UGraphicsSettings* GraphicsSettings = Settings->GetGraphicsSettings();
	if (IsValid(GraphicsSettings))
	{
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "TextureQuality", static_cast<int>(GraphicsSettings->GetTextureQuality()));
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "ShadowQuality", static_cast<int>(GraphicsSettings->GetShadowQuality()));
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "AntiAliasingQuality", static_cast<int>(GraphicsSettings->GetAntiAliasingQuality()));
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "PostProcessingQuality", static_cast<int>(GraphicsSettings->GetPostProcessingQuality()));
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "ScreenPercentage", GraphicsSettings->GetScreenPercentage());
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "ScreenResolutionX", GraphicsSettings->GetScreenResolution().X);
		UXmlFileWriter::AddIntAttribute(Document, GraphicsNode, "ScreenResolutionY", GraphicsSettings->GetScreenResolution().Y);
	}
}
