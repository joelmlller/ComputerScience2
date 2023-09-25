//Joel Miller
//10/19/2022
//CPSC 1020
//QUIZ GAME

#include <string>


#ifndef QUIZ_H
#define QUIZ_H

class Quiz { //declaration of class quiz
private:
	static int score;
	std::string question{""};
	std::string answer{""};
	

public:
	 
	Quiz() = default; //default quiz construcot 

	Quiz(std::string q, std::string a) : question{ q }, answer{ a } {}; //constructor with inline initilization

	//getter functions
	std::string getQuestion();

	std::string getAnswer();


	static int getScore(); //static function to be called from outside class

	void static updateScore(int s);

	friend std::string printResult(int questions, int correct, int wrong);
};




#endif
