#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <iostream>
#include <string>
using namespace std;


class Vehicle
{
public:
	string make;
	string model;
	int year;

public:
	

	//SETTERS FOR CUSTOMER DATA
	void setMake(string ma);
	void setModel(string mo);
	void setYear(int y);

	//GETTERS FOR CUSTOMER DATA
	string getMake();
	string getModel();
	int getYear();

};


#endif
