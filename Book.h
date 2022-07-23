#ifndef Book_H
#define Book_H
#include <string>
#include <vector>
#include "Contributor.h"
class Book
{
private:
    std::vector<Contributor> authors;
    std::vector<Contributor> translators;
    std::vector<Contributor> editors;
    std::string title;
    std::string edition;
    std::string pub_date;
    std::string publisher;
    int pagination;

public:
    Book(std::vector<Contributor> authors,
         std::vector<Contributor> translators,
         std::vector<Contributor> editors,
         std::string title,
         std::string edition,
         std::string pub_date,
         std::string publisher,
         int pagination);
    ~Book();
    std::vector<Contributor> get_authors();
    std::vector<Contributor> get_translators();
    std::vector<Contributor> get_editors();
    std::string get_title();
    std::string get_edition();
    std::string get_pub_date();
    std::string get_publisher();
    int get_pagination();
};

#endif
