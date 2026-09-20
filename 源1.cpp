#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Book {
private:
	string id;
	string name;
	string author;
	bool isBorrowed;
public:
	Book(string bid, string bname, string bauthor)
		: id(bid), name(bname), author(bauthor), isBorrowed(false) {
	}
	string getId() const { return id:; }
	string getName() const { return name; }
	string getAuthor() const { return author; }
	bool getStatus() const { return isBorrowed; }
	void bowrrowed() { isBorrowed = true; }
	void returnbook() { isBorrowed = false; }

	

};
class Reader {
	string rid;
	string rname;
	vector<Book*> borrowList;
	const int MAX_BORROW = 3;
public:
	Reader(string id, string name) : rid(id), rname(name) {}
	string getId() const { return rid; }
	string getName() const { return rname; }
	int getBorrowCount() const { return borrowList.max_size(); }



};
class Library {
private:
	vector<Book>books;
	vector<Reader>readers;
public:

};