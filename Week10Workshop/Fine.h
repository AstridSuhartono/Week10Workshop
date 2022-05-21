#pragma once
#include "LendingRecord.h"
#include "IFineStrategy.h"
class Fine
{
public: 
	float calculateFine(LendingRecord* lendingRecord);
	void setStrategy(IFineStrategy);
private:
	IFineStrategy* strategy;
	float totalFine;
};

