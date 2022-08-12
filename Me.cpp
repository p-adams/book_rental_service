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

Me::~Me()
{
}