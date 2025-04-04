#include "User.h"
#include <iostream>

using namespace std;

User::User(){
    password = "password";
    admin = false;
}

bool User::isAdmin(){
    return admin;
}

void User::adminLogin(string inputPassword){
    if (this->password == inputPassword){
        admin = true;
    }
    else{
        cout << "Incorrect password" << endl;
    }
}