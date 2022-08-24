#ifndef AUTH_H
#define AUTH_H
#include <string>
#include "vector"
#include "nlohmann/json.hpp"

using namespace nlohmann;

namespace ns
{
    class me
    {
    private:
    public:
        me() = default;
        std::string username;
        std::string password;
        std::string role;
        std::vector<std::string> permissions;
        me(std::string username,
           std::string password,
           std::string role,
           std::vector<std::string> permissions)

            : username(std::move(username)),
              password(std::move(password)),
              role(std::move(role)),
              permissions(std::move(permissions))
        {
        }
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(me, username, password, role, permissions)
    };

}

class Auth

{
private:
public:
    Auth();
    ~Auth();
    void check_status(std::string username, std::string password);
    void register_new(ns::me me);
    void login(ns::me me);
};

#endif
