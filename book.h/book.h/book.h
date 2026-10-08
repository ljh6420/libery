#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book
{
public:
    string id;
    string name;
    string author;
    bool isBorrowed;

    Book();
    Book(string id, string name, string author);
    void showInfo();
};
#endif
