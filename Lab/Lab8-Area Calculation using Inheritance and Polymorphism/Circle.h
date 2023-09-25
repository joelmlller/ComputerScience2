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



#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Shape.h"

 class Circle : public Shape {
private:
    double radius{ 0.0 };
    const double PI = 3.14; 

public:
    Circle() = default;//DEFAULT CONSTRUCTOR

    Circle(double radius) : Shape("Circle") { //uses member list initialization to set the values of the private variables 
        this->radius = radius; //this -> used to point to the variable in the private access specifier
    }

    //GETTER FUNCTION
    double getArea();
};
#endif //CIRCLE