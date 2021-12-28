// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "XML/RapidXML/rapidxml.hpp"
#include "Settings/TextureSettings.h"
#include "Settings/ActorSettings.h"
#include "Settings/ToneGenerationSettings.h"
#include "Settings/Device.h"
#include <string>
#include "XmlFileWriter.generated.h"

/**
 * 
 */
UCLASS()
class UXmlFileWriter : public UObject
{
	GENERATED_BODY()
	
public:
	static rapidxml::xml_document<>* CreateDocument(std::string RootNodeName);
	static rapidxml::xml_node<>* AddNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName);
	static void AddAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, std::string AttributeValue);
	static void AddFloatAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, float AttributeValue);
	static void AddIntAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, int AttributeValue);
	static void AddStringAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, FString AttributeValue);
	static void AddToneGenerationSettingsNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UToneGenerationSettings* ToneGenerationSettings);
	static rapidxml::xml_node<>* AddTextureNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UTextureSettings* TextureSettings);
	static void AddActorSettingsToNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, UActorSettings* ActorSettings);
	static void AddDeviceNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UDevice* Device);
	static void AddVectorNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, FVector Vector, bool IncludeZ);
	static void AddRotatorNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, FRotator Rotator, bool OnlyIncludeZ);
	static void AddBoolAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, bool AttributeValue);
	static void SaveFile(rapidxml::xml_document<>* Document, std::string FilePath);
};
