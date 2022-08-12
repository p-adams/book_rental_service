#ifndef Menu_H
#define Menu_H
#include <vector>
#include <string>
class Menu
{
private:
    std::vector<std::string> options;
    std::string option;

public:
    Menu(/* args */);
    std::vector<std::string> get_options();
    std::string get_option();
    ~Menu();
};

#endif