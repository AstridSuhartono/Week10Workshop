#pragma once
#include "IFineStrategy.h"

class BooksFineStrategy: public IFineStrategy {
public:
	float calculateFine(LendingRecord* lendingRecord) override;
};

