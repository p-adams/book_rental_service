#include "BookInventoryCoordinator.h"
#include <vector>
#include <fstream>
#include "nlohmann/json.hpp"
using namespace nlohmann;
BookInventoryCoordinator::BookInventoryCoordinator(){};

void BookInventoryCoordinator::seed_inventory()
{
    std::ifstream f("books.json");

    json data = json::parse(f);
};

void BookInventoryCoordinator::set_books(std::vector<Book> *books)
{
    this->books = books;
};

std::vector<Book> *BookInventoryCoordinator::get_books()
{
    return this->books;
};

BookInventoryCoordinator::~BookInventoryCoordinator(){};
