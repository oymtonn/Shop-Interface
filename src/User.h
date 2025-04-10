#pragma once
#include <iostream>

class User{
private:
    bool admin;
    std::string password;
public:
    User();

    bool isAdmin();
    void adminLogin(std::string);
};
