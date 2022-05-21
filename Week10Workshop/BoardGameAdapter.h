#pragma once
#include "ISBNDetailsLoader.h"
#include "BoardGameGeekDetailsLoader.h"
class BoardGameAdapter : public ISBNDetailsLoader, public BoardGameGeekDetailsLoader
{
public:
	void loadItemDetails(std::string id) override;
private:
	std::string ISBN_id;
};


