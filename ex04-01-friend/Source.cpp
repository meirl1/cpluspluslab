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
	r3 = r1 + r2;

	r3 = 2 + r1;
	r3 = operator+(2,r1);
	
	r3 = r1.operator+(2);
	cout<<2<<'t';

	r1.print();

	cout<<r1<<4<<6;
	operator<<(cout,r1);

	int tmp;
	cin>>tmp;
	r1.setNumerator(tmp);


	cin>>r1;
	operator>>(cin,r1);


	cout<<r2<<"hi"<<endl;

	cout<<r3;
}