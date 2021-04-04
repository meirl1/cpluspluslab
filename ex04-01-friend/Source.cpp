#include<iostream>
#include"Rational.h"
using namespace std;

void func(int a) {
	Rational r1;
	r1.numerator = 5;
}

int main() {
	Rational r1(3, 5), r2(2, 7),r3;
	int a[10]{9};
	r3 = 2 + r1;
	
	cout<<r2<<"hi"<<endl;

	cout<<r3;
}