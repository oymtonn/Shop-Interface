#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User{
private:
    bool admin;
    string password;
public:
    User();

    bool isAdmin();
    void adminLogin(string);
};

#endif