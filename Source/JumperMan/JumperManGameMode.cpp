// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "JumperManGameMode.h"
#include "JumperManCharacter.h"

AJumperManGameMode::AJumperManGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AJumperManCharacter::StaticClass();	
}
