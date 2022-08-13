#ifndef AUTH_H
#define AUTH_H
#include <string>
#include "nlohmann/json.hpp"

using namespace nlohmann;

namespace ns
{
    class credentials
    {
    private:
    public:
        credentials() = default;
        std::string username;
        std::string password;
        credentials(std::string username, std::string password) : username(std::move(username)), password(std::move(password))
        {
        }
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(credentials, username, password)
    };

}

class Auth

{
private:
    std::string username;
    std::string password;

public:
    Auth();
    ~Auth();
    void check_status(std::string username, std::string password);
    void get_credentials();
    void register_new();
    void login();
};

#endif
