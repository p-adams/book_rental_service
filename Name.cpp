#include "Name.h"
#include <string>
Name::Name(std::string first, std::string last)
{
    this->first = first;
    this->last = last;
};

void Name::setTitle(std::string title)
{
    this->title = title;
}

void Name::setMiddle(std::string middle)
{
    this->middle = middle;
}

std::string Name::getTitle()
{
    return this->title;
}

std::string Name::getMiddle()
{
    return this->middle;
}
