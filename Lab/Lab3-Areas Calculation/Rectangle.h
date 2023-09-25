//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022



#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle//creates class rectangle
{
private://private member variables
	double length;
	double width;

public://pubic member functions
	double calcArea();

	double getLength();
	double getWidth();
	bool setLength(double l);
	bool setWidth(double w);
};

#endif
