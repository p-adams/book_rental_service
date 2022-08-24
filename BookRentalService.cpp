#include "BookRentalService.h"

BookRentalService::BookRentalService()
{
}

int BookRentalService::run()
{
    return -1;
}

std::vector<std::string> BookRentalService::get_menu_options()
{
    return this->menu.get_options();
}

BookRentalService::~BookRentalService()
{
}
