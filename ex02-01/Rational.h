#pragma once
class Rational
{
	int numerator;
	int denominator;
public:
	Rational(int _numerator = 0, int _denominator = 1);
	void setNumerator(int _numerator);
	void setDenominator(int _denominator);
	int getNumerator() const;
	int getDenominator();
};

