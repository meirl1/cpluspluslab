#include "Shape.h"
#include <iostream>
using namespace std;

int main()
{
	//Shape s;
	Triangle tr;
	Square sq;

	Shape* myshape = new Triangle();
	myshape->draw();

	Shape* s[4];
	s[0] = new Triangle;
	s[1] = new Square;
	s[2] = new Circle;
	s[3] = new Mezula;
	for (int i = 0; i < 4; i++)
	{
		s[i]->draw();
		s[i]->printshape();
	}
	for (int i = 0; i < 4; i++)
	{
		delete s[i];
	}
	return 0;
	
}