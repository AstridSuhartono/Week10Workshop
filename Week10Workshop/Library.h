#pragma once
#include "Librarian.h"
#include "Catalogue.h"
#include "Membership.h"
#include <string>
#include <list>

class Library
{
public:
    Catalogue* getCatalogue(std::string);

protected:

    int _libraryID; 

    std::string _state; 

    std::string _address;

    Librarian* _librarian;

    Catalogue* _catalogue;

    std::list<Membership*> _memberships;
 
};

