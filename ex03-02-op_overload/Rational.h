#ifndef RATIONAL_H
#define RATIOANL_H
class Rational
{
    int numerator;
    int denominator;
public:
    //constructor
    Rational(int myMone = 1, int myMechane = 1)
        :numerator(myMone), denominator(myMechane) {}
    Rational(const Rational& num)
        :numerator(num.getNumerator()), denominator(num.getDenominator()) {}
    //modify functions
    void setNumerator(int myMone) { numerator = myMone; }
    void setDenominator(int myMechane)
    {
        denominator = myMechane;
    }
    //view functions
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    //binary operations
    void operator*=(const Rational&);
    Rational operator*(Rational);
    Rational operator+(const Rational&) const;
    Rational operator-(Rational);
    Rational operator/(Rational);
    bool operator==(const Rational&) const;
    Rational& operator=(const Rational&);
    //unary operations
    Rational operator++();
    Rational operator++(int);
    Rational operator--();
    Rational operator--(int);
	void print();
};

#endif
