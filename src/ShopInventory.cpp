#include "ShopInventory.h"

using namespace std;

void ShopInventory::addItem(string itemName, string itemDescription, double itemPrice, int itemQuantity, int mL, User& user, string itemChoice){
    if (user.isAdmin()){
        if (itemChoice == "item"){
            Item addingItem(itemName, itemDescription, itemPrice, itemQuantity);
            inventory.insert({itemName, addingItem});
        }
        else if (itemChoice == "drink"){
            Item addingItem(itemName, itemDescription, itemPrice, itemQuantity, mL);
            inventory.insert({itemName, addingItem});
        }
    }
    else{
        cout << "You are not authorized to add items to the inventory." << endl;
    }
}

Item* ShopInventory::searchItem(string itemName){
    auto it = inventory.find(itemName);
    if (it != inventory.end()){
        cout << "Item found:" << endl;
        it->second.print();
        return &(it->second);
    }
    else{
        return nullptr;
    }
}

void ShopInventory::purchaseItem(string itemName, User& user){
    if (!user.isAdmin()){
        auto temp = inventory.find(itemName);  

        if (temp != inventory.end()){
            Item& purchasingItem = temp->second;

            if (purchasingItem.getItemQuantity() > 1){
                cout << "Thank you for your purchase! " << endl;
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

