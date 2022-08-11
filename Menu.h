#ifndef Menu_H
#define Menu_H
#include <vector>
#include <string>
class Menu
{
private:
    std::vector<std::string> options;

public:
    Menu(/* args */);
    std::vector<std::string> get_options();
    ~Menu();
};

#endif