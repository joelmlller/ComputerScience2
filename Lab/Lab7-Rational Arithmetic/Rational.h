#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

using namespace std;

class Rational
{
private:
    int numerator{ 2 }; //sets default to 2
    int denominator{ 2 }; //sets default to 2
    void reduce(); //reduces the rational number


public:
    Rational() = default;//default constructor, uses values set above.
    Rational(int n, int d) : numerator{ n }, denominator{ d }
    {
        this->reduce();
    } //contructor lets user set values.

    friend ostream& operator<<(ostream& out, Rational r); //overloads the << operator to output the fraction properly.

    //setter functions
    void setNumerator(int n);
    void setDenominator(int d);

    //getter functions
    int getNumerator();
    int getDenominator();
};

#endif