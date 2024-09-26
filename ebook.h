#ifndef EBOOK_H
#define EBOOK_H
#include "book.h"

class Ebook : public Book
{
private:
  int filesize;

public:
  Ebook(int filesize) : filesize(filesize) {}
  void getDetails()
  {
    Book::getDetails();
    cout << "filesize : " << filesize << " EB" << endl;
  }
  void bookType() override
  {
    cout << "Ebook" << endl;
  }
}

#endif