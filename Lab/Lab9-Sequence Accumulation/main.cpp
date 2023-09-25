//Joel Miller, Connor, James
//Project 9
//12/02/2022


#include "accum.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<long unsigned int> numbers;
    vector<string> strings;
    string stringInput;
    int num;

    cout << "Enter four numbers: ";
    /// 1ST NUMBER
    cin >> num;
    numbers.push_back(num);

    /// 2ND NUMBER
    cin >> num;
    numbers.push_back(num);

    /// 3RD NUMBER
    cin >> num;
    numbers.push_back(num);

    /// 4TH NUMBER
    cin >> num;
    numbers.push_back(num);

    cout << endl;

    cout << "The sum of the numbers is " << accum(numbers) << endl
        << endl; // calls the accum vector which sums all of the

    cout << "Enter four strings: ";
    // 1ST STRING
    cin >> stringInput;
    strings.push_back(stringInput);

    // 2ND STRING
    cin >> stringInput;
    strings.push_back(stringInput);

    // 3RD STRING
    cin >> stringInput;
    strings.push_back(stringInput);

    // 4TH STRING
    cin >> stringInput;
    strings.push_back(stringInput);

    cout << endl;

    accum(strings);

    stringstream ss(stringInput);

    while (ss.good()) {
        string substr;
        getline(ss, substr);
        strings.push_back(substr);
    }
    cout << "The sum of the strings is ";
    for (long unsigned int i = 0; i < strings.size() - 1; i++) {
        long unsigned int x;
        x = strings.size();
        x = x - 2;
        //cout << x;
        if (i == x) {
            cout << strings[i] << endl;
        }
        else
        {
            cout << strings[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}