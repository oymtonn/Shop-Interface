#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

#include <unordered_map>
#include <iostream>
using namespace std;

class StoreInventory{
private:
    unordered_map<string, Item> inventory;
public:
    void addItem(string& itemName, string itemDescription, double itemPrice, int itemQuantity);
    void searchItem(string& itemName);
    void purchaseItem(string& itemName);

};


#endif