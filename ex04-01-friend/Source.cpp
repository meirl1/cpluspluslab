#include<iostream>
#include"Rational.h"
using namespace std;

void func(int a) {
	Rational r1;
	r1.numerator = 5;
}

int main() {
	Rational r1(3, 5), r2(2, 7),r3;
	r3 = r1 + r2;
	
	r3 = r1 + 2;
	r1.operator+(2);

	r3 = 2 + r1;
	operator+(2, r1);
	r1.print();

	cout << r1 <<"Hello";
	
	operator<<(cout,r1);
	cin >> r2;
}