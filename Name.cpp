#include "Name.h"
#include <string>
Name::Name(std::string first, std::string last)
{
    this->first = first;
    this->last = last;
};

void Name::set_title(std::string title)
{
    this->title = title;
}

void Name::set_middle(std::string middle)
{
    this->middle = middle;
}

std::string Name::get_title()
{
    return this->title;
}

std::string Name::get_middle()
{
    return this->middle;
}

Name::~Name() {}
