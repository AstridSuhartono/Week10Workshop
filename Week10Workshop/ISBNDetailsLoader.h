#pragma once
#include <string>
class ISBNDetailsLoader
{
public:
	virtual void loadItemDetails(std::string id);
};

