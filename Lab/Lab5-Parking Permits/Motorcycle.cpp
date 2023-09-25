#include "Motorcycle.h"
#include <string>
using namespace std;


void Motorcycle::setPlateNum(string pn)
{plateNum = pn;}

void Motorcycle::setSeatCapacity(int sc)
{seatCapacity = sc;}

string Motorcycle::getPlateNum()
{return plateNum;}

int Motorcycle::getSeatCapacity()
{return seatCapacity;}