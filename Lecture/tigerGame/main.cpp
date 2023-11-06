//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME



#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
#include <numeric>
using namespace std;





int main() {

   //variables
    int roundTotal = 0;
    int roundCounter = 5; //counts the rounds set to 5 for default 
    int numset;
    string localString;

    vector<int> humanScore, computerScore;
    vector<int> humanWins, computerWins;
    
    Deck deck;//creates a deck object
    Card computerCard, humanCard;//





    while (true) {




        ++roundTotal; //counts the rounds 

        computerWins.push_back(0); //pushes back computer wins

        humanWins.push_back(0); // pushes back human wins

        computerScore.push_back(0); // pushes back computer score

        humanScore.push_back(0); // pushes back human score

       
        
        

     auto isNumber = [&localString]()->bool { //error message auto 

            for (auto digit: localString) {

                if (!isdigit(digit)) {

                    cout << "ERROR: Input a valid number: "; //input validation for wrong inputted number

                    return false;
                }
            }
            return true;
        };

       

     auto isValid = [&localString, &roundCounter]()->bool { //auto function to display an error message

            roundCounter = stoi(localString);

            if (roundCounter > 10) {

                cout << "ERROR: Input a valid number between 1 and 10: "; //user did not input valid number
                return false;
            }
            else {
                return true;
            }
        };

       
        deck.shuffle(); //shuffles the deck

        cout << "Welcome to TigerGame!"<<endl;
        cout << "How many cards[1-10]should each player draw from the deck(determines how many rounds will be played): ";

        getline(cin, localString); //gets the amount of cards that should be in deck

        
        while (!isNumber() || !isValid()) { //while loop to get the total rounds if the input is invalid

            getline(cin, localString);
        }

        Player computer{ deck, roundCounter }; // sends data to object
        Player human{ deck, roundCounter };

        cout << "The deck was shuffled and each player has drawn " << roundCounter << " cards."<<endl<<endl;

        for (int i = 0; i < roundCounter; ++i) {
            

            cout << "Round " << i + 1 <<endl<< "-------"<<endl; //round counter

            cout << "The computer plays: " << (computerCard = computer.inhand.dealCard(0)).printCard() << endl; //computers turn

            cout << "Your hand: " << human.inhand.printHand() << endl; //shows the humans hand

            cout << "Which card do you want to play? ";

           
            auto isPositionValid = [&numset, &localString, &human]()->bool { //auto function 

                numset = stoi(localString) - 1; //string to number 

                if (numset > human.inhand.getHandSize()) {

                    cout << "Input a number between 1 and " << human.inhand.getHandSize() << ": ";
                    return false;
                }
                return true;
            };
            

            getline(cin, localString);
           
            
            while (!isNumber() || !isPositionValid()) { //while loop to check size
                getline(cin, localString);
            }
            


            cout << "You played: " << (humanCard = human.inhand.dealCard(numset)).printCard()  <<endl;

            // will look for a winner
            if (computerCard.getValue() > humanCard.getValue()) { //if for computers turn

                cout << "The computer wins this round!"<<endl; 

                int score = computerCard.getValue() + humanCard.getValue();

                // updates the data
                computer.score += score;

                *(computerScore.end() - 1) += score;

                *(computerWins.end() - 1) += 1;
            }
            else if (humanCard.getValue() > computerCard.getValue()) { //if for humans turn


                cout << "You win this round!" <<endl;

                int score = computerCard.getValue() + humanCard.getValue(); //updates the card value

                // updates the data
                human.score += score; 

                *(humanScore.end() - 1) += score;

                *(humanWins.end() - 1) += 1;
            }
            else {
                cout << "Tie!" << endl;
            }



            // print results for current round
            cout <<endl<< "Current scores:"<<endl;
            cout << "Human: " << human.score << endl;
            cout << "Computer: " << computer.score << endl<<endl;
        }

        // print final results
        cout << "FINAL SCORE:"<<endl;
        cout << "Human: " << human.score << endl;
        cout << "Computer: " << computer.score << endl;

        if (human.score == computer.score) {

            cout << "Tie Game!" << endl;
        }

        else {

            cout << endl << ((human.score > computer.score) ? "Human" : "Computer") << " has won!" << endl;
        }


        //message to keep playing
        cout << "Type yes to continue playing: ";

        getline(cin, localString);

        if (localString.find("yes") == string::npos) break;

        cout << endl;
    };




    //prints the  summary
    
    cout << "-----------------------------" << endl;
    cout << "Summary"<< endl;
    cout << "Total Rounds: " << roundTotal << endl << endl;





    // prints the summary of all games
    for (int i = 0; i < roundTotal; i++) {
        cout << "Round " << i + 1 << endl;
        cout << "Computer Score: " << computerScore[i] << endl;
        cout << "Human Score: " << humanScore[i] << endl;
        cout << "Computer Wins: " << computerWins[i] << endl;
        cout << "Human Wins: " << humanWins[i] << endl << endl;
    }



    // prints the  total scores and wins
    cout << "All Rounds" << endl;
    cout << "Total Computer Score: " << accumulate(computerScore.begin(), computerScore.end(), 0) << endl;
    cout << "Total Human Score: " << accumulate(humanScore.begin(), humanScore.end(), 0) << endl;
    cout << "Total Computer Wins: " << accumulate(computerWins.begin(), computerWins.end(), 0) << endl;
    cout << "Total Human Wins: " << accumulate(humanWins.begin(), humanWins.end(), 0) << endl;



    return 0;
    }