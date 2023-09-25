#ifndef MOTORCYCLE_H_
#define MOTORCYCLE_H_

#include <iostream>
using namespace std;


class Motorcycle
{
public:
	string plateNum;
	int seatCapacity;

public:

	//SETTERS FOR CUSTOMER DATA
	void setPlateNum(string pn);
	void setSeatCapacity(int sc);


	//GETTERS FOR CUSTOMER DATA
	string getPlateNum();
	int getSeatCapacity();

};



#endif
