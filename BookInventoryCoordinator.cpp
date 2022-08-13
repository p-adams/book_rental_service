#include "BookInventoryCoordinator.h"
#include <vector>
#include <fstream>
#include <iostream>
#include "nlohmann/json.hpp"
using namespace nlohmann;

BookInventoryCoordinator::BookInventoryCoordinator(){};

void BookInventoryCoordinator::seed_inventory()
{
    std::ifstream f("../books.json");

    json data = json::parse(f);

    try
    {
        auto inventory = data.get<ns::inventory>();
        for (auto &el : inventory.books)
        {
            Book *book = new Book(
                el.authors,
                el.translators,
                el.editors,
                el.title,
                el.edition,
                el.pub_date,
                el.publisher,
                el.pagination);
            this->books.push_back(book);
        }

        std::cout << "BOOKS: " << this->books.size() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
};

void BookInventoryCoordinator::set_books(std::vector<Book *> books)
{
    this->books = books;
};

std::vector<Book *> BookInventoryCoordinator::get_books()
{
    return this->books;
};

BookInventoryCoordinator::~BookInventoryCoordinator(){};
