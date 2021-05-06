#ifndef RATIONAL_H
#define RATIOANL_H
using namespace std;
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
    void operator*=(Rational);
    Rational operator*(Rational);
    Rational operator+(const Rational&);
    Rational operator+(int) const;
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

    friend void func(int);
    friend Rational operator+(int, const Rational&);
    friend ostream& operator<<(ostream& os, const Rational& r);
    friend istream& operator>>(istream& is, Rational& r);
};

#endif
