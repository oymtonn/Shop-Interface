#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include "User.h"

#include <unordered_map>
#include <iostream>
using namespace std;

class ShopInventory{
private:
    unordered_map<string, Item> inventory;
public:
    void addItem(string itemName, string itemDescription, double itemPrice, int itemQuantity, User& user);
    Item* searchItem(string itemName);
    void purchaseItem(string itemName, User& user);

    void printInventory();

};


#endif