#ifndef BookInventory_H
#define BookInventory_H
#include <vector>
#include "Book.h"

class BookInventory
{
private:
    std::vector<Book *> books;

public:
    BookInventory(std::vector<Book *> books);
    ~BookInventory();
};

#endif