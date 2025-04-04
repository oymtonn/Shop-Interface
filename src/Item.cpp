#include "Item.h"
#include <iostream>
using namespace std;


Item::Item(string itemName, string itemDescription, double itemPrice, int itemQuantity){
    this->itemName = itemName;
    this->itemDescription = itemDescription;
    this->itemPrice = itemPrice;
    this->itemQuantity = itemQuantity;
}

string Item::getItemName() const{
    return itemName;
}

string Item::getItemDescription() const{
    return itemDescription;
}


double Item::getItemPrice() const{
    return itemPrice;
}

int Item::getItemQuantity() const{
    return itemQuantity;
}


void Item::setItemName(string itemName){
    this->itemName = itemName;
}

void Item::setItemDescription(string itemDescription){
    this->itemDescription = itemDescription;
}

void Item::setItemPrice(double itemPrice){
    this->itemPrice = itemPrice;
}

void Item::setItemQuantity(int itemQuantity){
    this->itemQuantity = itemQuantity;
}

void Item::print() const{
    cout << "   " <<itemName << "\n" << "   Description: " << itemDescription << "\n"
        << "   Price: " << itemPrice << "\n" << "   Quantity: " << itemQuantity;
}