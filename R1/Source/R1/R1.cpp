// Copyright Epic Games, Inc. All Rights Reserved.

#include "R1.h"
#include "Modules/ModuleManager.h"

#include "R1LogChannel.h"

class FR1Module : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		// Put your startup code here
		UE_LOG(LogTemp, Warning, TEXT("R1 module has started!"));
		UE_LOG(LogR1, Warning, TEXT("R1 module has started!"));
	}

	virtual void ShutdownModule() override
	{
		// Put your shutdown code here
		UE_LOG(LogTemp, Warning, TEXT("R1 module has shut down!"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, R1, "R1" );
