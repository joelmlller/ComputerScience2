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



#ifndef ENCRYTABLESTRING_H
#define ENCRYTABLESTRING_H

#include <string>
using namespace std;


class EncryptableString : public string //derived from the STL string class
{
   
    string data;

public:

    EncryptableString();//default constructor

    EncryptableString(string str);

    void encryptData(); //does not return anything

    void printData(); //does not return anything
};

#endif