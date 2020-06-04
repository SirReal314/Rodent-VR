// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetLoader.h"

EImageFormat UAssetLoader::GetImageFormatFromFileName(const FString& FileName)
{
	TArray<FString> SplitFileName;
	FileName.ParseIntoArray(SplitFileName, TEXT("."));
	if (SplitFileName.Num() > 0)
	{
		FString Extension = SplitFileName.Last(0).ToLower();
		if (Extension == TEXT("png"))
		{
			return EImageFormat::PNG;
		}
		else if (Extension == TEXT("jpg") || Extension == TEXT("jpeg"))
		{
			return EImageFormat::JPEG;
		}
	}
	return EImageFormat::Invalid;
}

UTexture2D* UAssetLoader::LoadTextureFromFile(const FString& FileName, bool& IsValid, int32& Width, int32& Height)
{
	IsValid = false;
	UTexture2D* LoadedT2D = NULL;

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(UAssetLoader::GetImageFormatFromFileName(FileName));

	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FileName)) return NULL;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		TArray<uint8> UncompressedBGRA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		{
			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			//Valid?
			if (!LoadedT2D) return NULL;
			//~~~~~~~~~~~~~~

			//Out!
			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();

			//Copy!
			void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}

	// Success!
	IsValid = true;
	return LoadedT2D;
}

UMaterialInstanceDynamic* UAssetLoader::LoadMaterialInstanceFromTextureFile(const FString& FileName, UObject* OuterObject)
{
	bool IsValid;
	int Width, Height;
	UTexture2D* Texture = UAssetLoader::LoadTextureFromFile(FileName, IsValid, Width, Height);
	if (!IsValid)
	{
		Texture = UAssetLoader::LoadAssetFromPath<UTexture2D>(TEXT("Texture2D'/Game/Materials/Textures/TextureGray.TextureGray"));
	}

	UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/Materials/M_Textured.M_Textured");
	UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, OuterObject);
	DynamicMaterial->SetTextureParameterValue(FName("Material Texture"), Texture);
	DynamicMaterial->SetScalarParameterValue(FName("Is Highlighted"), 0.0);
	return DynamicMaterial;
}
