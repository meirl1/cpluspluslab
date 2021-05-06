#pragma once
#include <string>
#include <iostream>
using namespace std;


class Product
{	
	float price;
protected:
	string pname;
public:
	Product() { cout << " in product default ctor\n"; }
	Product(string n, float pr) :pname(n), price(pr) { cout << "Basic Product ctor\n"; }
	void print();
	float getPrice() { return price; }
	void setName(string& n) { pname = n; }
	void setPrice(float pr) { price = pr; }
};

class ElectricalProduct :public Product
{
	short volt;

public:
	ElectricalProduct() { cout << " in Electricalproduct default ctor\n"; }
	ElectricalProduct(string s, float f,int v):Product(s, f),volt(v)
	{cout << "Electrical product ctor\n"; }
	void print(); 
};

enum Kashrut { NONKOSHER, BADATZ, MEHADRIN, REGULAR };
class FoodProduct :public Product
{
	Kashrut kosher;
	short ExpiryYear;
public:
	FoodProduct() {}
	FoodProduct(string s, float f,Kashrut myk,short exy) :Product(s, f),kosher(myk),ExpiryYear(exy) {}
	void print();
};

class ClothesProduct : public Product
{
	string size;
public:
	ClothesProduct() {}
	ClothesProduct(string n, float pr, string siz) :Product(n, pr), size(siz) {}
	void print();// { cout << " in Food Product\n"; }
};


