#include "Auth.h"
#include <iostream>
#include <string>

Auth::Auth(std::string username, std::string password)
{
    this->username = username;
    this->password = password;
}

void Auth::Login()
{
    std::cout << "Login" << std::endl;
};

void Auth::Register()
{
    std::cout << "Register" << std::endl;
};