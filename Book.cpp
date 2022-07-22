#include "Book.h"

Book::Book(std::vector<Contributor> authors,
           std::vector<Contributor> translators,
           std::vector<Contributor> editors,
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
    this->pub_date = pub_date;
    this->publisher = publisher;
    this->pagination = pagination;
};

std::vector<Contributor> Book::get_authors()
{
    return this->authors;
}

std::vector<Contributor> Book::get_translators()
{
    return this->translators;
}

std::vector<Contributor> Book::get_editors()
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

int Book::get_pagination()
{
    return this->pagination;
}
