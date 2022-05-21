#pragma once
#include "IFineStrategy.h"

class BoardGamesFineStrategy: public IFineStrategy{
public:
	float calculateFine(LendingRecord* lendingRecord) override;
};

