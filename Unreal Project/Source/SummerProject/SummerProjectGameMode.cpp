// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SummerProjectGameMode.h"
#include "SummerProjectHUD.h"
#include "SummerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASummerProjectGameMode::ASummerProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASummerProjectHUD::StaticClass();
}
