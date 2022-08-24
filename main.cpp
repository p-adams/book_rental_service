#include <string>
#include <iostream>
#include "BookRentalService.h"

int main(int argc, char const *argv[])
{
    BookRentalService *book_service = new BookRentalService();
    book_service->run();
    return 0;
}
