#pragma once

#include "CustomTypes.h"


class PreFlopTable
{
public:
	// class constructor
//	PreFlopTable(char tableLines[][10], int numberOfRows)
	PreFlopTable()
	{
		// fill table with its lines
//		populateTable(tableLines, numberOfRows);
	}
	// class destructor
	~PreFlopTable()
	{
	}

	int numberTableOfRows; // number of lines in the table
	int numberOfHands; // number of individual hands in a table. E.g. all the hands for Unraised Pot, Early Position, Call

	// data structure to hold the table information - string array ????
//	char ** table; // each row can hold up to 10 characters
	std::string tableData[11]; // allows up to 11 rows	
	
	std::string completeTableData[40]; // allows up to 30 hands

	// Prototypes

	// PreFlop Table (Holds just the start and end hands in each range, just like in the tables chart on tab 1) 
	void PreFlopTable::populateTable(std::string tableLine1, std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, 
		std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, 
		std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
		std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
		std::string tableLine5, std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
		std::string tableLine5, std::string tableLine6,  
		std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
		std::string tableLine5, std::string tableLine6, std::string tableLine7, 
		std::string potState, std::string seatingPosition, std::string correctPlay);
	void PreFlopTable::populateTable(std::string tableLine1, std::string tableLine2, std::string tableLine3, std::string tableLine4, 
		std::string tableLine5, std::string tableLine6, std::string tableLine7, std::string tableLine8, 
		std::string potState, std::string seatingPosition, std::string correctPlay);

	std::string PreFlopTable::retrieveTableRows();
	struct ResultStruct PreFlopTable::retrieveEntirePreFlopTable();
	

	// this retrieves the player's hand, the Pot State, the Seating Position, and the Correct Play
	struct ResultStruct PreFlopTable::retrieveCompleteTableTest();
	

	// PreFlop Complete Tables (holds full range of hands)
	// =======================

	// 9 (6 hands + potState and seatingPosition and correctPlay)
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string);

	// 10 (7 hands + potState and seatingPosition and correctPlay)
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string);

	// 13 (10 hands + potState and seatingPosition and correctPlay)
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string);
	
	// 15 (12 hands + potState and seatingPosition and correctPlay)
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);

	// 18
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string);

	// 19
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string);
	
	// 24
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	
	// 26
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	
	// 32
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string);
	
	// 36
	void PreFlopTable::populateCompleteTable(std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, 
		std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);

};