#include "Vehicle.h"
#include <string>
using namespace std;


void Vehicle::setMake(string ma)
{make = ma;}

void Vehicle::setModel(string mo)
{model = mo;}


void Vehicle::setYear(int y)
{year = y;}


string Vehicle::getMake() //GETTER THAT RETURNS NAME
{return make;}

string Vehicle::getModel() //GETTER THAT RETURNS ADDRESS
{return model;}

int Vehicle::getYear() //GETTER THAT RETURNS EMAIL
{return year;}


