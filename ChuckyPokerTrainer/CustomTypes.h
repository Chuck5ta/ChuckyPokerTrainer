#pragma once

#include <Windows.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "stdafx.h"
#include <string>

#define TOTAL_NUMBER_OF_PREFLOP_TABLES 13;
	
// This is used for acquiring a PreFlop table in 2 parts (the table + the missing line)
// table will be displayed (does not include missing line)
// missing line will be passed to TheJudge class, ready to be compared with the answer given by the user of the test
struct ResultStruct {
  std::string table; // this is also use to hold a single hand - Preflop correct play test
  std::string missingLine;
  std::string potState;
  std::string seatingPosition;
  std::string correctPlay;
};




