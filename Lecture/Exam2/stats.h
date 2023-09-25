//Joel Miller
//PROJECT 3
//12/07/2022
//read in a text file of integers, storing them in a vector, providing various statistical results from these integers. 

#ifndef STATS_H_
#define STATS_H_

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


class Stats
{
private:
    // A vector of integers to store the numbers from the file.
    vector<long int> numbers;
    string fileIn;    // The name of the file from which numbers are loaded.

public:
    Stats() // Constructs an empty vector with a capacity of 100 and an empty filename.
    {
        numbers.reserve(100);
        fileIn = "";
    }

    Stats(string fileName)// Constructs a vector and loads the numbers from the file with the given name.
    {
        fileIn = fileName;
        fstream inFile;    // Open the file and load the numbers into the vector.

        long int tempInt;

        inFile.open(fileName);

        if (!inFile)
        {
            cout << "ERROR: File did not open!"<<endl; //ERROR MESSAGE IF FILE COULD NOT BE ACCESSED
        }

        while (inFile >> tempInt)
        {
            numbers.push_back(tempInt);
        }

        inFile.close();
    }


    //methods
    int capacity();
    long int count();
    long int countEven();
    long int countOdd();
    long int countFib();
    float avgAll();
    float avgEven();
    float avgOdd();
    float avgFib();
};

#endif //STATS_H_