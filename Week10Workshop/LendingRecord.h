#pragma once
#include "Items.h"
#include <string>
class LendingRecord
{
    public:
        boolean isDue();
    
    protected:
        Items* _item;
        std::string _dateBorrowed;
        std::string _dateReturned;
        std::string _dateToBeReturned;   
};

