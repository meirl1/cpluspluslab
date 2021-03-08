#ifndef RATIONAL_H
#define RATIOANL_H
class Rational
{
	int numerator;
	int denominator;
public:
	Rational(int _numerator = 0, int _denominator = 1);
	Rational addition(const Rational& tmp);
	bool equal(const Rational& tmp);
	void print();
};

#endif
