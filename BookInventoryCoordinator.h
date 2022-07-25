#ifndef BookInventoryCoordinator_H
#define BookInventoryCoordinator_H
#include <vector>
#include "Book.h"
class BookInventoryCoordinator
{
private:
    std::vector<Book> *books;

public:
    BookInventoryCoordinator();
    void seed_inventory();
    void set_books(std::vector<Book> *books);
    std::vector<Book> *get_books();
    ~BookInventoryCoordinator();
};

#endif