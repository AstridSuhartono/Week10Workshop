#pragma once
#include "Items.h"
#include <vector>
class Hold
{
public:
	bool holdItem(Items* item);
	Items setPriority(Items* holdItem);

private:
	std::vector<Items> holdItems;
	Items* holdItem;
	Items* urgentHoldItem;
};

