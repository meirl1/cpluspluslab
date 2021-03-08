#include <iostream>
#include "Rational.h"
using namespace std;

int main() {
    Rational num1(1, 2), num2(1, 4), num3(4,11), num4;
    cout << "num1=";	num1.print();
    cout << "num2=";	num2.print();
    num4 = num1 + num2;
    cout << "num1+num2=";	num4.print(); cout << endl;
    num4 = num1 * num2;
    cout << "num1*num2=";	num4.print(); cout << endl;
    num4 = num1 + num2 + num3;
    num1.print(); cout << " + "; num2.print(); cout << " + "; num3.print(); cout << " = "; num4.print();
    return 0;
}