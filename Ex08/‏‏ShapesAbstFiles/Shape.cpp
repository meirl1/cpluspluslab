#include "Shape.h"
#include <iostream>
using namespace std;
void Shape::printshape()
{
	cout << " i am printing a shape\n";
}

/*    Triangle  */
void Triangle::draw() { cout << " in triangle draw\n"; }
double Triangle::area() { return 1; }


/*   Square  */
void Square::draw() { cout << " in square draw\n"; }
double Square::area() { return 2; }


/*  Circle   */
void Circle::draw() { cout << " in square draw\n"; }
double Circle::area() { return 3; }



/*   Mezula  */
Mezula::Mezula(int size)
{
	sides = new int[size];
}
Mezula::~Mezula()
{
	if (sides)
		delete sides;
}
void Mezula::draw() { cout << "  in Mezula draw\n"; }
double Mezula::area() { return 4; }
