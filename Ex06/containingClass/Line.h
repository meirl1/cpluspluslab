#pragma once
#include <iostream>
using namespace std;

class Point
{
    int x = 0;
    int y = 0;
public:
    
    Point() { cout << " default ctor Point" << endl; }
    Point(int myX, int myY): x(myX), y(myY)
    {
        cout << "body of ctor.Point " << x << "," << y << endl;
    };
    ~Point() { cout << "Point dtor: x is:" << x << endl; }
};


class Line
{
    int color;
    Point rightEdge;
    Point leftEdge;
public:
    Line() { cout << "default ctor Line" << endl; }
    Line(int myColor, int myX1, int myY1, int myX2, int myY2)
        : leftEdge(myX2, myY2), rightEdge(myX1, myY1), color(myColor)
    {
        cout << "body of Line ctor" << endl;
    }
    ~Line(){ cout << "Line dtor" << endl; }
};


