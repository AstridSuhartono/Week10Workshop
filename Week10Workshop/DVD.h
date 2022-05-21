#pragma once
#include <string>
#include "Items.h"

class DVDs : public Items 
{ 

public: 

	std::string directorName; 
	int movieID; 
	std::string actorName; 
	std::string genre;
	std::string title; 

}; 
