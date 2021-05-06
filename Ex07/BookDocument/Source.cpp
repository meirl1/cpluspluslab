#include "Book.h"
#include "Document.h"
#include <iostream>
using namespace std;
void f(Document d) 
{ 
	d.print();
	cout << " in f\n";
}
void g(Book b) { cout << " in g\n"; }
int main()
{
	Document d("Harry Potter");
	//d.setName("targil1sadna.txt");
	Book b;
	Book b1("mybook", 100, 80.7);
	d.print();
	b1.print();
	f(d);
	f(b1);
	g(b1);
	//g(d);
	return 0;
	
}