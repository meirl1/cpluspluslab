//#pragma once
#ifndef SHAPE_H
#define SHAPE_N
#include <iostream>
using namespace std;
class Shape
{
public:

	virtual ~Shape() {}//needed for class mezula

	virtual double area() = 0;
	virtual void draw() = 0;
	void printshape(); 
};

class Triangle : public Shape
{
public:
	void draw() override; 
	double area() override; 
};

class Square : public Shape
{
public:
	void draw() override; 
	double area() override; 
};


class Circle : public Shape
{
public:
	void draw() override; 
	double area(); 
};


class Mezula : public Shape 
{
	int* sides;
public:
	Mezula(int size = 0);
	~Mezula();
	void draw() override; 
	double area();
};

#endif