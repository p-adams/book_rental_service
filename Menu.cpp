#include "menu.h"
#include <string>
Menu::Menu(/* args */)
{
    std::string _options[3] = {"BROWSE", "SEARCH", "CART"};
    for (auto &option : _options)
    {

        this->options.push_back(option);
    }
}

std::vector<std::string> Menu::get_options()
{
    return this->options;
}

Menu::~Menu()
{
}