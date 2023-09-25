//These functions are overloaded and will calculate the total charges for inpatient and outpatient patients.
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022





#include "calcTotalCharges.h" //included calcTotalCharges header file


double calcTotalCharges(int days, double roomRate, int labFeeInpatient, double medChargeInpatient) { //function for calculating inpatient charges

	double totalInpatientBills; //declares the total inpatient bills 

	totalInpatientBills = ((days * roomRate) + labFeeInpatient + medChargeInpatient); //math problem to solve for the total

	return totalInpatientBills; //returns the total back to main
}

double calcTotalCharges(int labFeeOutpatient, double medChargeOutpatient) { //function for calculating outpatient charges

	double totalOutpatientBills; //declares the total outpatient bills 

	totalOutpatientBills = labFeeOutpatient + medChargeOutpatient; //returns the total back to main

	return totalOutpatientBills; //returns the total back to main
}