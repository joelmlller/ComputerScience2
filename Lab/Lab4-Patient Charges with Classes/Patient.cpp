//This uses getter functions, setter functions and constructors to find the total charges at the hospital.
// Joel Miller
//CPSC 1021 Labs
// 09/30/2022




#include "Patient.h"


// setters
void Patient::Patient::setDays(int daysSpent) {
	if (validateInput(daysSpent)) {
		days = daysSpent;
	}
	else {
		days = 0; //SETS TO DEFAULT
	}
}



void Patient::Patient::setRate(double r) {
	if (validateInput(r)) {
		rate = r;
	}
	else {
		rate = 0.0;//SETS TO DEFAULT
	}
}



void Patient::Patient::setServices(double hs) {
	if (validateInput(hs)) {
		services = hs;
	}
	else {
		services = 0.0;//SETS TO DEFAULT
	}
}



void Patient::Patient::setMedication(double m) {
	if (validateInput(m)) {
		medication = m;
	}
	else {
		medication = 0.0;//SETS TO DEFAULT
	}
}



void Patient::Patient::setPatientType(char pt) {
	if (pt == 'I' || pt == 'O') {
		patientType = pt;
	}
	else {
		patientType = 'I';//SETS TO DEFAULT
	}
}



// validates the user input
bool Patient::Patient::validateInput(int inputValue) {
	// check if value is non positive number
	return inputValue >= 0;
}




bool  Patient::Patient::validateInput(double inputValue) {
	// check if value is non positive number
	return inputValue >= 0;
}




double Patient ::Patient::calcTotalCharges() {

	
	if (patientType == 'I') {
		return ((days * rate) + services + medication);
	}
	else {
		
		return services + medication;
	}

}





Patient::Patient(char pt, int d, double r, double s, double m ) : patientType(pt), days(d), rate(r), services(s), medication(m) { //constructor for inpatient, sends data to setters


	setDays(days); 
	setRate(rate);
	setServices(services);
	setMedication(medication);
	setPatientType(patientType);


}
	

Patient::Patient(char pt, double s, double m) : patientType(pt), services(s), medication(m) {//constructor for outpatient, sends data to setters

	setServices(services);
	setMedication(medication);
	setPatientType(patientType);
}




//getters


int Patient::Patient::getDays()  //GETTER FUNCTION THAT RETURNS DAYS
	{return days;}

double Patient::Patient::getRate() //GETTER FUNCTION THAT RETURNS RATE
	{return rate;}

double Patient::Patient::getServices() //GETTER FUNCTION THAT RETURNS SERVICES CHARGES
	{return services;}

double Patient::Patient::getMedication() //GETTER FUNCTION THAT RETURNS MEDICATION CHARGES
{return medication;}

char Patient::Patient::getPatientType() //GETTER FUNCTION THAT RETURNS PATIENT TYPE
	{return patientType;}



