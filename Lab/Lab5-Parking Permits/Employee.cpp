#include "Employee.h"
#include <string>
using namespace std;


void Employee::setEmployeeType(string e)
{employeeType = e;}

void Employee::setAge(int a)
{age = a;}

string Employee::getEmployeeType()
{return employeeType;}

int Employee::getAge()
{return age;}