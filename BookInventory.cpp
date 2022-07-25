#include "BookInventory.h"
#include <vector>
BookInventory::BookInventory(std::vector<Book> books)
{
    this->books = books;
}

BookInventory::~BookInventory()
{
}
