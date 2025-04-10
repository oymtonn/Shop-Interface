#pragma once

#include "Item.h"
#include <iostream>

class DrinkItem : Item{
private:
    int mL;
public:
    DrinkItem(std::string itemName, std::string itemDescription, double itemPrice, int itemQuantity, int mL);
    int getML() const;
    void setML(int mL);
    void print() const;
};
