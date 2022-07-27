#ifndef Book_H
#define Book_H
#include <string>
#include <vector>

class Book
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
    Book(std::vector<std::string> authors,
         std::vector<std::string> translators,
         std::vector<std::string> editors,
         std::string title,
         std::string edition,
         std::string pub_date,
         std::string publisher,
         int pagination);
    ~Book();
    std::vector<std::string> get_authors();
    std::vector<std::string> get_translators();
    std::vector<std::string> get_editors();
    std::string get_title();
    std::string get_edition();
    std::string get_pub_date();
    std::string get_publisher();
    std::string get_format();
    int get_pagination();
};

#endif
