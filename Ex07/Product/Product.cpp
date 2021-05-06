#include "Product.h"
void Product::print()
{
	cout << "name and price: " << pname << " " << price << endl;
}
void ElectricalProduct::print()
{
	Product::print();
	cout << "volt: " << volt << endl;
	//cout << pname << this->getPrice() << volt;
}
void FoodProduct::print()
{
	Product::print();
	cout << "Kashrut: " << this->kosher << " Expiry Year: " << this->ExpiryYear << endl;
}
void ClothesProduct::print()
{
	Product::print();
	cout << "size: " << size << endl;
}

