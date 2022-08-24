#include "Auth.h"
#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

using namespace nlohmann;

Auth::Auth()
{
}

void Auth::check_status(std::string username, std::string password)
{

    std::ifstream f("../me.json");
    json data = json::parse(f);
    try
    {
        auto me = data.get<ns::me>();
        if (me.username == username && me.password == password)
        {
            /*TODO:  handle login */
            this->login(me);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Auth::login(ns::me me)
{
    std::cout << "Login" << std::endl;
};

void Auth::register_new(ns::me me)
{
    std::cout << "Register" << std::endl;
};

Auth::~Auth() {}