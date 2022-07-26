#include <string>
#include "Auth.h"
#include "BookInventoryCoordinator.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    BookInventoryCoordinator *b_i_coordinator = new BookInventoryCoordinator();
    b_i_coordinator->seed_inventory();
    // TODO: get credentials from command line
    // Auth *auth = new Auth();
    // EXISTING USER HAPPY PATH
    // auth->login();

    return 0;
}
