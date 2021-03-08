// Main.cpp
#include "String.h"
#include <iostream>
using namespace std;

int main()
{
	// test constructor
	String s1("hello");
	s1.print(); cout << endl;

	// test copy constructor
	String s2(s1);
	s2.print(); cout << endl;

	String s3 = s1;
	s3.print(); cout << endl;

	// test assignment operator
	s3 = s1;
	s3.print(); cout << endl;

	s2 = s3 = "world";
	s2.print(); cout << endl;
	s3.print(); cout << endl;

	// test self assignment
	s2 = s2;
	s2.print(); cout << endl;

	// test concatenation operator
	String s4("world");
	(s1 + s4).print(); cout << endl;
	(s1 + " " + s4).print(); cout << endl;

	// test subscript opertor
	cout << s4[2] << endl;

	// test length
	cout << (s1 + " " + s4).length() << endl;

	// test empty
	cout << (s1.empty() ? "true" : "false") << endl;
	cout << (String(nullptr).empty() ? "true" : "false") << endl;
	cout << (String("").empty() ? "true" : "false") << endl;

	// test equality
	cout << ((s1 == String("hello")) ? "true" : "false") << endl;
	cout << ((s1 == "hello") ? "true" : "false") << endl;
	cout << ((s1 == s4) ? "true" : "false") << endl;
	cout << ((s1 == "olleh") ? "true" : "false") << endl;

	// test contains
	s1.substr(1, 3).print(); cout << endl;

	return 0;
}