#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational(int num, int denom)
{
	numerator = num; denominator = denom;
}
Rational::Rational()
{
}
void Rational::print()
{
	cout << numerator << '/' << denominator << endl;
}
