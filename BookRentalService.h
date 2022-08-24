#ifndef BookRentalService_H
#define BookRentalService_H
#include "BookInventoryCoordinator.h"
#include "Menu.h"
#include "Auth.h"

class BookRentalService
{
private:
    BookInventoryCoordinator inventory;
    Menu menu;
    Auth auth;

public:
    BookRentalService();
    int run();
    std::vector<std::string> get_menu_options();
    ~BookRentalService();
};

// TODO: get credentials from command line
// Auth *auth = new Auth();
// EXISTING USER HAPPY PATH
// auth->login();

#endif
