#ifndef AUTH_H
#define AUTH_H
#include <string>
class Auth
{
private:
    std::string username;
    std::string password;

public:
    Auth();
    void Register();
    void Login();
};

#endif
