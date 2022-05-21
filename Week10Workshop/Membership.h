#pragma once
#include "Patron.h"
#include <string>
class Membership
{

protected:
	int _memberID; 
	std::string _dateJoined;
    Patron* _patron;
};