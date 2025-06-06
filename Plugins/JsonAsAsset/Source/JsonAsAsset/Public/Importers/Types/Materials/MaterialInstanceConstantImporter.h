/* Copyright JsonAsAsset Contributors 2024-2025 */

#pragma once

#include "Importers/Constructor/Importer.h"

class IMaterialInstanceConstantImporter : public IImporter {
public:
	IMaterialInstanceConstantImporter(const FString& FileName, const FString& FilePath, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg, const TArray<TSharedPtr<FJsonValue>>& AllJsonObjects, UClass* AssetClass):
		IImporter(FileName, FilePath, JsonObject, Package, OutermostPkg, AllJsonObjects, AssetClass) {
	}

	virtual bool Import() override;

	static void ReadStaticParameters(const TSharedPtr<FJsonObject>& StaticParameters, TArray<TSharedPtr<FJsonValue>>& StaticSwitchParameters, TArray<TSharedPtr<FJsonValue>>& StaticComponentMaskParameters);
};

REGISTER_IMPORTER(IMaterialInstanceConstantImporter, {
	"MaterialInstanceConstant"
}, "Material Assets");