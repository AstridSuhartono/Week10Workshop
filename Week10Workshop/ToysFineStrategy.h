#pragma once
#include "IFineStrategy.h"
class ToysFineStrategy : public IFineStrategy
{
public:
	float calculateFine(LendingRecord* lendingRecord) override;
};

