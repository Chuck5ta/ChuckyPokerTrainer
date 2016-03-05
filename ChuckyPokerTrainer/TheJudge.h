#pragma once

#include "CustomTypes.h"


class TheJudge
{
public:
	// contructor
	TheJudge()
	{
	}
	// destructor
	~TheJudge()
	{
	}

	std::string correctAnswer, correctPreFlopPlayAnswer;;

	// PROTOTYPES
	// ==========

	bool TheJudge::checkPlayerAnswer(std::string answer, std::string correctAnswer);

	// PreFlop Table missing line test
	void setTheAnswer(std::string );
	std::string getTheAnswer();
	bool checkAnswer();

	// Preflop Table correct play test
	void setPreFlopCorrectPlayAnswer(std::string ); // PreFlop Correct Play test
	std::string TheJudge::getPreFlopCorrectPlayAnswer();


};