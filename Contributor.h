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
    void set_name(Name *name);
    Name *get_name();
};

#endif