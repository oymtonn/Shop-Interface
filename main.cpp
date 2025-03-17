#include "Item.h"
#include "User.h"
#include "StoreInventory.h"
#include <iostream>

using namespace std;

int main(){
    // Item test1("Bottle", "Water bottle", 1.00, 3);
    // test1.print();

    User user;
    user.adminLogin("password");
    cout << endl << endl << user.isAdmin() << endl << endl;
}
