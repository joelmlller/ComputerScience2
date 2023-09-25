#include "Student.h"
#include <string>
using namespace std;

void Student::setStudentYear(string y)
{studentYear = y;}

void Student::setStudentMajor(string m)
{studentMajor = m;}


//GETTERS FOR CUSTOMER DATA
string Student::getStudentYear() 
{return studentYear;}

string Student::getStudentMajor()
{return studentMajor;}