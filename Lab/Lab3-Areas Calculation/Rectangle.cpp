//
// Joel Miller
//CPSC 1021 Labs
// 09/23/2022



#include "Rectangle.h"
#include <cmath>




bool Rectangle::setLength(double l)//checks length value if invalid
{
    if (l >= 0) {
        length = l;
        return true;
    }
    else
        return false;
}

bool Rectangle::setWidth(double w)//checks width value if invalid
{
    if (w >= 0) {
        width = w;
        return true;
    }
    else
        return false;
}

double Rectangle::getLength() //getter function to return length value
{
    return length;
}

double Rectangle::getWidth() //getter function to return width value
{
    return width;
}

double Rectangle::calcArea() //math calculation to calculate area of a rectangle (length * width)
{
    double area = length * width;
    return area;
}
