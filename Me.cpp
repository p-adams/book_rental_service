#include "Me.h"
#include <string>

Me::Me(std::string username, std::string password)
{
    this->username = username;
    this->password = password;
}

std::string Me::get_username()
{
    return this->username;
}

std::string Me::get_password()
{
    return this->password;
}

std::string Me::get_role()
{
    return this->role;
}

void Me::set_role(std::string role)
{
    this->role = role;
}

Me::~Me()
{
}