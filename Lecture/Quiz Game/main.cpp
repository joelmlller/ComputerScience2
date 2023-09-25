//Joel Miller
//10/19/2022
//CPSC 1020
//QUIZ GAME




#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "Quiz.h"
#include "printResult.h"


int main(int argc, char* argv[]) { //for command line arguments

	std::string corrAnswer;
	std::string CorrQuestion;
	std::string line;

	int numCorrect = 0;
	int numWrong = 0;
	int numScore = 0;
	int numTotal = 0;
	int numQuestions = 0;
	int index;
	std::vector<Quiz> quizVector; //creates a object in a vecot 
	std::ifstream fileIn;


	fileIn.open(argv[1]); 
	if (fileIn.is_open()) { //checks to see if file is open

		while (getline(fileIn, line)) { //while file is open and reading lines
			if (line.substr(0, 2) == "Q:") { //checks second character in string is q
				CorrQuestion = line.substr(3);
				getline(fileIn, line);
				if (line.substr(0, 2) == "A:") { //checks second character in string is a
					corrAnswer = line.substr(3);
					quizVector.push_back(Quiz(CorrQuestion, corrAnswer));
				}
			}
		}
	}
	fileIn.close(); //closes the file

	numQuestions = quizVector.size();

	srand(unsigned(time(0)));

	random_shuffle(quizVector.begin(), quizVector.end()); //shuffles the questions


	while (numQuestions > 0) {

		index = rand() % numQuestions;

		Quiz quiz = quizVector[index]; //creates an object quiz


		std::cout << quiz.getQuestion() << std::endl; //prints the question


		std::cout << "Type in your answer: ";
		getline(std::cin, corrAnswer); //gets the answer


		if (corrAnswer == quiz.getAnswer()) {
			std::cout << "Correct!" << std::endl;
			quizVector[index].updateScore(1); //adds 1 to the score if the answer is correct
			numScore++;
			numCorrect++;
			numTotal++;
		}
		else {
			std::cout << "Wrong! Correct answer: " << quiz.getAnswer() << std::endl;
			quizVector[index].updateScore(-1); //subtracts the scoe by -1 if the answer is wrong
			numScore--;
			numWrong++;
			numTotal++;
		}
		std::cout << "Current score: " << numScore << std::endl << std::endl; //prints the current score

		numQuestions--;

		quizVector.erase(quizVector.begin() + index);
	}


	std::cout << printResult(numTotal, numCorrect, numWrong); //prints the quiz results

	return 0;
}