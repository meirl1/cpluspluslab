#pragma once
#include "Product.h"
#include <iostream>
using namespace std;


void f(FoodProduct fp)
{
	fp.print();
	cout << " in f\n";
}

void g(Product p)
{
	p.print();
	cout << " in g\n";
}


int main()
{

	Product p1;
	Product p2("pencil", 7);
	ElectricalProduct ep1;
	ElectricalProduct ep2("light bulb", 8, 110);

	FoodProduct fp1;
	FoodProduct fp2("pizza", 100, BADATZ, 2021);

	p1.print();
	ep1.print();
	ep1.Product::print();


//	f(p1); //trying to send f base class
	f(fp1);//calling with derived class

	g(p1);
	g(ep2);//sending derived object to function receiving base object
	//g(d);

	return 0;
}