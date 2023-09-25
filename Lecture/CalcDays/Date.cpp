//Function description which will use input validation for all input entered in the main program and also which use a constructor to set the the input to a default date if entered incorrectly. This program will finally return a string formatted as 00/00/0000 back to main.
// Joel Miller
//CPSC 1021 Labs
// 09/30/2022

#include <iostream>
#include "Date.h"
#include <string>
#include "calcDays.h"
using namespace std;



bool Date::setYear(int y) {//SETTER FUNCTION FOR YEARS THAT RETURNS TRUE OR FALSE IF THE INPUT IS VALID OR INVALID
   
    if (y < 2021 || y > 2022) {
       // year = y;
        return false;
        
    }
    else {
        year = y;
        return true;
        
        
    }
}


bool Date::setMonth(int m) {//SETTER FUNCTION FOR MONTHS THAT RETURNS TRUE OR FALSE IF THE INPUT IS VALID OR INVALID

    if (m < 1 || m > 12) {
        //month = m;
        return false;
    }
    else {
        month = m;
        return true;
    }
}

bool Date::setDay(int d) { //SETTER FUNCTION FOR DAYS THAT RETURNS TRUE OR FALSE IF THE INPUT IS VALID OR INVALID{
        if (month == 2) {
            if (d < 1 || d > 28) {
                //day = d;
                return false;
                
            }
            else {
 
                day = d;
                return true;
                
            }

        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

            if (d < 1 || d > 31) {

              //  day = d;
                return false;
                

            }
            else {

                day = d;
                return true;
            }

        }
        else {

            if (d < 1 || d > 30) {

               // day = d;
                return false;

                
            }
            else {

                day = d;
                return true;
            }

        }
        
    }
  



Date::Date(int d, int m, int y) //CONSTRUCTOR WITH INLINE INITIALIAZTION
: day(d), month(m), year(y) 
{
    Date obj;

    bool monthCheck = obj.setMonth(month);

    if (monthCheck == 0) {

        cout << "False" << endl;
        month = false;

    }
    else if (monthCheck == 1){

        cout << "True" << endl;
    }
    else {

    }

    bool dayCheck = obj.setDay(day);

    if (dayCheck == 0) {

        cout << "False" << endl;
        day = false;

    }
    else if (dayCheck == 1) {

        cout << "True" << endl;
    }
    else {
        
    }



    bool yearCheck = obj.setYear(year);

    if (yearCheck == 0) {

        cout << "False" << endl;
        year = false;

    }
    else if (yearCheck == 1) {

        cout << "True" << endl;
    }
    else {

    }


    if (month == false) {
        day = 1;
        month = 1;
        year = 2021;

       
    }
     else if (day == false) {
        day = 1;
        month = 1;
        year = 2021;

        
     } 
    else if (year == false){
        day = 1;
        month = 1;
        year = 2021;

       
    }
  else {
        
   }




    }
   


int Date::getMonth()const //GETTER THAT RETURNS MONTH
{return month;}

int Date::getDay()const //GETTER THAT RETURNS DAY
{ return day;}

int Date::getYear()const //GETTER THAT RETURNS YEAR
{return year;}


string Date::showDate() { //STRING FUNCTION WHICH RETURNS THE DATE AS A STRING
    
    string m;
    string d;
    string y;
    string date;
   m = to_string(month);
   d = to_string(day);
   y = to_string(year);
   
   if (day < 10) { //if the day entered is less than 10 add a zero to the beginning of day to match format

       d = "0" + d;
   }
   if (month < 10) { //if the month entered is less than 10 add a zero to the beginning of month to match format

       m = "0" + m;
   }


   date = m + "/" + d + "/" + y; //adds slashes to the string date as well as the date variables
  
   return date; //Returns the date formatted to specifications -- 00/00/0000 -- month/day/year
}