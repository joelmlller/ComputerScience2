//This program takes the users choice from a menu and then outputs the area of the users given choice.
// Joel Miller
//CPSC 1021 Labs
// 09/08/2022





#include <iostream> //iostream to use for inputs and outputs
#include <iomanip> // iomanip to use showpoint and setprecision to 
#include "compoundCalc.h" //includes the compoundcalc.h function 

using namespace std;



double RetirementSavings(double numPrincipal, double numRate, int numTime) {  // calls retirement savings 

	double retirementSaving;//variable for the retirement savings

	retirementSaving = compoundCalc(numPrincipal, numRate, numTime); //calls the compoundCalc function and places it in the compoundInterest variable
	
	return retirementSaving; //returns retirementSavings that could be called later in the program
}






int main() { //int main which outputs the final part of the program

	double principalNum;//variable for user input for the principal amount
	double rateNum;//variable for user input for the interest rate 
	double timeNum;//variable for user input for the amount of years the money will be left in the account
	
	cout << "Enter the Present Value: "; //output

	cin >> principalNum; //user input for the present value of the money
	cout << endl; //blank line
	cout << "Enter the interest rate: ";//output

	cin >> rateNum; //user input for the interest rate
	cout << endl; //blank line
	cout << "Enter the number of years the money will be left in the account: ";//output

	cin >> timeNum; //user input for the time the money will be left in the account
	cout << endl; //blank line

	cout << "Your retirement savings will be $" << fixed << showpoint << setprecision(2) << RetirementSavings(principalNum, rateNum, timeNum);//outputs the retirement savings while calling the retirement savings function



	cout << endl;//blank line

	return 0;
}