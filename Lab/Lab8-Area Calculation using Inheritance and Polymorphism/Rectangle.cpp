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



#include "Rectangle.h"


double Rectangle::getArea() {

    double area = length * width;

    return area; //Rectangle Area
}