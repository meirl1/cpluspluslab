#ifndef POINT_H
#define POINT_H
#include<iostream>
class Point
{
    int x,y;
public:
    friend std::istream& operator>>(std::istream& is,Point& _p);
};
#endif