#pragma once

#include "stdafx.h"
#include "TheJudge.h"



/*
	This is used in the PreFlop Missing Line from Table test
 */
void TheJudge::setTheAnswer(std::string theAnswer)
{
	correctAnswer = theAnswer;
}

/*
	This is used in the PreFlop Correct Play test
 */
void TheJudge::setPreFlopCorrectPlayAnswer(std::string theAnswer)
{
	correctPreFlopPlayAnswer = theAnswer;
}

std::string TheJudge::getTheAnswer()
{
	return correctAnswer;
}	

std::string TheJudge::getPreFlopCorrectPlayAnswer()
{
	return correctPreFlopPlayAnswer;
}

bool TheJudge::checkPlayerAnswer(std::string answer, std::string correctAnswer)
{
	// compare the user's answer with 
	if (answer == correctAnswer)
		return true;
	else
		return false;
}