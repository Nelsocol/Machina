// Copyright Epic Games, Inc. All Rights Reserved.

#include "MachinaGameMode.h"
#include "MachinaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMachinaGameMode::AMachinaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
