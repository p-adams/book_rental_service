#ifndef AUTH_H
#define AUTH_H
#include <string>
class Auth
{
private:
    std::string username;
    std::string password;

public:
    Auth(std::string username, std::string password);
    void Register();
    void Login();
};

#endif
