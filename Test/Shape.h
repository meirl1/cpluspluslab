#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"
#include <iostream>
class Shape
{
protected:
    int numOfPoints;
    Point* Points;
public:
    Shape(int _numOfPoints=0);
    ~Shape();
};



#endif