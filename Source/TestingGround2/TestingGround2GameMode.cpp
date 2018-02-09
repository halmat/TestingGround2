// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGround2GameMode.h"
#include "TestingGround2HUD.h"
#include "TestingGround2Character.h"
#include "UObject/ConstructorHelpers.h"

ATestingGround2GameMode::ATestingGround2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGround2HUD::StaticClass();
}
