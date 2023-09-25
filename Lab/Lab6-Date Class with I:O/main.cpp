//JOEL MILLER
//10/18/2022
//CPSC 1021 LABS
//DATES PROGRAM that takes input from a file in the format of numbers and outputs as a date in ascending order



#include <iostream>
#include <fstream> //includes fstream to pull input and output from files
#include <vector> //includes the vector library to use vectos
#include <algorithm> //Library to use the "sort" function
#include "Date.h" // Includes date.h


int main(int argc, char const* argv[]) // to accept command line arguments
{
	int number;
	int month;
	int day;
	int year;

	vector<Date> dateObj; //declaration of the vector and creation of dateObj


	ifstream fileIn(argv[1]); //gets the input from the dates file

	fileIn >> number; //assigns input from dates to number

	for (int i = 0; i < number; i++)
	{
		fileIn >> month;
		fileIn >> day;
		fileIn >> year;

		Date date(month, day, year); //calls the class Date constructor which assigns the data to the classes variables

		dateObj.push_back(date); //pushes the number to the end of the vector
	}

	fileIn.close();//closes the input file

	std::sort(dateObj.begin(), dateObj.end(), Date::compare); //is in the <algorithm> package to sort our dates.

	ofstream fileOut("outputs.txt"); //opens an output file named outputs


	for (int i = 0; i < number-1; i++)//does not print last one 
	{
		fileOut << dateObj[i].print() << endl;//calls date.print member function and prints the outputs to a new text file
	}



	fileOut << dateObj[number - 1].print() << endl;



	return 0;
}