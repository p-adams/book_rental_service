#ifndef Contributor_H
#define Contributor_H
#include <string>
#include "Name.h"
class Contributor
{
private:
    Name *name;

public:
    Contributor();
    ~Contributor();
    void setName(Name *name);
    Name *getName();
};

#endif