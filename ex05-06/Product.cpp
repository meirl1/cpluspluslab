#include "Product.h"
#include <string>
#include <iostream>
using namespace std;

void Product::init(char* n, int q, float p) {
	if (strlen(n) > 9)
		throw string("error: name too long\n");
	strcpy_s(name, 9, n);
	if (q < 0 || q>100) throw q;
	quantity = q;
	if (p < 0) throw p;
	price = p;
}
ostream& operator<<(ostream& os, Product p) {
	os << p.name << '\t';
	os << p.quantity << '\t';
	os << p.price << '\n';
	return os;
}