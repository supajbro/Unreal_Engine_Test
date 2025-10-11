// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RunnerPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TEST_PROJECT_API ARunnerPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ARunnerPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponents() override;

protected:
	void MoveLeft();
	void MoveRight();
	void JumpAction();
	void RestartGame();
	
private:
	class ARunnerCharacter* ControllerRunner;
};
