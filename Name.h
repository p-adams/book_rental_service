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
    void setTitle(std::string);
    void setMiddle(std::string);
    std::string getTitle();
    std::string getMiddle();
};

#endif