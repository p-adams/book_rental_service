#ifndef Name_H
#define Name_H
#include <string>

class Name
{
private:
    std::string first;
    std::string middle;
    std::string last;

public:
    Name(std::string first, std::string middle, std::string last);
};

#endif