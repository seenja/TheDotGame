// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TheDotGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class THEDOTGAME_API ATheDotGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	ATheDotGameGameModeBase();
	// added for blueprint access
	/*
	UPROPERTY(VisibleDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	class AGridHandler* MyGridHandler;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 GameScore;
	*/
	// added for blueprint access **
	
};
