//Function definition that creates the Class Date and all of the member variables and functions which will be used throughout the program.
// Joel Miller
//CPSC 1020
// 09/30/2022

#ifndef DATE_H_
#define DATE_H_
#include<string>
using namespace std;

class Date//creates the class Date
{
private://private member variables
	int day{ 1 };
	int month{ 1 };
	int year{ 2021 }; //default initialization

public://pubic member functions
		
		Date() = default; //set to default 
		Date(int d, int m, int y);
		bool setDay(int d);
		bool setMonth(int m);
		bool setYear(int y);
		int getDay()const;
		int getMonth()const;
		int getYear()const;
		string showDate();
};

#endif