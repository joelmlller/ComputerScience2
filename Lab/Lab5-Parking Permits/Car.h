#ifndef CAR_H_
#define CAR_H_
#include <string>
using namespace std;

class Car
{
public:
	string color;
	int wheels;

public:
	

	//SETTERS FOR CUSTOMER DATA
	void setColor(string c);
	void setWheels(int w);


	//GETTERS FOR CUSTOMER DATA
	string getColor();
	int getWheels();

};



#endif

