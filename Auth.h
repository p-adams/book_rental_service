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
    ~Auth();
    void check_status(std::string username, std::string password);
    void register_new();
    void login();
};

#endif
