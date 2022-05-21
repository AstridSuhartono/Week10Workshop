#pragma once
#include "ISBNDetailsLoader.h"
class ISBNdbDetailsLoader: public ISBNDetailsLoader
{
public:
	void loadItemDetails(std::string id) override;
private:
	std::string ISBN_id;
};

