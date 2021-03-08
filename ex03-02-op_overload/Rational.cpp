#include<iostream>
#include "Rational.h"
using std::cout;
using std::endl;

void Rational::operator *=(Rational num)
{
    setNumerator(numerator * num.getNumerator());
    setDenominator(denominator * num.getDenominator());
}

Rational Rational::operator *(Rational num)
{
    Rational tmp;
    tmp.setNumerator(numerator * num.getNumerator());
    tmp.setDenominator(denominator * num.getDenominator());
    return tmp;
}
Rational Rational::operator +(const Rational& num)
{
    return Rational(numerator * num.denominator + num.numerator * denominator,
        denominator * num.denominator);
}

Rational& Rational::operator=(const Rational& num)
{
    numerator = num.getNumerator();
    denominator = num.getDenominator();
    return *this;
}

bool Rational::operator==(const Rational& num) const {
    return (numerator * num.denominator == denominator * num.numerator);
}

Rational Rational::operator++() {
    numerator += denominator;
    return *this;
}

Rational Rational::operator++(int u) {
    Rational temp = *this;
    numerator += denominator;
    return temp;
}

void Rational::print() {
	cout << numerator << '/' << denominator;
}