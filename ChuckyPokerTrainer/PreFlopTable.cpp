#pragma once

#include "stdafx.h"
#include "PreFlopTable.h"

// table with 1 row
void PreFlopTable::populateTable(std::string tableLine1, std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = potState;
	tableData[2] = seatingPosition;
	tableData[3] = correctPlay;

	numberTableOfRows = 1; // does not include the Pot State or Seating Position
}

// table with 2 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string potState, 
	std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = potState;
	tableData[3] = seatingPosition;
	tableData[4] = correctPlay;

	numberTableOfRows = 2; // does not include the Pot State or Seating Position
}

// table with 3 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = tableLine3;
	tableData[3] = potState;
	tableData[4] = seatingPosition;
	tableData[5] = correctPlay;

	numberTableOfRows = 3; // does not include the Pot State or Seating Position
}

// table with 4 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = tableLine3;
	tableData[3] = tableLine4;
	tableData[4] = potState;
	tableData[5] = seatingPosition;
	tableData[6] = correctPlay;

	numberTableOfRows = 4; // does not include the Pot State or Seating Position
}

// table with 5 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
	std::string tableLine5, std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = tableLine3;
	tableData[3] = tableLine4;
	tableData[4] = tableLine5;
	tableData[5] = potState;
	tableData[6] = seatingPosition;
	tableData[7] = correctPlay;

	numberTableOfRows = 5; // does not include the Pot State or Seating Position
}

// table with 6 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
	std::string tableLine5, std::string tableLine6, 
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = tableLine3;
	tableData[3] = tableLine4;
	tableData[4] = tableLine5;
	tableData[5] = tableLine6;
	tableData[6] = potState;
	tableData[7] = seatingPosition;
	tableData[8] = correctPlay;

	numberTableOfRows = 6; // does not include the Pot State or Seating Position
}

// table with 7 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
	std::string tableLine5, std::string tableLine6, std::string tableLine7,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = tableLine3;
	tableData[3] = tableLine4;
	tableData[4] = tableLine5;
	tableData[5] = tableLine6;
	tableData[6] = tableLine7;
	tableData[7] = potState;
	tableData[8] = seatingPosition;
	tableData[9] = correctPlay;

	numberTableOfRows = 7; // does not include the Pot State or Seating Position
}

// table with 8 rows 
void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
	std::string tableLine5, std::string tableLine6, std::string tableLine7, std::string tableLine8,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	tableData[0] = tableLine1;
	tableData[1] = tableLine2;
	tableData[2] = tableLine3;
	tableData[3] = tableLine4;
	tableData[4] = tableLine5;
	tableData[5] = tableLine6;
	tableData[6] = tableLine7;
	tableData[7] = tableLine8;
	tableData[8] = potState;
	tableData[9] = seatingPosition;
	tableData[10] = correctPlay;

	numberTableOfRows = 8; // does not include the Pot State or Seating Position
}



// this displays the entire table – useful for outputting the whole table as proof of answer
std::string PreFlopTable::retrieveTableRows()
{
	// loop through the rows
	std::string returnString = tableData[0];
	for (int i=1; i<numberTableOfRows; i++)
	{

		returnString += "\r\n" + tableData[i];
	}
	return returnString;
}


// this displays the entire table – useful for outputting the whole table as proof of answer
struct ResultStruct PreFlopTable::retrieveEntirePreFlopTable()
{
	struct ResultStruct result;

	// decide which row not to display
	/* initialize random seed: */
	srand (time(NULL));
	int randNumber = rand() % numberTableOfRows; 

	for (int i=0; i<numberTableOfRows; i++)
	{
		if (randNumber != i)
		{
			result.table += tableData[i] +  "\r\n";
		}
		else
			result.missingLine = tableData[i];
	}
	result.potState = tableData[numberTableOfRows];
	result.seatingPosition = tableData[numberTableOfRows+1];

	return result;

}


// We only want the palyer's Hand, the Seating position, Pot State, and Correct Play
struct ResultStruct PreFlopTable::retrieveCompleteTableTest()
{
	struct ResultStruct result;

	// decide which hand to use
	/* initialize random seed: */
	srand (time(NULL));
	int randNumber = rand() % numberOfHands; 

	result.table = completeTableData[randNumber]; // store the hand
	result.potState = completeTableData[numberOfHands];
	result.seatingPosition = completeTableData[numberOfHands+1];
	result.correctPlay = completeTableData[numberOfHands+2];
	return result;

}

// 6 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;

	completeTableData[7] = potState;
	completeTableData[8] = seatingPosition;
	completeTableData[9] = correctPlay;

	numberOfHands = 6;  // does not include the Pot State or Seating Position
}

// 7 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, 
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;

	completeTableData[7] = potState;
	completeTableData[8] = seatingPosition;
	completeTableData[9] = correctPlay;

	numberOfHands = 7;  // does not include the Pot State or Seating Position
}

// 10 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, std::string hand10,  
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;

	completeTableData[12] = potState;
	completeTableData[13] = seatingPosition;
	completeTableData[14] = correctPlay;

	numberOfHands = 10;  // does not include the Pot State or Seating Position
}

// 12 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, 
	std::string hand10, std::string hand11, std::string hand12,  
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;

	completeTableData[12] = potState;
	completeTableData[13] = seatingPosition;
	completeTableData[14] = correctPlay;

	numberOfHands = 12;  // does not include the Pot State or Seating Position
}

// 15 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, 
	std::string hand10, std::string hand11, std::string hand12, std::string hand13, std::string hand14, std::string hand15,  
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;
	completeTableData[12] = hand13;
	completeTableData[13] = hand14;
	completeTableData[14] = hand15;
	
	completeTableData[15] = potState;
	completeTableData[16] = seatingPosition;
	completeTableData[17] = correctPlay;

	numberOfHands = 15;  // does not include the Pot State or Seating Position
}

// 15 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, std::string hand10, 
	std::string hand11, std::string hand12, std::string hand13, std::string hand14, std::string hand15, std::string hand16,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;
	completeTableData[12] = hand13;
	completeTableData[13] = hand14;
	completeTableData[14] = hand15;
	completeTableData[15] = hand16;
	
	completeTableData[16] = potState;
	completeTableData[17] = seatingPosition;
	completeTableData[18] = correctPlay;

	numberOfHands = 16;  // does not include the Pot State or Seating Position
}

// 21 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, std::string hand10, 
	std::string hand11, std::string hand12, std::string hand13, std::string hand14, std::string hand15,	std::string hand16, 
	std::string hand17, std::string hand18, std::string hand19, std::string hand20, std::string hand21,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;
	completeTableData[12] = hand13;
	completeTableData[13] = hand14;
	completeTableData[14] = hand15;
	completeTableData[15] = hand16;
	completeTableData[16] = hand17;
	completeTableData[17] = hand18;
	completeTableData[18] = hand19;
	completeTableData[19] = hand20;
	completeTableData[20] = hand21;
	
	completeTableData[21] = potState;
	completeTableData[22] = seatingPosition;
	completeTableData[23] = correctPlay;

	numberOfHands = 21;  // does not include the Pot State or Seating Position
}

// 23 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, std::string hand10, 
	std::string hand11, std::string hand12, std::string hand13, std::string hand14, std::string hand15,	std::string hand16, 
	std::string hand17, std::string hand18, std::string hand19, std::string hand20, std::string hand21, std::string hand22, std::string hand23,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;
	completeTableData[12] = hand13;
	completeTableData[13] = hand14;
	completeTableData[14] = hand15;
	completeTableData[15] = hand16;
	completeTableData[16] = hand17;
	completeTableData[17] = hand18;
	completeTableData[18] = hand19;
	completeTableData[19] = hand20;
	completeTableData[20] = hand21;
	completeTableData[21] = hand22;
	completeTableData[22] = hand23;
	
	completeTableData[23] = potState;
	completeTableData[24] = seatingPosition;
	completeTableData[25] = correctPlay;

	numberOfHands = 23;  // does not include the Pot State or Seating Position
}

// 29 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, std::string hand10, 
	std::string hand11, std::string hand12, std::string hand13, std::string hand14, std::string hand15,	std::string hand16, 
	std::string hand17, std::string hand18, std::string hand19, std::string hand20, std::string hand21, std::string hand22, std::string hand23,
	std::string hand24, std::string hand25, std::string hand26, std::string hand27, std::string hand28,	std::string hand29,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;
	completeTableData[12] = hand13;
	completeTableData[13] = hand14;
	completeTableData[14] = hand15;
	completeTableData[15] = hand16;
	completeTableData[16] = hand17;
	completeTableData[17] = hand18;
	completeTableData[18] = hand19;
	completeTableData[19] = hand20;
	completeTableData[20] = hand21;
	completeTableData[21] = hand22;
	completeTableData[22] = hand23;
	completeTableData[23] = hand24;
	completeTableData[24] = hand25;
	completeTableData[25] = hand26;
	completeTableData[26] = hand27;
	completeTableData[27] = hand28;
	completeTableData[28] = hand29;
	
	completeTableData[29] = potState;
	completeTableData[30] = seatingPosition;
	completeTableData[31] = correctPlay;

	numberOfHands = 29;  // does not include the Pot State or Seating Position
}

// 33 hands
void PreFlopTable::populateCompleteTable(std::string hand1, std::string hand2, std::string hand3, std::string hand4, 
	std::string hand5, std::string hand6, std::string hand7, std::string hand8, std::string hand9, std::string hand10, 
	std::string hand11, std::string hand12, std::string hand13, std::string hand14, std::string hand15,	std::string hand16, 
	std::string hand17, std::string hand18, std::string hand19, std::string hand20, std::string hand21, std::string hand22, std::string hand23,
	std::string hand24, std::string hand25, std::string hand26, std::string hand27, std::string hand28,
	std::string hand29, std::string hand30, std::string hand31, std::string hand32, std::string hand33,
	std::string potState, std::string seatingPosition, std::string correctPlay)
{
	completeTableData[0] = hand1;
	completeTableData[1] = hand2;
	completeTableData[2] = hand3;
	completeTableData[3] = hand4;
	completeTableData[4] = hand5;
	completeTableData[5] = hand6;
	completeTableData[6] = hand7;
	completeTableData[7] = hand8;
	completeTableData[8] = hand9;
	completeTableData[9] = hand10;
	completeTableData[10] = hand11;
	completeTableData[11] = hand12;
	completeTableData[12] = hand13;
	completeTableData[13] = hand14;
	completeTableData[14] = hand15;
	completeTableData[15] = hand16;
	completeTableData[16] = hand17;
	completeTableData[17] = hand18;
	completeTableData[18] = hand19;
	completeTableData[19] = hand20;
	completeTableData[20] = hand21;
	completeTableData[21] = hand22;
	completeTableData[22] = hand23;
	completeTableData[23] = hand24;
	completeTableData[24] = hand25;
	completeTableData[25] = hand26;
	completeTableData[26] = hand27;
	completeTableData[27] = hand28;
	completeTableData[28] = hand29;
	completeTableData[29] = hand30;
	completeTableData[30] = hand31;
	completeTableData[31] = hand32;
	completeTableData[32] = hand33;
	
	completeTableData[33] = potState;
	completeTableData[34] = seatingPosition;
	completeTableData[35] = correctPlay;

	numberOfHands = 33;  // does not include the Pot State or Seating Position
}

