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
    int itemID;
public:
    static int id;

    Item(string itemName, string itemDescription, double itemPrice, int itemQuantity);

    string getItemName() const;
    string getItemDescription() const;
    double getItemPrice() const;
    int getItemQuantity() const;

    void setItemName(string name);
    void setItemDescription(string description);
    void setItemPrice(double price);
    void setItemQuantity(int quantity);

    void print();
};

#endif