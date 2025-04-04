#include "ShopInventory.h"

void ShopInventory::addItem(string itemName, string itemDescription, double itemPrice, int itemQuantity, User& user){
    if (user.isAdmin()){
        Item addingItem(itemName, itemDescription, itemPrice, itemQuantity);
        inventory.insert({itemName, addingItem});
    }
    else{
        cout << "You are not authorized to add items to the inventory." << endl;
    }
}

bool ShopInventory::searchItem(string itemName){
    bool found = false;

    for (auto const& pair : inventory){
        if (pair.first == itemName){
            cout << "Item found:" << endl;
            pair.second.print();
            return true;
        }
    }
    return false;
}

void ShopInventory::purchaseItem(string itemName, User& user){
    if (!user.isAdmin()){
        auto temp = inventory.find(itemName);  

        if (temp != inventory.end()){
            Item& purchasingItem = temp->second;

            if (purchasingItem.getItemQuantity() > 1){
                cout << "Thank you for your purchase!" << endl;
                purchasingItem.setItemQuantity(purchasingItem.getItemQuantity() - 1);
            }
            else{
                cout << "Thank you for your purchase!";
                inventory.erase(itemName);
            }
        }
    }
    else{
        cout << "ERROR: You are an admin!" << endl;
    }
}

void ShopInventory::printInventory(){
    for (auto const& pair : inventory){
        cout << pair.first << endl;
        pair.second.print();
    }
}

