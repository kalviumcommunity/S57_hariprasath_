#ifndef BOOK_H // check the header file is not exist ?
#define BOOK_H // if not exist create BOOK_H to prevent from file explosion

#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    static int count;

public:
    Book()
    {
    title:
        "Unknown";
    author:
        "Unknown";
    }
    Book(string title, string author)
    {
        this->title = title;
        this->author = author;
        count++;
    }
    ~Book() {}
    void getDetails() const
    {
        cout << "from book" << title << author << endl;
    }
    static void count_of_book()
    {
        cout << "Book count" << count << endl;
    }
    virtual void bookType()
        const = 0;
};

#endif