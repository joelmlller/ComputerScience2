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
#include <iostream>
#include <iomanip>
#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
using namespace std;




int main() {


    //four objects named circle, square, rectangle, and trapezoid instantiated from the 
    //four specialized classes.Initialize each object to the values given in the template file.

    Circle circle(2.0);
    Square square(2.0);
    Rectangle rectangle(2.5, 3.0);
    Trapezoid trapezoid(2.5, 3.5, 4.0);

   
    //where 'Type' is a pointer to class Shape and each element is the address to one of the objects you have instantiated

     vector<Shape*> shapeVect{ &circle, &square, &rectangle, &trapezoid };


  //a range-based for loop that iterates through shapeVect and prints the name and area 
  //of each object using functions printName() and getArea() accessed through the base class pointer.

    for (long unsigned int v = 0; v < shapeVect.size(); v++) {

        cout << "Area of ";

       cout << shapeVect.at(v)->printName();

        cout << " is: " << fixed <<showpoint << setprecision(1) << shapeVect.at(v)->getArea() << endl; //fixed showpoint setprecision use to set the decimal to one place

    }






    return 0;
}