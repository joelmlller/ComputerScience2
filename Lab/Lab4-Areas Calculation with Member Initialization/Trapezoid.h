//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022



#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid//creates the class trapezoid
{
private://private member variables
	double Base1{ 1.0 };
	double Base2{ 1.0 };
	double Height{ 1.0 };

public://pubic member functions
	Trapezoid() = default;
	Trapezoid(double b1, double b2, double h) : Base1(b1), Base2(b2), Height(h) {};
		


	double calcArea();

	double getBase1();
	double getBase2();
	double getHeight();
	bool setBase1(double b1);
	bool setBase2(double b2);
	bool setHeight(double h);
};

#endif
