#include "WeatherController.h"

AWeatherController::AWeatherController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->WeatherPresets.AddDefaulted(10);
    this->SourceWeather = EWeather::Clearly;
    this->TargetWeather = EWeather::Clearly;

    this->SourcePreset = NULL;
    this->TargetPreset = NULL;

}



