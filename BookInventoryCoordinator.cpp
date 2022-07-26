#include "BookInventoryCoordinator.h"
#include <vector>
#include <fstream>
#include <iostream>
#include "nlohmann/json.hpp"
using namespace nlohmann;

BookInventoryCoordinator::BookInventoryCoordinator(){};

struct BookData
{
    std::vector<Contributor> authors;
    std::vector<Contributor> translators;
    std::vector<Contributor> editors;
    std::string title;
    std::string edition;
    std::string pub_date;
    std::string publisher;
    std::string format;
};

void BookInventoryCoordinator::seed_inventory()
{
    std::ifstream f("../books.json");

    json data = json::parse(f);
    // TODO: create book objects from JSON data
    // std::cout << data << std::endl;
    for (auto &element : data)
    {
        std::cout << element << '\n';
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
