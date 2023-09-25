/*
Group members:
Joel Miller
James William
Anna Kyoko
Connor Cromer

Class:
CPSC 1021

Date: 
11/01/2022

Project:
This program encrypts a string contained in the object by replacing each letter with its successor in the ASCII ordering. 


*/



#include <iostream>
#include "EncryptableString.h"
using namespace std;


int main()
{
 
    string userData; //string variable

    cout << "This is an Encryption program. ";
    cout << "Enter a string to encrypt: ";
    getline(cin, userData); //getline to get the string



    EncryptableString strObject(userData); //creates a object which sends the string to the constructor

    
    strObject.encryptData(); //encrypts the data
    strObject.printData(); //prints the data




    cout << endl;
    return 0;
}