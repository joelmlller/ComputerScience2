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
The program should ask the user
to enter the sales for four quarters for each division. If the user enters a value <0, the program
should prompt the user to enter a valid value (implement this input validation in your main
program). After the data is entered, the program should display a table showing the division
sales for each quarter. The program should then display the total corporate sales for the year.

*/




#include"DivSales.h"
#include <iostream>
#include <vector>
using namespace std;


double DivSales::totalSales; //declares the variable in the scope of DivSales


//GETTERS
double DivSales::getDivSales(){

    return divSales; //returns divsales
}

double DivSales::getCorpSales() {

    return totalSales; //returns totalsales
}






void DivSales::setSales(double quarter1, double quarter2, double quarter3, double quarter4)
{
    sales.push_back(quarter1); //pushes to back of vector
    sales.push_back(quarter2); //pushes to back of vector
    sales.push_back(quarter3); //pushes to back of vector
    sales.push_back(quarter4); //pushes to back of vector

    divSales = quarter1 + quarter2 + quarter3 + quarter4; //total sales for a division for the entire year.
    
    totalSales += divSales; //total corporate sales for all divisions for the entire year.
}