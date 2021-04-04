#pragma once
#include <iostream>
using namespace std;

class Product {
private:
	char name[10];
	int quantity;
	float price;
public:
	Product() {}
	void init(char* n, int q, float p);
	friend ostream& operator<<(ostream& os, Product p);
};