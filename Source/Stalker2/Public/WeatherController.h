#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Stalker2Globals.h"
#include "WeatherController.generated.h"

// Forward-declare anything you don't want to fully include.
class UWeatherParameterNamesDataAsset;
class UWeatherPresetDataAsset;

UCLASS()
class STALKER2_API AWeatherController : public AActor, public IGSCCustomActorValidatorInterface 
{
    GENERATED_BODY()

public:
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWeatherPresetDataAsset>> WeatherPresets;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    EWeather SourceWeather;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    EWeather TargetWeather;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    UWeatherPresetDataAsset* SourcePreset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    UWeatherPresetDataAsset* TargetPreset;
    
    // If you need other variables or methods that are crucial for compilation,
    // put them here, but keep them minimal.
public:
    AWeatherController(const FObjectInitializer& ObjectInitializer);
};
