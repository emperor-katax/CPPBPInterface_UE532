#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CPPI_Activate.generated.h"

UINTERFACE(MinimalAPI)
class UCPPI_Activate : public UInterface
{
	GENERATED_BODY()
};

/*
 // add interface 
class <PROJECTNAME>_API I<INTERFACENAME>{
	GENERATED_BODY()

	// YOUR FUNCTIONS HERE

	// EXAMPLE FUNCTION:
	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	  //void CoolFunctionA();
};

*/




// example of interface implementations 

class CPPBPINTERFACE_UE532_API ICPPI_Activate{
	GENERATED_BODY()

public:
	// BlueprintImplementableEvent <-- can not be overridden in C++, but can be overridden in any Blueprint class.
	
	// interface function with return value

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	int InterfaceReturnsValue_TypeA(); 

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	int InterfaceReturnsValue_TypeB();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	const int InterfaceReturnsValue_TypeC();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	const int InterfaceReturnsValue_TypeD();

	//

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	int InterfaceReturnsValue_param_I(FString& password);

	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	//int InterfaceReturnsValue_param_II(FString password); //<-- not working

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	int InterfaceReturnsValue_param_II(const FString& password); // <-- use const and &

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	int InterfaceReturnsValue_param_III(const FString& password, const int& ID_Pass, FString& name, int& ID_New);


	// ////////////////////////////////////////////////////////////////////////////////////////////
	// interface event and function

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	void Interact_mode_I(int ID); // interface event

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	void Interact_mode_II(int& ID); // interface function

	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	//void Interact_mode_III(FString Password); //<-- not working

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	void Interact_mode_III(const FString& Password); // <-- use const and & // interface event

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "C++ Activate Interface")
	void Interact_mode_IV(const FString& Password, const int& ID_Pass); // interface event

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	void Interact_mode_V(const FString& password, const int& ID_Pass, FString& name, int& ID_New); // interface function  
	
	
	// /////////////////////////////// /////////////////////////// interface event used in project

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "C++ Activate Interface")
	void CPPI_Activate_Check(); // better naming style CPPI_[interface method name]


};

// https://dev.epicgames.com/community/learning/tutorials/bLXe/interfaces-bp-c
// https://dev.epicgames.com/documentation/en-us/unreal-engine/interfaces-in-unreal-engine?application_version=5.4
// https://unreal.gg-labs.com/wiki-archives/macros-and-data-types/interfaces-in-c++
// https://forums.unrealengine.com/t/how-to-call-interface-method-from-c/494361/5
// https://exiin.com/blog/unreal-c-interface-and-what-to-do-with-it/
