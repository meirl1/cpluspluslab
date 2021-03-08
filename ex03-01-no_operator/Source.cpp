#include<iostream>
#include"Rational.h"
using std::cout;
using std::endl;

int main() {
	Rational num1(1, 2), num2(3, 6),num3(3,4);
	cout << num1.equal(num3)<<endl;
	num1.print(); cout << " + "; num2.print(); cout << " = "; num1.addition(num2).print(); cout << endl;

	num1.addition(num2).addition(num3).print();
}