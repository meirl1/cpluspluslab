#include "Rational.h"
Rational::Rational(int _numerator, int _denominator)
	: numerator(_numerator),denominator(_denominator){}
int Rational::getNumerator() const {
	return numerator;
}
