#include "BookInventoryCoordinator.h"
#include <vector>
#include <fstream>
#include <iostream>
#include "nlohmann/json.hpp"
using namespace nlohmann;

BookInventoryCoordinator::BookInventoryCoordinator(){};

namespace ns
{
    class book
    {
    private:
        std::vector<std::string> authors;
        std::vector<std::string> translators;
        std::vector<std::string> editors;
        std::string title;
        std::string edition;
        std::string pub_date;
        std::string publisher;
        std::string format;
        int pagination;

    public:
        book() = default;
        book(std::vector<std::string> authors,
             std::vector<std::string> translators,
             std::vector<std::string> editors,
             std::string title,
             std::string edition,
             std::string pub_date,
             std::string publisher,
             std::string format,
             int pagination) : authors(std::move(authors)), translators(std::move(translators)), editors(std::move(editors)), title(std::move(title)), edition(std::move(edition)), pub_date(std::move(pub_date)), publisher(std::move(publisher)), format(std::move(format)), pagination(std::move(pagination))

        {
        }
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(book, authors, translators, editors, title, edition, pub_date, publisher, format, pagination)
    };

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
