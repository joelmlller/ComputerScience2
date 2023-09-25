#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

class Employee
{
	public:
	string employeeType;
	int age;

public:
	//SETTERS FOR CUSTOMER DATA
	void setEmployeeType(string e);
	void setAge(int a);
	

	//GETTERS FOR CUSTOMER DATA
	string getEmployeeType();
	int getAge();
	
};


#endif

