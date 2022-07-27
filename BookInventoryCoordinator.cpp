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
            std::cout << el.title << std::endl;
        }

        //  std::cout << book << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    // TODO: create book objects from JSON data
    // std::cout << data << std::endl;
    for (auto &element : data)
    {

        // std::cout << element << '\n';
    }
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
