#include <string>
#include "Auth.h"
#include "json.hpp"

int main(int argc, char const *argv[])
{
    // TODO: get credentials from command line
    Auth *auth = new Auth("john", "foobarbaz");
    // EXISTING USER HAPPY PATH
    auth->Login();

    return 0;
}
