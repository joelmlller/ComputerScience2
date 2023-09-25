//Joel Miller
//10/19/2022
//CPSC 1020
//QUIZ GAME


#include <sstream>
#include "Quiz.h"
#include "printResult.h"

std::string printResult(int questions, int correct, int wrong)
{
	std::stringstream printResult;
	printResult << "Number of questions: " << questions << std::endl; //prints the number of questions asked as a string
	printResult << "Number correct answers: " << correct << std::endl; //prints the number of correct answers as a string
	printResult << "Number wrong answers: " << wrong << std::endl; //prints the number of wrong answers as a string
	printResult << "Final score: " << Quiz::score << std::endl; //prints the final score as string

	return printResult.str(); //returns all of the data
}