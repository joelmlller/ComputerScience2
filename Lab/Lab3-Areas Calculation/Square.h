//This file declares the Square class 
// Joel Miller
//CPSC 1021 Labs
// 09/23/2022


#ifndef SQUARE_H_ 
#define SQUARE_H_
class Square //creates the class Square
{
private: //set to private so the only the class can access these variable
	double side;

public: //public so functions outside of the class can access these
	double calcArea();

	double getSide();
	bool setSide(double r);
};
#endif