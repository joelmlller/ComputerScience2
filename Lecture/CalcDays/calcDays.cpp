//Function description that uses pass by const reference to pass two dates and find the difference betweent those two dates. 
// Joel Miller
//CPSC 1020
// 09/30/2022
#include "calcDays.h"
#include <iostream>
#include"Date.h"

int calcDays(const Date& date1, const Date& date2) {

	int daysDiff1;
	int daysDiff2;
	int daysResult;

	daysDiff1 = (date1.getDay() - 32075 + 1461 * (date1.getYear() + 4800 + (date1.getMonth() - 14) / 12) / 4 + 367 * (date1.getMonth() - 2 - (date1.getMonth() - 14) / 12 * 12) / 12 - 3 * ((date1.getYear() + 4900 + (date1.getMonth() - 14) / 12) / 100) / 4) -(1 - 32075 + 1461 * (2021 + 4800 + (1 - 14) / 12) / 4 + 367 * (1 - 2 - (1 - 14) / 12 * 12) / 12 - 3 * ((2021 + 4900 + (1 - 14) / 12) / 100) / 4); //equation for finding the difference between date 1 and 1/1/2021

	daysDiff2 = (date2.getDay() - 32075 + 1461 * (date2.getYear() + 4800 + (date2.getMonth() - 14) / 12) / 4 + 367 * (date2.getMonth() - 2 - (date2.getMonth() - 14) / 12 * 12) / 12 - 3 * ((date2.getYear() + 4900 + (date2.getMonth() - 14) / 12) / 100) / 4) - (1 - 32075 + 1461 * (2021 + 4800 + (1 - 14) / 12) / 4 + 367 * (1 - 2 - (1 - 14) / 12 * 12) / 12 - 3 * ((2021 + 4900 + (1 - 14) / 12) / 100) / 4); //equation for finding the difference between date 2 and 1/1/2021

	daysResult = daysDiff1 - daysDiff2; //difference between date 1 and 1/1/2021 subtracted by the difference between date 2 and 1/1/2021

	//cout << daysResult<<endl;
	return abs(daysResult); //return the number of days between date 1 and date 2
}


