#include "Customer.h"
#include <string>
using namespace std;

void Customer::setName(string n)
{name = n;}

void Customer::setAddress(string a) 
{address = a;}


void Customer::setEmail(string e) 
{email = e;}



string Customer::getAddress() //GETTER THAT RETURNS ADDRESS
{return address;}


string Customer::getEmail() //GETTER THAT RETURNS EMAIL
{return email;}

string Customer::getName() //GETTER THAT RETURNS name
{
	return name;
}




