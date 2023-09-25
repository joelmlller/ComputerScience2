//This program takes the users choice from a menu and then outputs the area of the users given choice.
// Joel Miller
//CPSC 1021 Labs
// 09/08/2022


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double numPi = 3.14159; //constant for pi
    int userInput; // user input number for the menu choice
    double circleRadius; // user input for the radius of a circle
    double circleArea; // number to ouput the area of a circle
    double squareArea; // number to output the area of a square
    double squareLength; // user input for the length of a square
    double triangleHeight; // user input for the height of the triangle
    double triangleBase; // user input for the base length of the triangle
    double triangleArea; // number to output the area of a triangle

    cout << "1 -- square" << endl << "2 -- circle" << endl << "3 -- right triangle" << endl << "4 -- quit\n"; // Displays a menu to the user for suare, circle and right triangle and 4 to quit

    cout << endl; // blank line

    cin >> userInput; // gets the user input for the menu
    
    cout << endl; // blank line

    switch (userInput) { // switch statement to declare all the menu options


    case 1: // case 1 for finding and outputting the area of a square
        cout << "Length of the square: ";
        cin >> squareLength;

        squareArea = squareLength * squareLength;
        cout << endl;
        cout << "Area = " << fixed << showpoint << setprecision(2) << squareArea;
        break;

    case 2: // case 2 for finding and outputting the area of a circle
        cout << "Radius of the circle: ";
        cin >> circleRadius;

        circleArea = ((circleRadius * circleRadius)*numPi);
        cout << endl;
        cout << "Area = " << fixed << showpoint << setprecision(2) << circleArea;
        break;

    case 3: // case 3 for finding and outputting the area of a right triangle
        cout << "Base length of the right triangle: ";
        cin >> triangleBase;

        cout << "Height length of the right triangle: ";
        cin >> triangleHeight;

        triangleArea = ((triangleBase * triangleHeight) / 2);
        cout << endl;
        cout<< "Area = " << fixed << showpoint << setprecision(2) << triangleArea;
        break;

    default: // default case
        cout << "You entered an invalid choice. Good bye!"; // outputs goodbye if the user inputs a number that is not in the range 1-3
    }




    cout << endl; // blank line
	return 0;
}