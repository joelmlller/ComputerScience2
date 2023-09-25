//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022



#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle//creates class rectangle
{
private://private member variables
	double length{ 1.0 };
	double width{ 1.0 };

public://pubic member functions
	Rectangle() = default;
	Rectangle(double l, double w) : length(l), width(w) {};


	double calcArea();

	double getLength();
	double getWidth();
	bool setLength(double l);
	bool setWidth(double w);
};

#endif
