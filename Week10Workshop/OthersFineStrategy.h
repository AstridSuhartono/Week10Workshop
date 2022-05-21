#pragma once
#include "IFineStrategy.h"
class OthersFineStrategy: public IFineStrategy
{
public:
	float calculateFine(LendingRecord* lendingRecord) override;
};

