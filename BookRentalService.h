#ifndef BookRentalService_H
#define BookRentalService_H
#include "BookInventoryCoordinator.h"
#include "Menu.h"

class BookRentalService
{
private:
    BookInventoryCoordinator inventory;
    Menu menu;

public:
    BookRentalService();
    int run();

    ~BookRentalService();
};

// TODO: get credentials from command line
// Auth *auth = new Auth();
// EXISTING USER HAPPY PATH
// auth->login();

#endif
