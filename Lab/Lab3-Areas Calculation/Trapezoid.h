//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022



#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid//creates the class trapezoid
{
private://private member variables
	double Base1;
	double Base2;
	double Height;

public://pubic member functions
	double calcArea();

	double getBase1();
	double getBase2();
	double getHeight();
	bool setBase1(double b1);
	bool setBase2(double b2);
	bool setHeight(double h);
};

#endif
