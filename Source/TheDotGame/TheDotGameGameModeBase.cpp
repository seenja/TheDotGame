// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "TheDotGameGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"
#include "GridHandler.h"
#include "Engine/World.h"

ATheDotGameGameModeBase::ATheDotGameGameModeBase()
{
	// no pawn by default
	DefaultPawnClass = AMyPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AMyPlayerController::StaticClass();
	/*
	// added for blueprint access
	MyGridHandler = GetWorld()->SpawnActor<AGridHandler>();
	GameScore = MyGridHandler->NumTilesClicked;
	// added for blueprint access **/
}
