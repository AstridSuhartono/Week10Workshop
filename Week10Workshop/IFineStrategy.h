#pragma once
#include "LendingRecord.h"

class IFineStrategy{
public:
	virtual float calculateFine(LendingRecord* lendingRecord);
};

