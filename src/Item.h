#pragma once
#include <iostream>

class Item {
private:
    std::string itemName;
    std::string itemDescription;
    std::string itemSeller;
    double itemPrice;
    int itemQuantity;
public:

    Item(std::string itemName, std::string itemDescription, double itemPrice, int itemQuantity);

    std::string getItemName() const;
    std::string getItemDescription() const;
    double getItemPrice() const;
    int getItemQuantity() const;

    void setItemName(std::string name);
    void setItemDescription(std::string description);
    void setItemPrice(double price);
    void setItemQuantity(int quantity);

    virtual void print() const;
};

