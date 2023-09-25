//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022


#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle//creates the class circle
{
private://private member variables
	double radius;

public://pubic member functions
	double calcArea();

	double getRadius();
	bool setRadius(double r);
}; 

#endif