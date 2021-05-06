#pragma once
#include "Document.h"
class Book :public Document
{
	long pageCount;
	float price;

public:
	Book() { cout << " default ctor Book\n"; }
	Book(string _name, long pages, float bprice);
	~Book() { cout << " in book dtor\n"; }
	void print();

};