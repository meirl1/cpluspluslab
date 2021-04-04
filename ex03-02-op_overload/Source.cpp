#include <iostream>
#include "Rational.h"
using namespace std;
int func(){
    return 5;
}
int main() {
    Rational num1(1, 2), num2(1, 4), num3(4,11), num4;
    int a = 9,b = 8;
    
    num3 = num1 + num2;
        
    num3 = num1.operator+(num2);
     
    num4 = num1++;
    return 0;
}