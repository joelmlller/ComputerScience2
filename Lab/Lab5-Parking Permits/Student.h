#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;


class Student
{
public:
	string studentYear;
	string studentMajor;

public:
	
	//SETTERS FOR CUSTOMER DATA
	void setStudentYear(string y);
	void setStudentMajor(string m);


	//GETTERS FOR CUSTOMER DATA
	string getStudentYear();
	string getStudentMajor();

};



#endif
