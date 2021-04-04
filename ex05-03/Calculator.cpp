#include "Calculator.h"
#include <iostream>
using namespace std;
int Calculator::add(int a, int b)
{
	return a + b;
}
int Calculator::sub(int a, int b)
{
	return a - b;
}
int Calculator::mult(int a, int b)
{
	return a * b;
}
float Calculator::div(int a, int b)
{
	if (!b)
		throw "cannot divid by zero\n";
	return (float)a / b;
}
