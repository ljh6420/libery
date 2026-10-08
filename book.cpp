#include "book.h"
#include <iostream>
Book::Book() : id(""), name(""), author(""), isBorrowed(false) {}
Book::Book(string id, string name, string author)
    : id(id), name(name), author(author), isBorrowed(false) {
}

void Book::showInfo()
{
    cout << "编号：" << id << " 书名：" << name << " 作者：" << author;
    if (isBorrowed)
        cout << " 【已借出】";
    else
        cout << " 【可借阅】";
    cout << endl;
}
