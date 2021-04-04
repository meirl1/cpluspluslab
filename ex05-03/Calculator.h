#pragma once
class Calculator
{
public:
	static int add(int, int);
	static int sub(int, int);
	static int mult(int, int);
	static float div(int, int);
};
enum options
{
	STOP, ADD, SUB, MULT, DIV
};