#include "Item.h"
#include "User.h"
#include "StoreInventory.h"
#include <iostream>

using namespace std;

int main(){
    User user;
    user.adminLogin("password");
    cout << boolalpha << user.isAdmin() << endl;

    StoreInventory inventory;
    inventory.addItem("Bottle", "Water bottle", 1.00, 3, user);

    inventory.printInventory();
}
