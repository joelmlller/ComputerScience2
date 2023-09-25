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

#include "Circle.h"

double Circle::getArea() {

    double area = radius * radius * PI;

    return area; //Circle Area
}