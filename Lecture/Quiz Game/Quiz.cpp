//Joel Miller
//10/19/2022
//CPSC 1020
//QUIZ GAME




#include "Quiz.h"
#include <string>

  int Quiz::score = 0; //calls score from quiz

	std::string Quiz :: getQuestion() { //returns question
		return question;
	}


	std::string Quiz ::  getAnswer() { //returns answer
		return answer;
	}


	int Quiz :: getScore() { //returns score
		return score;
	}




	 void Quiz :: updateScore(int s) {  //updatescore function if the score is greater than 0 score will be score + score if less than zero score = 0
	
		 
		 if (score >= 0) {

			 score += s;
		 }
		 if (score < 0) {

			 score = 0;

		 }

	}
