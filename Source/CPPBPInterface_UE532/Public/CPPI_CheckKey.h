#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CPPI_CheckKey.generated.h"

UINTERFACE(MinimalAPI)
class UCPPI_CheckKey : public UInterface
{
	GENERATED_BODY()
};


class CPPBPINTERFACE_UE532_API ICPPI_CheckKey{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ CheckKey Interface")
	void CPPI_Data_ID_Transfer(const FString& password, int& ID);
};
