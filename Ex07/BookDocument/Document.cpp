#include "Document.h"
#include <iostream>
#include <string>
using namespace std;

Document::Document()
{

	cout << " ctor Document\n";
}
Document::Document(string _docname)
{
	name = _docname;
	cout << " ctor Document with name\n";
}
//string Document::getName() { return name; }
//void Document::setName(string dn) { name = dn; }
void Document::print() { cout << name << endl; }