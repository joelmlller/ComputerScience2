//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022



#include "Square.h"
#include <cmath>

bool Square::setSide(double s)//checks side value if invalid
{
    if (s >= 0) {
        side = s;
        return true;
    }
    else
        return false;
}
double Square::getSide()//returns side value to user
{
    return side;
}
double Square::calcArea()//math calculation to find the area of a square side *side or side squared
{
    double area = side * side;
    return area;
}
