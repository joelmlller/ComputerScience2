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



#ifndef PSTRING_H
#define PSTRING_H

#include <iostream>
#include <string>
using namespace std;

class Pstring : public string //derived from the STL string class
{

public:
	Pstring(string s) : string(s) { } //constructor which gets the string 

	bool isPalindrome(); //creates a member function of type bool

};


#endif