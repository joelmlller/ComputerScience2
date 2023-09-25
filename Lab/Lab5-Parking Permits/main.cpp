//joel miller
//10/14/2022
//cpsc 1021

#include <iostream>
#include <string>
#include "Customer.h"
#include "Invoice.h"
#include "Vehicle.h"
#include "Student.h"
#include "Employee.h"
#include "Car.h"
#include "Motorcycle.h"

using namespace std;


int main() {

	string customerType;
	string name;
	string address;
	string email;
	string vehicleType;
	string make;
	string model;
	string plateNum;
	string pass;
	string color;
	string employeeType;
	string studentYear;
	string studentMajor;

	int year;
	int seatCapacity;
	int wheels;
	int employeeAge;
	int passPrice;
	 int serviceCharge;
	 int discount;
	 int Num;
	 int Num2;
	
	Invoice invoiceObj;
	


	cout << "Employee or Student? ";
	cin >> customerType;

	if (customerType == "Employee") {

		Num2 = 1;
		invoiceObj.setNum2(Num2);
		discount = 10;
		invoiceObj.setDiscount(discount);

		cout << "Employee Type? Professor, Maintence, etc.. : ";
		cin >> employeeType;
		invoiceObj.setEmployeeType(employeeType);


		cout << "Age: ";
		cin >> employeeAge;
		invoiceObj.setAge(employeeAge);

	}
	else {

		Num2 = 30;
		invoiceObj.setNum2(Num2);
		discount = 0;
		invoiceObj.setDiscount(discount);

		cout << "Freshman,Sophmore,Junior,or Senior? ";
		cin >> studentYear;
		invoiceObj.setStudentYear(studentYear);

		cout << "Major? ";
		cin >> studentMajor;
		invoiceObj.setStudentMajor(studentMajor);
	}


	
	//CUSTOMER CLASS DATA
	cout << "Name: ";
	cin >> name;
	invoiceObj.setName(name);

	cout << "Address: ";
	cin >> address;
	invoiceObj.setAddress(address);

	cout << "Email: ";
	cin >> email;
	invoiceObj.setEmail(email);
	
	cout << "Pass type(Annual or semester): ";
	cin >> pass;

	invoiceObj.setPassType(pass);


	if (pass == "Annual") {
		serviceCharge = 5;
		passPrice = 100;
		invoiceObj.setPrice(passPrice);
		invoiceObj.setService(serviceCharge);
	}
	else {
		serviceCharge = 5;
		passPrice = 50;
		invoiceObj.setPrice(passPrice);
		invoiceObj.setService(serviceCharge);
	}


	cout << "Vehicle type: ";
	cin >> vehicleType;



	if (vehicleType == "Motorcycle") {
		Num = 1;
		invoiceObj.setNum1(Num);
		cout << "Plate Number(no spaces): ";
		cin >> plateNum;
		invoiceObj.setPlateNum(plateNum);

		cout << "Seat capacity: ";
		cin >> seatCapacity;
		invoiceObj.setSeatCapacity(seatCapacity);

	}
	else {
		Num = 57;
		invoiceObj.setNum1(Num);
		cout << "Color: ";
		cin >> color;
		invoiceObj.setColor(color);

		cout << "Wheels(number): ";
		cin >> wheels;
		invoiceObj.setWheels(wheels);

	}

	//VEHICLE CLASS DATA

	cout << "Make: ";
	cin >> make;
	invoiceObj.setMake(make);

	cout << "Model: ";
	cin >> model;
	invoiceObj.setModel(model);

	cout << "Year: ";
	cin >> year;
	invoiceObj.setYear(year);





	

	cout << endl;
	

	invoiceObj.showInvoice();


	return 0;
}