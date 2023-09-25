//This program will calculate a patient's hospital charges using multiple functions and input/output. 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022






#include <iostream>
#include "calcTotalCharges.h" //includes calctotalcharges header file and function
#include "validateUserInput.h" //includes validateuserinput header file and function
using namespace std;


int main() {
	//all of the variables used for the main program
	char useradmitted;
	int hospitalDays;
	double roomRate;
	int labFeeInpatient;
	double medChargeInpatient;
	int labFeeOutpatient;
	double medChargeOutpatient;


	

	cout << "Enter I for in - patient or O for out - patient: ";
	cin >> useradmitted; //gets the choice if the patient is inpatient or outpatient

	

	while (useradmitted != 'I' && useradmitted != 'O') { //loop to keep getting the users input if they enter an incorrect choice

		cout << "Enter I for in - patient or O for out - patient: ";
		cin >> useradmitted; //gets the users choice again
		validateUserInput(useradmitted); //validates the choice again
		 
	}
	switch (useradmitted) { //switch if statement

	case 'I': //if user entered I and gets all the data
		cout << "Number of days in the hospital : ";
			cin >> hospitalDays;


			validateUserInput(hospitalDays);
			while (validateUserInput(hospitalDays) == 0) {
				cout << "Number of days in the hospital : ";
				cin >> hospitalDays;
			}


		cout << "Daily room rate ($) : ";
			cin >> roomRate;
			

			validateUserInput(roomRate);
			while (validateUserInput(roomRate) == 0) {
				cout << "Daily room rate ($) :  ";
				cin >> roomRate;
			}


		cout << "Lab fees and other service charges ($) : ";
			cin >> labFeeInpatient;


			validateUserInput(labFeeInpatient);
			while (validateUserInput(labFeeInpatient) == 0) {
				cout << "Lab fees and other service charges ($)  :  ";
				cin >> labFeeInpatient;
			}

		cout << "Medication charges ($) : ";
			cin >> medChargeInpatient;
			
			validateUserInput(medChargeInpatient);
			while (validateUserInput(medChargeInpatient) == 0) {
				cout << "Medication charges ($) : ";
				cin >> medChargeInpatient;
			}


		cout << "Your total hospital bills is $" << calcTotalCharges(hospitalDays, roomRate, labFeeInpatient, medChargeInpatient); //calls function to print total hospital bills for inpatients

		break;

	case 'O': //if user entered O and gets all the data
		cout << "Lab fees and other service charges ($) : ";
			cin >> labFeeOutpatient;

			validateUserInput(labFeeOutpatient);
			while (validateUserInput(labFeeOutpatient) == 0) {
				cout << "Lab fees and other service charges ($) : ";
				cin >> labFeeOutpatient;
			}

		cout << "Medication charges ($) : ";
			cin >> medChargeOutpatient;

			validateUserInput(medChargeOutpatient);
			while (validateUserInput(medChargeOutpatient) == 0) {
				cout << "Medication charges ($) : ";
				cin >> medChargeOutpatient;
			}



		cout << "Your total hospital bills is " << calcTotalCharges(labFeeOutpatient, medChargeOutpatient); //calls function to print total hospital bills for outpatients


		break;


	}



	cout << endl; //blank line

	return 0;
}