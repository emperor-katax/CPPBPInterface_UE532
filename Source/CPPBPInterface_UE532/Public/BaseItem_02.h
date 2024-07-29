#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPI_CheckKey.h"
#include "BaseItem_02.generated.h"

UCLASS()
class CPPBPINTERFACE_UE532_API ABaseItem_02 : public AActor, public ICPPI_CheckKey {
	GENERATED_BODY()
	
public:	
	ABaseItem_02();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
