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



#include"DivSales.h" //includes divsales
#include <vector>
#include <iostream>
#include <iomanip> //used for setprecision
using namespace std;



int main()
{

    vector<DivSales> sales(4); //creates a vector with 4 elements


    //variables
   double quarter1;
   double quarter2;
   double quarter3;
   double quarter4;

    for (int i = 0; i < 4; i++)
    {
        //QUARTER 1
        cout << "Enter sales data for Division " << (i + 1) << endl;
        cout << "Quarter 1: ";
        cin >> quarter1; //gets quarter 1


        while (quarter1 < 0)
        {
            cout << "Please enter 0 or greater: ";
            cin >> quarter1;
        }

        //QUARTER 2
        cout << "Quarter 2: ";
        cin >> quarter2;  //gets quarter 2


        while (quarter2 < 0)
        {
            cout << "Please enter 0 or greater: ";
            cin >> quarter2;
        }

        //QUARTER 3
        cout << "Quarter 3: ";
        cin >> quarter3;  //gets quarter 3


        while (quarter3 < 0)
        {
            cout << "Please enter 0 or greater: ";
            cin >> quarter3;
        }

        //QUARTER 4
        cout << "Quarter 4: ";
        cin >> quarter4;  //gets quarter 4


        while (quarter4 < 0)
        {
            cout << "Please enter 0 or greater: ";
            cin >> quarter4;
        }
        
        sales[i].setSales(quarter1, quarter2, quarter3, quarter4);
    }


    //output
    for (int i = 0; i < 4; i++)
    {
        cout << "Total Sales for Division " << i + 1 << ": $" << fixed << setprecision(2) << sales[i].getDivSales() << endl;//TOTAL SALES
    }
    
    cout << "Total Corporate Sales: $" << fixed << setprecision(2) << sales[3].getCorpSales() << endl; //TOTAL CORPORATE SALES







    return 0;

}
