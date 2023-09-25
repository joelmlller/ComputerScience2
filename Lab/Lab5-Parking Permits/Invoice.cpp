#include "Invoice.h"
#include <iostream>
using namespace std;

void Invoice::setService(int s) {
	serviceCharge = s;
}


void Invoice::setDiscount(int d) {
	discount = d;
}

void Invoice::setNum1(int num) {
	num1 = num;
}

void Invoice::setNum2(int nums) {
	num2 = nums;
}


void Invoice::setPrice(int p) {
	price = p;
}

void Invoice::setVehicleType(string vt) {
	vehicleType = vt;
}

void Invoice::setCustomerType(string ct) {
	ct = cts;
}

void Invoice::setPassType(string p) {

	pass = p;
}

//GETTERS

int Invoice::getNum1() {

	return num1;
}


int Invoice::getNum2() {

	return num2;
}

string Invoice::getPassType() {
	return pass;
}

string Invoice::getVehicleType() {
	return vehicleType;
}

string Invoice::getCustomerType() {
	return cts;
}

int Invoice::getDiscount() {
	return discount;
}

int Invoice::getService() {
	return serviceCharge;
}

int Invoice::getPrice() {
	return price;
}



//CALC MEMBER FUNCTION
int Invoice::calcTotalPrice() {
	int total;
	total = price - discount + serviceCharge;

	return total;
}


//SHOW INVOICE WHICH PRINTS INVOICE
void Invoice::showInvoice() {
	

	cout << "Name: " << name << endl;
	//cout << "Customer Type: " << cts << endl;
	cout << "Address: " << address << endl;
	cout << "Email: " << email << endl;
	//cout << "Vehicle Type: " << vehicleType << endl;

	if (num1 == 1) {
		cout <<"Make: "<< make << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Plate Number: " << plateNum << endl;
		cout << "Seat Capacity: " << seatCapacity << endl;
	}
	else  {
		cout << "Make: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Color: " << color << endl;
		cout << "Number of Wheels: " << wheels << endl;


	}

	cout << "Pass: "<< pass << "(" << price <<")" << endl;


	if (num2 == 1) {

		cout << "Employee Type: "<< employeeType<<endl;
		cout << "Employee Age: "<< age <<endl;
		cout << "Discount if any: EMPLOYEE DISCOUNT (-$10.00)"<< endl;
	}
	else  {
		cout << "Student Major: " << studentMajor<<endl;
		cout << "Student Year: " << studentYear<<endl;
		cout << "Discount if any: None" << endl;
	}
	
	cout << "Service Charges: " << serviceCharge << endl;

	cout << "BILL TOTAL: " << calcTotalPrice()<< endl;




}
