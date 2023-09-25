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


#ifndef SHAPE_H_
#define SHAPE_H_
#include<string>
#include<iostream> //used for input/output


class Shape {
private:
   std::string name;

public:
    Shape() = default;//DEFAULT CONSTUCTOR

    Shape(std::string name) : name(name) { //uses member list initialization to set the values of the private variables 
        this->name = name; //this -> used to point to the variable in the private access specifier
    };

     virtual std::string printName() final { //prints the string stored in the private variable name. This function must be marked final to prevent overriding.
        return this->name;

    }

    //GETTER FUNCTION
    virtual double getArea() = 0; //abstract function because it is set to 0 and because it is virtual. This prints the areas of the shapes
};
#endif //SHAPE