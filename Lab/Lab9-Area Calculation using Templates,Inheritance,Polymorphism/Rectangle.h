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


#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

template <class T>
class Rectangle : public Shape 
{
    private:
        T length{ 0.0 };
        T width{ 0.0 };

    public:
        Rectangle() = default; //DEFAULT CONSTRUCTOR
        Rectangle(T length, T width) : Shape("Rectangle") { //uses member list initialization to set the values of the private variables 
            this->length = length; //this -> used to point to the variable in the private access specifier
            this->width = width;
        }

        //GETTER FUNCTION
        T getArea(){

        T area = length * width;

        return area; //Rectangle Area
        }
};
#endif //RECTANGLE