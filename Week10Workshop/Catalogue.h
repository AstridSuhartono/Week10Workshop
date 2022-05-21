#pragma once
#include "Items.h"
#include <ctime>
#include <string>
#include <list>

class Catalogue
{ 

public: 
	std::tm returnDate(std::tm);
	Items* search(std::string);

protected:
	int _invoiceID; 
	float _amountDue;
	std::list<Items*> _items;

}; 