#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPI_Activate.h"
#include "BaseItem_01.generated.h"

UCLASS()
class CPPBPINTERFACE_UE532_API ABaseItem_01 : public AActor, public ICPPI_Activate { 
	GENERATED_BODY()
	
public:	
	ABaseItem_01();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
