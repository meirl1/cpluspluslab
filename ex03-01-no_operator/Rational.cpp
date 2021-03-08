#include<iostream>
#include "Rational.h"
using std::cout;
using std::endl;
Rational::Rational(int _numerator, int _denominator) {
	if (_denominator != 0){
		numerator = _numerator;
		denominator = _denominator;
	}
	else{
		numerator = 0;
		denominator = 1;
	}
}

Rational Rational::addition(const Rational& tmp){
	return Rational(numerator*tmp.denominator+tmp.numerator*denominator,
		denominator*tmp.denominator);//returns same type in order to allow 
}

bool Rational::equal(const Rational& tmp){
	return (numerator * tmp.denominator == denominator * tmp.numerator);
}
void Rational::print() {
	cout << numerator << '/' << denominator;
}