//JOEL MILLER
//10/18/2022
//CPSC 1021 LABS
//DATES PROGRAM



#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date//creates class date
{
private:
    int month{ 1 };//default dates for month day and year set to 1/1/1990
    int day{ 1 };
    int year{ 1990 };

public:
    Date(); //default constructor
    Date(int m, int d, int y);
   
    string static const MONTHS[12];//creates an array of 12 months
    string print();
    static bool compare(const Date& date1, const Date& date2);//compare member function

    //setters
    void setMonth(int);
    void setDay(int);
    void setYear(int);
   //getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    
  
};

#endif