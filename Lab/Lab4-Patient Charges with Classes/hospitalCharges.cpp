//This program asks the user if they are an inpatient or outpatient and calculates the total charges based on which patient they are.
// Joel Miller
//CPSC 1021 Labs
// 09/30/2022






#include "Patient.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


	cout << "This program will calculate a patient's hospital charges." << endl;

	cout << "Enter I for in-patient or O for out-patient: ";
	char patientType;
	cin >> patientType;

	if (patientType == 'I') {

		cout << "Enter the number of days spent in the hospital: ";
		int days;
		cin >> days;

		cout << "Enter the daily rate: ";
		double dailyRate;
		cin >> dailyRate;

		cout << "Lab fees and other service charges ($): ";
		double hospitalServices;
		cin >> hospitalServices;

		cout << "Medication charges ($): ";
		double medicalCharges;
		cin >> medicalCharges;

		

		patientType = 'I';

		Patient patient(patientType,days,dailyRate,hospitalServices,medicalCharges);
		cout << "Your total hospital bills is $" << fixed << showpoint << setprecision(2) << patient.calcTotalCharges();
	}
	else if (patientType == 'O') {

		cout << "Lab fees and other service charges ($): ";
		double hospitalServices;
		cin >> hospitalServices;


		cout << "Medication charges ($):";
		double medicalCharges;
		cin >> medicalCharges;


		patientType = 'O';

		Patient patient(patientType, hospitalServices, medicalCharges);


		cout << "Your total hospital bills is $" << fixed << showpoint << setprecision(2) << patient.calcTotalCharges();


	}

	
	return 0;
	
}