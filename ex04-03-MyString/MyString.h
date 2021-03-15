#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
	char* str;
	void setString(const char* s);
public:
	static int a;
	// constructor.
	MyString(char* s = nullptr);
	MyString(const MyString& s);
	~MyString();

	// view function.
	char* getString() const;

	// modify function.
	MyString& operator =(const MyString&);

	// operators
	bool operator==(const MyString&) const;
	MyString  operator+(const MyString&);
	MyString  operator* (int);
	int length() const;

	// print
	void print() const;
};
