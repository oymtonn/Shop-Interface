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

void StoreInventory::purchaseItem(string itemName, User& user){
    if (!user.isAdmin()){
        Item purchasingItem = inventory[itemName];

        if (purchasingItem.getItemQuantity() > 1){
            cout << "Thank you for your purchase!";
            purchasingItem.setItemQuantity(purchasingItem.getItemQuantity() - 1);
        }
        else{
            cout << "Thank you for your purchase!";
            inventory.erase(itemName);
        }
    }
    else{
        cout << "ERROR: You are an admin!";
    }
}

void StoreInventory::printInventory(){
    for (auto const& pair : inventory){
        cout << pair.first << endl;
        pair.second.print();
    }
}

