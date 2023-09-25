/*
Group members:
Joel Miller
James Williams
Anna Kyoko
Connor Cromer

Class:
CPSC 1021

Date: 11/02/2022

Project:
Write a class called Rational with a constructor Rational(int, int) that takes two integers, a numerator  and  a denominator,  and  stores  those  two values in  reduced  form  in  corresponding private members. The class should have a private member function void reduce() that is used to accomplish the transformation to reduced form. The class should have an overloaded insertion operator  << that  will  be  used  for  output  of  objects  of  the  class.
Demonstrate your class by having a main program that asks the user to enter two integres. The
program uses the integers to initialize a Rational object and then calls the overloaded operator << to print the rational number in reduced form.
*/

#include <iostream>
#include "Rational.h"

using namespace std;

int main() {

	int n{ 2 }, d{ 4 };

	cout << "Enter the numerator and denominator separated by a space: ";
	cin >> n;
	cin >> d;

	Rational r1(n, d);

	cout << r1 << endl;
}