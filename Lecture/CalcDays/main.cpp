//Main program to gather all needed input and output. This program will ask whether the user is positive or negative and then depending on your vaccine status determine whether or not you are considered fully vaccinated and determine the length of your isolation.
// Joel Miller
//CPSC 1020
// 09/30/2022

#include <iostream>
#include "Date.h" //includes date header file
#include "calcDays.h" //includes calcdays header file
using namespace std;


int main() {

	string testResult;
	string userExposure;
	string secDose;
	string vacStatus;
	int day;
	int month;
	int year;

	
	cout << "Test result(positive or negative): ";	
	cin >> testResult;

	

	if (testResult == "negative") { //if the users covid test is negative

		cout << "Exposed to positive case?(yes or no): ";
		cin >> userExposure;

		if (userExposure == "yes") { //if the user was exposed to covid19
			cout << "Date exposed to positive case:(MONTH): ";
			cin >> month;
			
			cout << "Date exposed to positive case:(DAY): ";
			cin >> day;

			cout << "Date exposed to positive case:(YEAR): ";
			cin >> year;
			
			Date dateExposed(day, month, year); //sends input to constructor "date"

			cout << dateExposed.showDate() << endl; //calls the string showdate and prints its data
			
			cout << "Second vaccination dose received?(yes or no): ";
			cin >> secDose;

			if (secDose == "yes") { //if user has a second covid shot


				cout << "Date second vaccination dose received(MONTH): ";
				cin >> month;

				cout << "Date second vaccination dose received(DAY): ";
				cin >> day;

				cout << "Date second vaccination dose received(YEAR): ";
				cin >> year;

				Date dateSecondDose(day, month, year);//sends input to constructor "date"

				cout << dateSecondDose.showDate() << endl; //calls the string showdate and prints its data


				int daysDiff = calcDays(dateExposed, dateSecondDose); //assigns the integer daysdiff to the function calcdays to determine if days are less than or greater than or equal to 2 weeks

				if (daysDiff < 14) { //if less than 14 the program will determine that you are considered not fully vaccinated and will have a isolation of 10 days

					vacStatus = "Vaccination status at time of exposure: not fully vaccinated";

					cout << vacStatus << endl << "Length of isolation: 10 days";


				}
				else if (daysDiff >= 14) { // if greater  than or equal to 14 the program will determine that you are considered fully vaccinated and will have a isolation of 5 days
					
					vacStatus = "Vaccination status at time of exposure: fully vaccinated";

					cout << vacStatus << endl << "Length of isolation: 5 days";

				}


			}
			else if (secDose == "no") {
				cout << "Vaccination status at time of exposure: not fully vaccinated" << endl << "Length of isolation: 10 days";

			}
			
		}
		else {

			cout << "Length of isolation: 0 days";
		}
	}
	else if (testResult == "positive") { //If user tested positive it gets the date the user tested positive

		cout << "Date tested positive(MONTH): ";
		cin >> month;
		
		cout << "Date tested positive(DAY): ";
		cin >> day;
		
		cout << "Date tested positive(YEAR): ";
		cin >> year;
		
		Date datePositive(day, month, year);//sends input to constructor "date"

		cout << datePositive.showDate() << endl; //calls the string showdate and prints its data
		

		cout << endl;
		cout << "Length of isolation: 5 days";
	}


	cout << endl;
	return 0;
}