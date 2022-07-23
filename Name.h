#ifndef Name_H
#define Name_H
#include <string>

class Name
{
private:
    std::string title;
    std::string first;
    std::string middle;
    std::string last;

public:
    Name(std::string first, std::string last);
    ~Name();
    void set_title(std::string);
    void set_middle(std::string);
    std::string get_title();
    std::string get_middle();
};

#endif