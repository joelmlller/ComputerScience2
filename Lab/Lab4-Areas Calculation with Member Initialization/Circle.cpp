//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022



#include "Circle.h"
#include <cmath>

bool Circle::setRadius(double r)//checks radius value if invalid
{
    if (r >= 0) {
        radius = r;
        return true;
    }
    else
        return false;
}
double Circle::getRadius()//returns the radius value to user
{
    return radius;
}
double Circle::calcArea() //math calculation user the cmath library and 3.14= pi to find area of circle
{
    double area = 3.14 * pow(radius, 2);
    return area;
}
