#include"Shape.h"

Shape::Shape(int _numOfPoints=0)
{
    numOfPoints = _numOfPoints;
    if (numOfPoints)
    {
        Points = new Point[numOfPoints];
        std::cout<<"Enter values of  # points:";
        for (size_t i = 0; i < numOfPoints; i++)
        {
            std::cin>>Points[i];
        }
    }  

}

Shape::~Shape()
{
}