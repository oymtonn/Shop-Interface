#include <iostream>

using namespace std;

class User{
private:
    bool admin;
    const string password;
public:
    User();

    bool isAdmin();
    void adminLogin();
};