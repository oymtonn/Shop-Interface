#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User{
private:
    bool admin;
    const string password;
    string test;
public:
    User();

    bool isAdmin();
    void adminLogin(string);
};

#endif