#ifndef BookInventoryCoordinator_H
#define BookInventoryCoordinator_H
#include <vector>
#include "nlohmann/json.hpp"
#include "Book.h"

using namespace nlohmann;

namespace ns
{
    class book
    {
    private:
    public:
        book() = default;
        std::vector<std::string> authors;
        std::vector<std::string> translators;
        std::vector<std::string> editors;
        std::string title;
        std::string edition;
        std::string pub_date;
        std::string publisher;
        std::string format;
        int pagination;
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
    class inventory
    {
    private:
    public:
        std::vector<ns::book> books;
        inventory() = default;
        inventory(std::vector<ns::book> books) : books(std::move(books))
        {
        }
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(inventory, books)
    };

};

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