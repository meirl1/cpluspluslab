#include "Book.h"


Book::Book(string _name, long pages, float bprice):Document(_name)
{
	//Document(_name);
	pageCount = pages;
	price = bprice;
	cout << " in Book with parameters\n";
}

void Book::print()
{
	Document::print();
	cout << "Number Of Pages:  ";
	cout << pageCount << endl;

}
