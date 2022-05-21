#pragma once
#include <string>
#include "Items.h"

class Books : public Items 
{ 

public: 

	std::string authorName; 
	int bookID; 
	std::string genre; 
	std::string title; 

}; 