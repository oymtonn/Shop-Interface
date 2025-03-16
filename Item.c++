#include "Item.h";
#include <iostream>
using namespace std;

Item::Item(string itemName, string itemDescription, string itemSeller, double itemPrice, int itemQuantity){
    this->itemName = itemName;
    this->itemDescription = itemDescription;
    this->itemSeller = itemSeller;
    this->itemPrice = itemPrice;
}

Item::Item(string itemName, string itemDescription, double itemPrice, int itemQuantity) 
    : Item(itemName, itemDescription, itemSeller="Anonymous", itemPrice, itemQuantity){}

string Item::getItemName() const{
    return itemName;
}

string Item::getItemDescription() const{
    return itemDescription;
}

string Item::getItemSeller() const{
    return itemSeller;
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

void Item::setItemSeller(string itemSeller){
    this->itemSeller = itemSeller;
}

void Item::setItemPrice(double itemPrice){
    this->itemPrice = itemPrice;
}

void Item::setItemQuantity(int itemQuantity){
    this->itemQuantity = itemQuantity;
}