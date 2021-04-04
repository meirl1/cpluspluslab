#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
	int op, x, y;
	cout << "enter your choice\n";
	cin >> op;
	while (op) {
		cout << "enter 2 values\n";
		cin >> x >> y;
		switch (op) {
		case ADD:cout << x << '+' << y << '=';
			cout << Calculator::add(x, y) << endl;
			break;
		case SUB:cout << x << '-' << y << '=';
			cout << Calculator::sub(x, y) << endl;
			break;
		case MULT:cout << x << '*' << y << '=';
			cout << Calculator::mult(x, y) << endl;
			break;
		case DIV:try {
			float z = Calculator::div(x, y);
			cout << x << '/' << y << '=' << z << endl;
		}
				catch (const char* msg) {
					cout << msg;
				}
				break;
		default: "no such option\n";
		};
		cout << "enter your choice\n";
		cin >> op;
	}
	return 0;
}
