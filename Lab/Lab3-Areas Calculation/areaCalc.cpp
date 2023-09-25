#include <iostream>
#include <iomanip>

#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;




int main() {

	int userChoice; //used for getting the menu choice
	double circRadius, squareSide, recWidth, recLength, Base1, Base2, trapHeight; //all variables used for input and output

	//menu
	cout << "1 --circle" << endl;
	cout << "2 --square" << endl;
	cout << "3 --rectangle" << endl;
	cout << "4 --trapezoid" << endl;
	cout << "5 --quit" << endl;

	cin >> userChoice;

	while (userChoice < 1 || userChoice > 5) {//while loop to validate that the menu choice greater than 0 and less than 5
		cout << "Please enter a valid choice: ";
		cin >> userChoice;
	}



	switch (userChoice) { //switch choice



		//CIRCLE AREA CASE
	case 1: //if choice = 1

		while (true) {
			Circle circleObj; //calls the Circle class and creates and object
			cout << "Radius: ";
			cin >> circRadius;    //Get radius value
			bool circleDet = circleObj.setRadius(circRadius);   //call to setter
			if (circleDet) {  //if true
				cout << "Radius: " << fixed << showpoint << setprecision(1) << circleObj.getRadius() << endl;  //Display the radius
				cout << "Area: " << fixed << showpoint << setprecision(1) << circleObj.calcArea() << endl; //displays the area
				break;  //Exit the loop
			}
			else    //if false display the error message and continue the loop
				cout << "Enter a valid input" << endl;
		}
		break;


		//SQUARE AREA CASE
	case 2: // if choice = 2 

		while (true) {
			Square squareObj; //Calls the square class and creates a square object
			cout << "Side: ";
			cin >> squareSide;    //Gets side value
			bool squareDet = squareObj.setSide(squareSide);   //call to setter
			if (squareDet) {  //if true
				cout << "Side: " << fixed << showpoint << setprecision(1) << squareObj.getSide() << endl;  //Display the side value
				cout << "Area: " << fixed << showpoint << setprecision(1) << squareObj.calcArea() << endl; //displays area value
				break;  //Exit the loop
			}
			else    //if false display the error message and continue the loop
				cout << "Enter a valid input" << endl;
		}
		break;



		//RECTANGLE AREA CASE
	case 3:
	{
	cout << "Length: "; //gets length
	cin >> recLength;

	Rectangle recObj; //calls rectangle class and creates rectangle object
	bool recDet = recObj.setLength(recLength);

	while (recDet == false) { //while false keep getting the length
		cout << "Length: ";
		cin >> recLength; 
		recDet = recObj.setLength(recLength);//sends to setter for revalidation
		
	}

	cout << "Width: ";
	cin >> recWidth; //gets width
	recDet = recObj.setWidth(recWidth); //sends to setter

	while (recDet == false) {//while width is invalid
		cout << "Width: ";
		cin >> recWidth;//gets width
		recDet = recObj.setWidth(recWidth); //sends to setter for revalidation
	}

	cout << "Length: " << fixed << showpoint << setprecision(1) << recObj.getLength() << endl;  //Display the length
	cout << "Width: " << fixed << showpoint << setprecision(1) << recObj.getWidth() << endl; //displays width
	cout << "Area: " << fixed << showpoint << setprecision(1) << recObj.calcArea() << endl; //displays area

	}
		
	break;

		//TRAPEZOID AREA CASE
	case 4:
	{
		cout << "Base1: ";
		cin >> Base1;//gets base1

		Trapezoid trapObj; //calls the trapezoid class and creates a object
		bool trapDet = trapObj.setBase1(Base1);

		while (trapDet == false) { // while base1 is invalid
			cout << "Base1: ";
			cin >> Base1;
			trapDet = trapObj.setBase1(Base1);//sends to setter for revalidation

		}

		cout << "Base2: ";
		cin >> Base2; //gets base2
		trapDet = trapObj.setBase2(Base2); //sends to setter

		while (trapDet == false) { //while base 2 is invalid
			cout << "Base2: ";
			cin >> Base2; //gets base 2 if initial value invalid
			trapDet = trapObj.setBase2(Base2); //sends to setter for revalidation
		}

		cout << "Height: ";
		cin >> trapHeight;//gets inital height
		trapDet = trapObj.setHeight(trapHeight); //sends to mutator

		while (trapDet == false) { //while the height is invalid
			cout << "Height: ";
			cin >> trapHeight; //gets height value if inital value invalid
			trapDet = trapObj.setHeight(trapHeight);//sends to setter for revalidation
		}

		cout << "Base1: " << fixed << showpoint << setprecision(1) << trapObj.getBase1() << endl;  //Display the base1
		cout << "Base2: " << fixed << showpoint << setprecision(1) << trapObj.getBase2() << endl; //displays base2
		cout << "Height: " << fixed << showpoint << setprecision(1) << trapObj.getHeight() << endl; //displays height
		cout << "Area: " << fixed << showpoint << setprecision(1) << trapObj.calcArea() << endl; //displays area

	}
		break;



	case 5://if menu choice = 5 exit the program
		break;



		return 0; //main returns 0
	}
}
