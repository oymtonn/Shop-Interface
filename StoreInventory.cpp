#include "StoreInventory.h"

void StoreInventory::addItem(string itemName, string itemDescription, double itemPrice, int itemQuantity, User user){
    if (user.isAdmin()){
        Item addingItem(itemName, itemDescription, itemPrice, itemQuantity);
        inventory.insert({itemName, addingItem});
    }
}