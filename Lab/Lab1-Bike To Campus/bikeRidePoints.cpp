#include <iostream>
using namespace std;

int main() {

	int numBikes;

	cout << "Enter the Number of Bike Rides: ";
	cin >> numBikes;
	cout << endl;
	while (numBikes < 0) {

		cout << "The number of bikes entered was invalid. Please re-enter the number of Bike Rides: ";
		cin >> numBikes;

	}

	switch (numBikes) {

	   case 0:
			cout << "You earned 0 points this semester";
		    break;

		case 1:
			cout << "You earned 3 points this semester";
			break;

		case 2:
			cout << "You earned 10 points this semester";
			break;

		case 3:
			cout << "You earned 15 points this semester";
			break;

		case 4:
			cout << "You earned 30 points this semester";
			break;

		default:
			cout << "You earned 50 points this semester";
	}






	cout << endl;
	return 0;
}