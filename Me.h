#ifndef Me_H
#define Me_H
#include <string>

class Me
{
private:
    std::string username;
    std::string password;
    std::string role;

public:
    Me(std::string username, std::string password);
    std::string get_username();
    std::string get_password();
    std::string get_role();
    void set_role(std::string role);
    ~Me();
};

#endif