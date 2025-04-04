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

void StoreInventory::searchItem(string itemName){
    bool found = false;

    for (auto const& pair : inventory){
        if (pair.first == itemName){
            cout << "Item found:" << endl;
            pair.second.print();
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Item not found" << endl;
    }

}

void StoreInventory::printInventory(){
    for (auto const& pair : inventory){
        cout << pair.first << endl;
        pair.second.print();
    }
}

