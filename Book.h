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
    Book();
};

#endif
