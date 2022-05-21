#pragma once
#include <string>
#include "Items.h"
class Patron
{
public:
    Items* holdItem();
    void update();
    void attachFromObserverList();
    void removeFromObserverList();

protected:
    std::string _patronName; 
	std::string _address;

    bool _checkFine();
};