/*
Group members:
Joel Miller
James William
Anna Kyoko
Connor Cromer

Class:
CPSC 1021

Date: 11/01/2022

*/



#include <iostream>
#include "Pstring.h"
#include <string>
using namespace std;


bool Pstring::isPalindrome() //bool member function that returns true or false
{
	bool str = true; 

	long unsigned int num1; 
	long unsigned int num2; 


	if (length() % 2 == 0) //if statement to see if the remainder is 0
	{
		num1 = (this->length()) / 2;
		num2 = num1 - 1; 
	}


	else
	{
		num1 = ((this->length()) / 2) + 1;
		num2 = ((this->length()) / 2) - 1; 
	}



	while ((num1) < this->length()) //while loop
	{
	
		if ((*this)[num2] != (*this)[num1])
		{

			str = false;
		}
		num2--; 
		num1++;
	}

	return str; //returns the true or false
}