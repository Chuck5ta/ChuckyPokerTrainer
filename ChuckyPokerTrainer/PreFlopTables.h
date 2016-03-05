#pragma once

#include "PreFlopTable.h"
#include "CustomTypes.h"


class PreFlopTables
{
public:
	// contructor
	PreFlopTables()
	{
		// on creation of the PreFlopTables object, we want to populate the tables, thus making them accessible by this class's methods
		populateTables();
		populateCompleteTables();
	}
	// destructor
	~PreFlopTables()
	{
	}

	// holds the range of hand values
	PreFlopTable * tables;
	// holds the full range of hands, not just the first and last hands of a range
	PreFlopTable * completeTables;	

	// array of tables
	// 2D array
	// Unraised Pot
	// Raised Pot

	// need an array of tables here
//	PreFlopTable * preFlopTables; // = new PreFlopTable(tableLines[][10], numberOfRows);  // an array of PreFlopTable objects

	// PROTOTYPES
	void populateTables();

	struct ResultStruct PreFlopTables::getTestTable(); // PreFlop table test - identify the missing line

	struct ResultStruct PreFlopTables::getPreFlopHandDetails(); // PrefFlop Correct Play test

	void PreFlopTables::populateCompleteTables();

};