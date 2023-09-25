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

template <class T>
class Trapezoid : public Shape {
private:
    T base1{ 0.0 };
    T base2{ 0.0 };
    T height{ 0.0 };

public:
    
    Trapezoid() = default; //DEFAULT CONSTRUCTOR

    Trapezoid(T base1, T base2, T height) : Shape("Trapezoid") { //uses member list initialization to set the values of the private variables 
        this->base1 = base1; //this -> used to point to the variable in the private access specifier
        this->base2 = base2;
        this->height = height;
    }

    //GETTER FUNCTION
    T getArea(){

    T area = height * ((base1 + base2) / 2);

    return area; //Trapezoid area
    }
};
#endif //TRAPEZOID