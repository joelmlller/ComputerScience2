#include "Car.h"
#include <string>
using namespace std;


void Car::setColor(string c) 
{color = c;}

void Car::setWheels(int w)
{wheels = w;}

string Car::getColor()
{return color;}

int Car::getWheels() 
{return wheels;}