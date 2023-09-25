//This function validates whether the user input is valid or not (true or false). 
// Joel Miller
//CPSC 1021 Labs
// 09/14/2022




#include <iostream> //used for output
using namespace std;

bool validateUserInput(int validInput) {
	
	bool status = false;
	if (validInput < 0) {
		status = false;
	}
	else {

		status = true;
		
	}
	
	//bool variable declares it to be true but can be redeclared later in the program

	
	return status; //returns the bool variable "status"
}
