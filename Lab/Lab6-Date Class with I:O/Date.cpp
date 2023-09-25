//JOEL MILLER
//10/18/2022
//CPSC 1021 LABS
//DATES PROGRAM



#include "Date.h"
#include <sstream>//use for string streams
#include <iomanip> //used for the width and size of output

Date::Date()
{
    month = 1;
    day = 1;
    year = 1900;
}

Date::Date(int m, int d, int y) : month(m), day(d) , year(y){ } //inline initialization

string const Date::MONTHS[] =  //string defined here
{
    "JANUARY", 
    "FEBRUARY", 
    "MARCH", 
    "APRIL", 
    "MAY", 
    "JUNE",
    "JULY", 
    "AUGUST", 
    "SEPTEMBER", 
    "OCTOBER", 
    "NOVEMBER", 
    "DECEMBER"
};



//GETTERS
int Date::getDay() const
{
    return day;
}
int Date::getMonth() const
{
    return month;
}
int Date::getYear() const
{
    return year;
}
//SETTERS
void Date::setDay(int d)
{
    day = d;
}
void Date::setMonth(int m)
{
    month = m;
}
void Date::setYear(int y)
{
    year = y;
}


bool Date::compare(const Date& date1, const Date& date2)
{

    if (date1.year < date2.year)
        return true;
    else if (date1.year > date2.year)
        return false;
    else
    {
        if (date1.month < date2.month)
            return true;
        if (date1.month > date2.month)
            return false;
    }
    return date1.day < date2.day;
}


string Date::print()
{
    stringstream ss; //string stream defined here
    

    ss << left << setw(10) << MONTHS[month - 1];
    ss << left << setw(3) << day;
    ss << left << setw(5) << year;

    
    return ss.str(); //returns datestream to be called later in program
}
