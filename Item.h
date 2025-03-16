#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item {
private:
    string itemName;
    string itemDescription;
    string itemSeller;
    double itemPrice;
    int itemQuantity;
public:
    Item(string itemName, string itemDescription, string itemSeller, double itemPrice, int itemQuantity);
    Item(string itemName, string itemDescription, double itemPrice, int itemQuantity);

    string getItemName() const;
    string getItemDescription() const;
    string getItemSeller() const;
    double getItemPrice() const;
    int getItemQuantity() const;

    void setItemName(string name);
    void setItemDescription(string description);
    void setItemSeller(string seller);
    void setItemPrice(double price);
    void setItemQuantity(int quantity);
};

#endif