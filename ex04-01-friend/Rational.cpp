#include<iostream>
#include "Rational.h"
using namespace std;

void Rational::operator *=(Rational num) {
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
    numerator = num.numerator;
    denominator = num.denominator;
    return *this;
}

bool Rational::operator==(const Rational& num) const {
    return (numerator * num.denominator == denominator * num.numerator);
}

Rational Rational::operator++() {
    numerator += denominator;
    return *this;
}

Rational Rational::operator++(int) {
    Rational temp = *this;
    numerator += denominator;
    return temp;
}

void Rational::print() {
    cout << numerator << '/' << denominator;
}

Rational Rational::operator+(int num) const {
    return Rational(numerator + (num * denominator), denominator);
}

Rational operator+(int num, const Rational &r1) {
    return Rational(r1.numerator + (num * r1.denominator), r1.denominator);
    //return r1 + num;
}

ostream& operator<<(ostream& os, const Rational& r) {
    os << r.numerator << '/' << r.denominator;
    return os;
}

istream& operator>>(istream& is, Rational& r) {
    char tmp;
    is >> r.numerator >> tmp >> r.denominator;
    return is;
}

