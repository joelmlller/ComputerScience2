//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022


#include "Trapezoid.h"
#include <cmath>

bool Trapezoid::setBase1(double b1) //checks base1 value if invalid
{
    if (b1 >= 0) {
        Base1 = b1;
        return true;
    }
    else
        return false;
}

bool Trapezoid::setBase2(double b2)//checks base2 value if invalid
{
    if (b2 >= 0) {
        Base2 = b2;
        return true;
    }
    else
        return false;
}

bool Trapezoid::setHeight(double h)//checks height value if invalid
{
    if (h >= 0) {
        Height = h;
        return true;
    }
    else
        return false;
}

double Trapezoid::getBase1()//returns base1 value to user
{
    return Base1;
}

double Trapezoid::getBase2()//returns base2 value to user
{
    return Base2;
}

double Trapezoid::getHeight()//returns height value to user
{
    return Height;
}


double Trapezoid::calcArea() //math calculation to find area of trapezoid
{
    double area = (((Base1 + Base2) / 2) * Height);
    return area;
}





