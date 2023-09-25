#include "Rational.h"
#include <bits/stdc++.h> //provides access to gcd function
#include <cstdlib>

void Rational::setNumerator(int n)//standard setter function
{
    numerator = n;
};

void Rational::setDenominator(int d)//standard setter function
{
    denominator = d;
};

int Rational::getNumerator()//standard getter function
{
    return numerator;
};

int Rational::getDenominator()//standard getter function
{
    return denominator;
};

void Rational::reduce() //reduces the number
{
    int g = abs(__gcd(numerator, denominator));//calls the gcd function to find the greatest common factor.

    if (numerator < 0 || denominator < 0) //if second entry is negative, moves the negative to front to be formmated properly. 
    {
        numerator = abs(numerator / g);
        denominator = abs(denominator / g);

        numerator = numerator * -1;
    }
    else
    {
        numerator = numerator / g;
        denominator = denominator / g;
    }
};

ostream& operator<<(ostream& out, Rational r) //overloads the << operator to output the fraction properly. 
{
    out << "Reduced form: " << r.getNumerator() << "/" << r.getDenominator();
    return out;
};

