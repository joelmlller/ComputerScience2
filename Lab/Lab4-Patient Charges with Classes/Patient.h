//This is the definition for patient cpp
// Joel Miller
//CPSC 1021 Labs
// 09/30/2022

#ifndef PATIENT_H_
#define PATIENT_H_
class Patient {


private:
	// attributes
	int days{ 0 };
	double rate{ 0 };
	double services{ 0 };
	double medication{ 0 };
	char patientType{'I'};
	bool validateInput(double inputValue);
	bool validateInput(int inputValue);
	



public:
	Patient() = default;//default constructor
	Patient(char patient_type, int days, double rate , double services, double medication); //constructor for inpatients
	Patient(char patient_type, double services, double medication); //constructor for outpatients



	//getters
	int getDays();
	double getRate();
	double getServices();
	double getMedication();
	char getPatientType();
	// setters
	void setDays(int daysSpent);
	void setRate(double rate);
	void setServices(double hospitalServices);
	void setMedication(double medicationCharges);
	void setPatientType(char patientType);
	
	//  calculates a patient’s total charges
	double calcTotalCharges(); //inpatient function

};

#endif