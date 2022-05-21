#pragma once
#include <string>
#include "ISBNDetailsLoader.h"
#include "IMDBdbDetailsLoader.h"

class IMDBAdapter: public ISBNDetailsLoader, public IMDBdbDetailsLoader
{
public:
	std::string loadItemDetails();
private:
	std::string ISAN_id;
};

