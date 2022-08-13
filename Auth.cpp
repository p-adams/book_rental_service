#include "Auth.h"
#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

using namespace nlohmann;

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
    std::ifstream f("../creds.json");
    json data = json::parse(f);
    try
    {
        auto credentials = data.get<ns::credentials>();
        if (credentials.username == this->username && credentials.password == this->password)
        {
            /*TODO:  handle login */
            this->login();
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
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