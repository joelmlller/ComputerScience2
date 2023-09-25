//This program includes the compoundcalc.h function and calculates the math equation for the compound interest
// Joel Miller
//CPSC 1021 Labs
// 09/08/2022




#include "compoundCalc.h" //includes the compoundcalc.h function
#include <math.h> //includes the math.h library to use for pow 

double compoundCalc(double numPrincipal, double numRate, int numTime) //calls the compound calc function
{
	double retirement;

	retirement = numPrincipal * (pow((1 + numRate), numTime));


	return retirement; // returns compound interest to call later in the program
}