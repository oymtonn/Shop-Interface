#include "DrinkItem.h"
using namespace std;

DrinkItem::DrinkItem(string itemName, string itemDescription, double itemPrice, int itemQuantity, int mL)
    : Item(itemName, itemDescription, itemPrice, itemQuantity){

    this->mL = mL;
}

int DrinkItem::getML() const{
    return mL;
}

void DrinkItem::setML(int mL){
    this->mL = mL;
}

void DrinkItem::print() const{
    cout << "   " << getItemName() << "\n" << "   Description: " << getItemDescription() << "\n"
        << "   Price: " << getItemPrice() << "\n" << "   mL: " << getML() << "\n" <<"   Quantity: " << getItemQuantity() << "\n";
}

