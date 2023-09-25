/*
Group members:
Joel Miller
James William
Anna Kyoko
Connor Cromer

Class:
CPSC 1021

Date: 11/01/2022

Project:
A palindrome is a string that reads the same backward as forward. This program checks if the string is a palindrome and tells the user if it is or is not

*/



#include <string>
#include <iostream>
#include "Pstring.h"
using namespace std;


int main()
{
	string palString; //creates a variable string
	
	cout << "This is a palindrome-testing program. Enter a string to test: ";
	getline(cin, palString); //getline to get the string
	

	Pstring string(palString); //creates a string object and sends the palstring data to the constructor
	
	if (string.isPalindrome()) { //if the string is true then print is a palindrome
		cout << palString << " is a palindrome";
	}

	else {
		cout << palString <<" is not a palindrome";//if the string is false then print is not a palindrome
	}

	cout << endl;
	
	return 0;
}