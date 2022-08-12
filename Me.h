#ifndef Me_H
#define Me_H
#include <string>

class Me
{
private:
    std::string username;
    std::string password;

public:
    Me(std::string username, std::string password);
    std::string get_username();
    std::string get_password();
    ~Me();
};

#endif