//Joel Miller
//PROJECT 3
//12/07/2022
//read in a text file of integers, storing them in a vector, providing various statistical results from these integers. 


#include "stats.h"



int Stats::capacity()// Returns the capacity of the vector.

{
    return numbers.capacity();
};




// Iterate over the numbers in the vector and count the number of odd numbers.
long int Stats::countOdd()
{
    long int oddInt = 0;

    for (long unsigned int numCOdd = 0; numCOdd < numbers.size(); numCOdd++)    // Iterate over the numbers in the vector and count the number of odd numbers.

    {
        if (numbers[numCOdd] % 2 != 0)
        {
            oddInt++;
        }
    }


    return oddInt;
};




unsigned long int calcFib(unsigned long int num)
{
    if (num <= 1) {
        return num;
    }
    return calcFib(num - 1) + calcFib(num - 2);
};



long int Stats::countEven()// Returns the count of integers that are even.

{
    long int evenInt = 0;

    for (long unsigned int numCEven = 0; numCEven < numbers.size(); numCEven++)    // Iterate over the numbers in the vector and count the number of odd numbers.

    {
        if (numbers[numCEven] % 2 == 0)
        {
            evenInt++;
        }
    }


    return evenInt;
};




bool isFib(unsigned long int num2)
{
   long unsigned int fibInt;
    for (unsigned long int numIFib = 1; numIFib <= 50; numIFib++)
    {
        fibInt = calcFib(numIFib);


        if (num2 == fibInt) {

            return true;
        }
        else if (fibInt > num2)


        {
            return false;
        }
    }


    return false;
};




float Stats::avgFib()//returns the average of all the integers that are in the Fibonacci Sequence
{
    float numAvg = 0;
    double total = 0;
    int numC = 0;
    

    for (long unsigned int numFib = 0; numFib < numbers.size(); numFib++)
    {


        if (isFib(numbers[numFib]))
        {


            total += numbers[numFib];
            numC++;


        }
    }

    if (numC < 1) {
        return 0.0;
    }
    numAvg = static_cast<float>(total / numC);



    return numAvg;
};





long int Stats::count()// Returns the count of integers in the vector.

{
    long int numCounter = 0;

    for (long unsigned int numCount = 0; numCount < numbers.size(); numCount++)


    {
        numCounter++;
    }


    return numCounter;
};





long int Stats::countFib()//returns the count of the integers that are in the Fibonacci Sequence (up to the 50th number of the sequence)
{
    long int numC = 0;

    for (long unsigned int numCFib = 0; numCFib < numbers.size(); numCFib++)
    {
        if (isFib(numbers[numCFib]))

        {
            numC++;
        }
    }


    return numC;
};



float Stats::avgEven()//returns the average of all the integers that are even as a floating point value
{
    double total = 0;
    float numAvg = 0;
    int numC = 0;
    

    for (long unsigned int numEven = 0; numEven < numbers.size(); numEven++)
    {
        if (numbers[numEven] % 2 == 0)
        
        {

            total += numbers[numEven];
            numC++;
        }
    }

    if (numC < 1) {

        return 0.0;
    }
    numAvg = static_cast<float>(total / numC);


    return numAvg;
};




float Stats::avgAll()//returns the average of all the integers as a floating point value
{
    int numC = 0;
    double total = 0;
    float numAvg = 0;

    for (long unsigned int numAll = 0; numAll < numbers.size(); numAll++)
    {
        total += numbers[numAll];
        numC++;
    }

    if (numbers.size() < 1) {

        return 0.0;
    }
    numAvg = static_cast<float>(total / numC);


    return numAvg;
};




float Stats::avgOdd()//returns the average of all the integers that are odd as a floating point value
{
    float numAvg = 0;
    double total = 0;
    int numC = 0;
    

    for (long unsigned int numOdd = 0; numOdd < numbers.size(); numOdd++)
    {
        if (numbers[numOdd] % 2 != 0)
        {

            total += numbers[numOdd];

            numC++;
        }
    }

    if (numC < 1) {

        return 0.0;
    }
    numAvg = static_cast<float>(total / numC);

    return numAvg;
};
