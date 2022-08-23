#ifndef Me_H
#define Me_H
#include <string>
#include "vector"
class Me
{
private:
    std::string username;
    std::string password;
    std::string role;
    std::vector<std::string> permissions;

public:
    Me(std::string username, std::string password);
    std::string get_username();
    std::string get_password();
    std::string get_role();
    std::vector<std::string> get_permissions();
    void set_permissions(std::vector<std::string> permissions);
    void set_role(std::string role);
    ~Me();
};

#endif