// Copyright Epic Games, Inc. All Rights Reserved.

#include "sidescrollerGameMode.h"
#include "sidescrollerCharacter.h"

AsidescrollerGameMode::AsidescrollerGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AsidescrollerCharacter::StaticClass();	
}
