#include "Auth.h"
#include <iostream>
#include <string>

enum AuthType
{
    admin,
    user,
    guest
};

Auth::Auth()
{
}

void Auth::check_status(std::string username, std::string password)
{
    this->username = username;
    this->password = password;
}

void Auth::login()
{
    std::cout << "Login" << std::endl;
};

void Auth::register_new()
{
    std::cout << "Register" << std::endl;
};

Auth::~Auth() {}