#include "Book.h"
#include <string>

Book::Book(std::vector<std::string> authors,
           std::vector<std::string> translators,
           std::vector<std::string> editors,
           std::string title,
           std::string edition,
           std::string pub_date,
           std::string publisher,
           int pagination)
{
    this->authors = authors;
    this->translators = translators;
    this->editors = editors;
    this->title = title;
    this->edition = edition;
    // TODO: change to date string
    this->pub_date = pub_date;
    this->publisher = publisher;
    this->pagination = pagination;
};

std::vector<std::string> Book::get_authors()
{
    return this->authors;
}

std::vector<std::string> Book::get_translators()
{
    return this->translators;
}

std::vector<std::string> Book::get_editors()
{
    return this->editors;
}

std::string Book::get_title()
{
    return this->title;
}

std::string Book::get_edition()
{
    return this->edition;
}

std::string Book::get_pub_date()
{
    return this->pub_date;
}

std::string Book::get_publisher()
{
    return this->publisher;
}

std::string Book::get_format()
{
    return this->format;
}

int Book::get_pagination()
{
    return this->pagination;
}

Book::~Book() {}
