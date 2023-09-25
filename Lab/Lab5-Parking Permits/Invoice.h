#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>
#include "Customer.h"
#include "Vehicle.h"
#include "Student.h"
#include "Employee.h"
#include "Car.h"
#include "Motorcycle.h"

using namespace std;

class Invoice : public Customer, public Vehicle , public Motorcycle, public Employee, public Student , public Car
{
	
public:
	string cts;
	string vehicleType;
	string pass;
	int price;
	int discount;
	int serviceCharge;
	int num1;
	int num2;

public:
	
	//SETTERS
	void setVehicleType(string vt);
	void setCustomerType(string ct);
	void setPassType(string p);
	void setService(int s);
	void setDiscount(int d);
	void setPrice(int p);
	void setNum1(int num);
	void setNum2(int nums);
	//SHOW INVOICE WHICH PRINTS INVOICE
	void showInvoice();
	//GETTERS
	string getVehicleType();
	string getCustomerType();
	string getPassType();
	int getDiscount();
	int getService();
	int getPrice();
	int getNum1();
	int getNum2();
	//CALC MEMBER FUNCTION
	int calcTotalPrice();
};


#endif

