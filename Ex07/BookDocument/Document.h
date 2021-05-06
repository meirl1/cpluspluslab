#pragma once
#include <iostream>
#include <string>
using namespace std;

class Document
{
protected:
	string name;
public:
	Document();
	Document(string docName);
	~Document() { cout << " in Doc dtor\n"; }
	/*void setName(string _name);
	string getName();*/
	void print();//prints the document
};