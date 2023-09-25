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



#ifndef SQUARE_H_
#define SQUARE_H_
#include "Shape.h"

class Square : public Shape {
private:
    double side{ 0.0 };

public:
    Square() = default;//DEFAULT CONSTRUCTOR

    Square(double side) : Shape("Square") { //uses member list initialization to set the values of the private variables 
        this->side = side; //this -> used to point to the variable in the private access specifier
    }

    //GETTER FUNCTION
    double getArea();
};
#endif //SQUARE