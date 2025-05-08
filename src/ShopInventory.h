#pragma once

#include "Item.h"
#include "DrinkItem.h"
#include "User.h"
#include <unordered_map>
#include <iostream>
#include <memory>

class ShopInventory{
private:
    std::unordered_map<std::string, std::shared_ptr<Item>> inventory;
public:
    void addItem(std::string itemName, std::string itemDescription, double itemPrice, int itemQuantity, int mL, User& user, std::string itemChoice);
    Item* searchItem(std::string itemName);
    void purchaseItem(std::string itemName, User& user);

    void printInventory();
};