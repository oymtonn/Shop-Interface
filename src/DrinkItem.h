#pragma once

#include "Item.h"

class DrinkItem : Item{
private:
    int mL;
public:
    DrinkItem(std::string itemName, std::string itemDescription, double itemPrice, int itemQuantity, int mL) 
        : Item(std::string itemName, std::string itemDescription, double itemPrice, int itemQuantity);
        
    int getML() const;
    void setML(int mL);
};