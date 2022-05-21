#pragma once
#include <string>
#include "Items.h"

class Boardgames: public Items 
{ 

public: 

	int boardgameID; 
	std::string designerName; 
	std::string genre; 
	int numberOfPlayers; 

}; 

