/*
Copyright 2023 UPO33.All Rights Reserved.
*/


#pragma once

#include "Commandlets/Commandlet.h"

#include "SkelotCommandlet.generated.h"

UCLASS()
class USkelotCommandlet : public UCommandlet
{
	GENERATED_BODY()
private:

	int32 Main(const FString& Params);
};