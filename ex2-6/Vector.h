#pragma once
using namespace std;
class Vector
{
private:
	int* numbers;
	int size;
public:
	Vector(int Size = 10);
	Vector(int val, int Size = 10);
	Vector(int* vec, int Size = 10);
	//Vector(const Vector& vec);
	~Vector();
	void print();
};
