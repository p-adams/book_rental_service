#include "Menu.h"
#include <string>
Menu::Menu(/* args */)
{
    std::string _options[4] = {"BROWSE", "SEARCH", "CART", "REGISTER"};
    for (auto &option : _options)
    {

        this->options.push_back(option);
    }
}

std::vector<std::string> Menu::get_options()
{
    return this->options;
}

std::string Menu::get_option()
{
    return this->option;
}

void Menu::set_option(std::string option)
{
    this->option = option;
}

Menu::~Menu()
{
}