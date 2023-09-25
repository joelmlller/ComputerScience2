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
#include "EncryptableString.h"
using namespace std;


EncryptableString::EncryptableString() //constructor sets data to "" 
{
    data = "";
}


EncryptableString::EncryptableString(string str)
{
    this->data = str; //gets the string and assigns it to str
}

void EncryptableString::encryptData()
{

    for (long unsigned int i = 0; i < data.length(); i++)
    {
      
        if ((data[i] >= 'a' && data[i] <= 'z') || (data[i] >= 'A' && data[i] <= 'Z')) //series of if statements to encrypt z or Z to a or A
        {
           
            if (data[i] == 'z')
            {
                
                data[i] = 'a';
            }
            
            else if (data[i] == 'Z')
            {
              
                data[i] = 'A';
            }
          
            else
            {
                data[i] = data[i] + 1;
            }
        }
    }
}


void EncryptableString::printData()
{
    cout << "Here is the encrypted string: " << data; //prints the encrypted string
}