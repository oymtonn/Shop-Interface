#include "User.h"
#include <iostream>

using namespace std;

const string password = "password"; 

User::User(){
    admin = false;
}

bool User::isAdmin(){
    return admin;
}

void User::adminLogin(string password){
        if (this->password == password){
            admin = true;
        }
}