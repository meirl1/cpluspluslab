#include <iostream>
#include "Rational.h"
using namespace std;

int main() {
    Rational num1(1, 2), num2(1, 4), num3(4,11), num4;
    
    num4 = ++num1;
    
    num4 = num2++;

    return 0;
}