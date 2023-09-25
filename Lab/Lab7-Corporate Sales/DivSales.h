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



#ifndef DIVSALES_H
#define DIVSALES_H
#include <vector>
class DivSales
{
    std::vector<double> sales; //holds four quarters of sales figures for the division.
private:
    double divSales; //holds the total sales for a division for the entire year.
    static double totalSales; //holds the total corporate sales for all divisions for the entire year.

public:
    void setSales(double quarter1, double quarter2, double quarter3, double quarter4); // setter function with the 4 quarters as arguments

    double getDivSales(); //returns divsales

    double getCorpSales(); //returns total sales

};
#endif