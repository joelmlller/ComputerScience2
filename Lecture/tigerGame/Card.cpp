//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME





#include "Card.h"
using namespace std;


// constructors 
Card::Card(int rank, Color color) : rank(rank), color(color) {
    switch (color) {
    case purple:
        value = rank;
        break;
    case orange:
        value = 2 * rank;
        break;
    }
}


// getters
int Card::getRank() const
{
    return this->rank;
}

int Card::getColor() const
{
    return this->color;
}

int Card::getValue() const
{
    return this->value;
}



// prints the card data
string Card::printCard() const {
    string cardString;


    switch (color) {
    case purple:
        cardString += "purple";
        break;
    case orange:
        cardString += "orange";
        break;
    }

    return cardString += ":" + std::to_string(rank);
}

