#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <iostream>



using namespace std;

class Customer
{
public:
	string name;
	string address;
	string email;
	
public:

	//SETTERS FOR CUSTOMER DATA
	void setName(string n);
	void setAddress(string a);
	void setEmail(string e);

	//GETTERS FOR CUSTOMER DATA
	string getName();
	string getAddress();
	string getEmail();

};

#endif