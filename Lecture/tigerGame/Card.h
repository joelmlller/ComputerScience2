//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME




#ifndef CARD_H_
#define CARD_H_

#include <string>
using namespace std;


class Card {
public:
    enum Color { purple, orange }; //enumerator with default values purple and orange
    //card constructors
    Card() = default;
    Card(int rank, Color color);
    //print card 
    string printCard() const;

    // getters
    int getRank() const;
    int getColor() const;
    int getValue() const;

private:
    int rank{ 0 };
    Color color{ purple }; //defaulted to purple
    int value{ 0 };

};


#endif // CARD_H_