// שיעור 1 - דוגמא 8
// מחלקה למספרים רציונלים
// בנאי ובנאי ברירת מחדל
//Lesson 1 - Example 8
//Class - Rational Numbers
//Constructors and Default Constructors

#include "Rational.h"
//void func();
//void func(int a);
void func(int a=1, int b=8);

int main() {
	// Rational  num1; // ERROR: no default constructor
	Rational num1(1, 2), num2(3, 4), num3(5, 6);
	Rational num8, num9(4);
	num1.print();
	num2.print();
	num3.print();
	func(6,9);
	return 0;
}
