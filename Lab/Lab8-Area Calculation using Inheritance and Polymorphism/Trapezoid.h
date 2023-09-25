/*
Group members:
Joel Miller
James William
Anna Kyoko
Connor Cromer

Class:
CPSC 1021

Date: 11/17/2021

Project:
This program  uses (runtime) polymorphism to print the name and area of each shape by calling the respective functions from the base class.


*/


#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include "Shape.h"

class Trapezoid : public Shape {
private:
    double base1{ 0.0 };
    double base2{ 0.0 };
    double height{ 0.0 };

public:
    
    Trapezoid() = default; //DEFAULT CONSTRUCTOR

    Trapezoid(double base1, double base2, double height) : Shape("Trapezoid") { //uses member list initialization to set the values of the private variables 
        this->base1 = base1; //this -> used to point to the variable in the private access specifier
        this->base2 = base2;
        this->height = height;
    }

    //GETTER FUNCTION
    double getArea();
};
#endif //TRAPEZOID