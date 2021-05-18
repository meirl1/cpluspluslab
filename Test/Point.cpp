#include<iostream>
#include"Shape.h"
std::istream& operator>>(std::istream& is,Point& _p){
    is>>_p.x>>_p.y;
    return is;
}