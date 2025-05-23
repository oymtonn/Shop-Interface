#include "Item.h"
#include "User.h"
#include "ShopInventory.h"

using namespace std;

int main(){
    bool restart = true;
    ShopInventory inventory;

    while (restart){
            cout << "Welcome to the shop!" << endl;
            cout << "Are you an admin? (y/n): " << endl;
            string response;
            cin >> response;

        if (response == "y"){
            cout << "Please enter the admin password: ";
            string password;
            cin >> password;
            User user1;
            user1.adminLogin(password);

            bool addAnotherItem = true; 

            while (user1.isAdmin() && addAnotherItem){
                cout << "What item would you like to add to the inventory? A drink or regular Item? (drink/item) " << endl;
                string itemChoice;
                cin >> itemChoice;

                cout << "Enter the item name" << endl;
                string itemName;
                cin >> itemName;
                cout << "What is the description of the item?" << endl;
                cin.ignore();
                string itemDescription;
                getline(cin, itemDescription);
                cout << "What is the price of the item?" << endl;
                double itemPrice;
                cin >> itemPrice;
                cout << "What is the quantity of the item?" << endl;
                int itemQuantity;
                cin >> itemQuantity;
                if (itemChoice == "item"){
                    int mL = 0;

                    inventory.addItem(itemName, itemDescription, itemPrice, itemQuantity, mL, user1, "item");
                    cout << "Item added to inventory. Here is the current inventory: " << endl;
                    inventory.printInventory();
                }
                else if (itemChoice == "drink"){
                    cout << "How many mililiters is this item?";
                    int mL;
                    cin >> mL;
                    inventory.addItem(itemName, itemDescription, itemPrice, itemQuantity, mL, user1, "drink");
                    inventory.printInventory();
                }

                cout << "Would you like to add another item? (y/n)" << endl;
                string response;
                cin >> response;
                if (response == "y"){
                    addAnotherItem = true;
                }
                else if (response == "n"){
                    addAnotherItem = false;
                    cout << "Would you like to go back to the main menu? (y/n)" << endl;
                    string response;
                    cin >> response;
                    restart = (response == "y") ? true : false;
                }
            }
        }
        else if (response == "n"){
            bool continueShopping = true;
            while (continueShopping){
                User user2;
                cout << "What item are you looking for?" << endl;
                string itemName;
                cin >> itemName;
                
                Item* foundItem = inventory.searchItem(itemName);
                if (foundItem == nullptr){
                    cout << "Item not found" << endl;
                    cout << "Would you like to continue shopping? (y/n)" << endl;
                    string response;
                    cin >> response;
                    if (response == "y"){
                        continueShopping = true;
                    }
                    else if (response == "n"){
                        continueShopping = false;
                        cout << "Would you like to go back to the main menu? (y/n)" << endl;
                        string response;
                        cin >> response;
                        restart = (response == "y") ? true : false;
                    }
                }
                else{
                    cout << "Would you like to purchase this item? (y/n)" << endl;
                    string response;
                    cin >> response;
                    if (response == "y"){
                        inventory.purchaseItem(itemName, user2);
                        cout << "Would you like to continue shopping? (y/n)" << endl;
                        string response;
                        cin >> response;
                        if (response == "y"){
                            continueShopping = true;
                        }
                        else if (response == "n"){
                            continueShopping = false;
                            cout << "Would you like to go back to the main menu? (y/n)" << endl;
                            string response;
                            cin >> response;
                            restart = (response == "y") ? true : false;

                        }
                    }
                    else if (response == "n"){
                        cout << "Would you like to continue shopping? (y/n)" << endl;
                        string response;
                        cin >> response;
                        if (response == "y"){
                            continueShopping = true;
                        }
                        else if (response == "n"){
                            continueShopping = false;
                            cout << "Would you like to go back to the main menu? (y/n)" << endl;
                            string response;
                            cin >> response;
                            restart = (response == "y") ? true : false;
                        }
                    }
                    else{
                        cout << "Invalid response" << endl;
                    }
                }
            }
        }
    }
    return 0;
}


