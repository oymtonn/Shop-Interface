#include "StoreInventory.h"

void StoreInventory::addItem(string itemName, string itemDescription, double itemPrice, int itemQuantity, User& user){
    if (user.isAdmin()){
        Item addingItem(itemName, itemDescription, itemPrice, itemQuantity);
        inventory.insert({itemName, addingItem});
    }
    else{
        cout << "You are not authorized to add items to the inventory." << endl;
    }
}

void StoreInventory::printInventory(){
    for (auto const& pair : inventory){
        cout << pair.first << endl;
        pair.second.print();
    }
}