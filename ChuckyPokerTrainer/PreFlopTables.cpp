#pragma once

#include "stdafx.h"
#include "PreFlopTables.h"


void PreFlopTables::populateTables()
{
	tables = new PreFlopTable[13];
	PreFlopTable * pTable = new PreFlopTable;

	// UNRAISED POTS
	// -------------

	pTable->populateTable("AA-TT", "AKs-ATs", "KQs", "AK-AQ","UNRAISED POT","Early Position", "Raise");
	tables[0] = *pTable;

	pTable->populateTable("99-77", "KJs", "QJs", "AJ", "KQ","UNRAISED POT","Early Position", "Call");
	tables[1] = *pTable;

	pTable->populateTable("AA-99", "AKs-ATs", "KQs-KJs", "AK-AJ", "KQ","UNRAISED POT","Middle Position", "Raise");
	tables[2] = *pTable;

	pTable->populateTable("88-22", "A9s-A7s", "KTs", "QJs-QTs", "JTs", "AT", "KJ","UNRAISED POT","Middle Position", "Call");
	tables[3] = *pTable;

	pTable->populateTable("AA-88", "AKs-A8s", "KQs-KTs", "QJs", "AK-AT", "KQ-KJ","UNRAISED POT","Late Position", "Raise");
	tables[4] = *pTable;

	pTable->populateTable("77-22", "A7s-A2s", "K9s", "QTs-Q9s", "JTs-87s", "J9s-T8s","UNRAISED POT","Late Position", "Call");
	tables[5] = *pTable;

	pTable->populateTable("AA-99", "AKs-ATs", "KQs-KJs", "AK-AJ", "KQ","UNRAISED POT","Small Blind Position", "Raise");
	tables[6] = *pTable;

	pTable->populateTable("88-22", "A9s-A2s", "KTs-K8s", "QJs-Q8s", "JTs-54s", "J9s-T8s", "AT", "KJ", 
		"UNRAISED POT", "Small Blind Position", "Call");
	tables[7] = *pTable;

	pTable->populateTable("AA-99", "AKs-ATs", "KQs-KJs", "AK-AJ", "KQ",	"UNRAISED POT", "Big Blind Position", "Raise");
	tables[8] = *pTable;
	

	// RAISED POTS
	// -----------	

	pTable->populateTable("AA-TT", "AKs-AJs", "KQs", "AK", "RAISED POT","Not Big Blind Position", "Raise");
	tables[9] = *pTable;

	pTable->populateTable("AA-JJ", "AKs-AQs", "AK", "RAISED POT","Big Blind Position", "Raise");
	tables[10] = *pTable;

	pTable->populateTable("TT-22", "AJs-A2s", "KQs-K9s", "QJs-Q9s", "JTs-87s", "J9s-T8s", "AQ",
		"RAISED POT","Big Blind Position", "Call");
	tables[11] = *pTable;

	pTable->populateTable("AA-QQ", "AKs", "RERAISED POT", "Any Position", "Reraise");
	tables[12] = *pTable;

	// housekeeping :-)
	delete pTable;

}

struct ResultStruct PreFlopTables::getTestTable()
{	
	// THIS WILL CREATE A LEAK!!!!  - not deleting pTable!
	PreFlopTable * pTable = tables;

	// randomly choose a table
	/* initialize random seed: */
	srand (time(NULL));
	int randomTable = rand() % TOTAL_NUMBER_OF_PREFLOP_TABLES; //TOTAL_NUMBER_OF_PREFLOP_TABLES; // # between 0 to 3
		
	struct ResultStruct result;

	switch (randomTable)
	{
		case 0:			
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 1:
			pTable++;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 2:
			pTable+=2;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 3:
			pTable+=3;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 4:
			pTable+=4;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 5:
			pTable+=5;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 6:
			pTable+=6;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 7:
			pTable+=7;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 8:
			pTable+=8;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 9:
			pTable+=9;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 10:
			pTable+=10;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 11:
			pTable+=11;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		case 12:
			pTable+=12;
			result = pTable->retrieveEntirePreFlopTable();
			break;
		default:
			pTable+=13;
			result = pTable->retrieveEntirePreFlopTable();
			break;

	}
	/*
	if (randomTable == 0)
		result = pTable->retrieveTestTable2();
	else if (randomTable == 1)
	{
		pTable++;
		result = pTable->retrieveTestTable2();
	}	
	else if (randomTable == 2)
	{
		pTable+=2;
		result = pTable->retrieveTestTable2();
	}
	else
	{
		pTable+=3;
		result = pTable->retrieveTestTable2();
	}
	*/
	// housekeeping
	//delete pTable;

	return result;
}

/*
	This creates a second lot of tables, but this will include all the hands in each range of hands.
 */
void PreFlopTables::populateCompleteTables()
{
	completeTables = new PreFlopTable[13];
	PreFlopTable * pTable = new PreFlopTable;

	// UNRAISED POTS
	// -------------
	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", "TT", 
		"AKs", "AQs", "AJs", "ATs", 
		"KQs", 
		"AK", "AQ",
		"UNRAISED POT","Early Position", "Raise");
	completeTables[0] = *pTable;

	pTable->populateCompleteTable(
		"99", "88", "77",  
		"KJs", "QJs", 
		"AJ", "KQ",
		"UNRAISED POT","Early Position", "Call");
	completeTables[1] = *pTable;

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", "TT", "99", 
		"AKs", "AQs", "AJs", "ATs",
		"KQs", "KJs", 
		"AK", "AJ",
		"KQ",
		"UNRAISED POT","Middle Position", "Raise");
	completeTables[2] = *pTable;

	pTable->populateCompleteTable(
		"88", "77", "66", "55", "44", "33", "22",  
		"A9s", "A8s", "A7s", 
		"KTs",
		"QJs", "QTs",
		"JTs",
		"AT", "KJ",
		"UNRAISED POT","Middle Position", "Call");
	completeTables[3] = *pTable;

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", "TT", "99", "88",
		"AKs", "AQs", "AJs", "ATs", "A9s", "A8s", 
		"KQs", "KJs", "KTs",
		"QJs",
		"AK", "AQ", "AJ", "AT",
		"KQ", "KJ",
		"UNRAISED POT","Late Position", "Raise");
	completeTables[4] = *pTable;

	pTable->populateCompleteTable(
		"77", "66", "55", "44", "33", "22",  
		"A7s", "A6s", "A5s", "A4s", "A3s", "A2s", 
		"K9s",
		"QTs", "Q9s",
		"JTs", "T9s", "98s", "87s",
		"J9s", "T8s",
		"UNRAISED POT","Late Position", "Call");
	completeTables[5] = *pTable;

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", "TT", "99", 
		"AKs", "AQs", "AJs", "ATs",
		"KQs", "KJs", 
		"AK", "AJ",
		"KQ",
		"UNRAISED POT","Small Blind Position", "Raise");
	completeTables[6] = *pTable;

	pTable->populateCompleteTable(
		"88", "77", "66", "55", "44", "33", "22",  
		"A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s", 
		"KTs", "K9s", "K8s",
		"QJs", "QTs", "Q9s", "Q8s",
		"JTs", "T9s", "98s", "87s", "76s", "65s", "54s",
		"J9s", "T8s",
		"AT",
		"KJ",
		"UNRAISED POT","Small Blind Position", "Call");
	completeTables[7] = *pTable;

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", "TT", "99", 
		"AKs", "AQs", "AJs", "ATs",
		"KQs", "KJs", 
		"AK", "AJ",
		"KQ",
		"UNRAISED POT","Big Blind Position", "Raise");
	completeTables[8] = *pTable;

	// RAISED POTS
	// -----------	

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", "TT", 
		"AKs", "AQs", "AJs",
		"KQs",
		"AK",
		"RAISED POT","NOT Big Blind Position", "Reraise");
	completeTables[9] = *pTable;

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", "JJ", 
		"AKs", "AQs", 
		"AK",
		"RAISED POT","Big Blind Position", "Reraise");
	completeTables[10] = *pTable;

	pTable->populateCompleteTable(
		"TT", "99", "88", "77", "66", "55", "44", "33", "22", 
		"AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s", 
		"KQs", "KJs", "KTs", "K9s",
		"QJs", "QTs", "Q9s",
		"JTs", "T9s", "98s", "87s",
		"J9s", "T8s",
		"AQ",
		"RAISED POT","Big Blind Position", "Call");
	completeTables[11] = *pTable;

	pTable->populateCompleteTable(
		"AA", "KK", "QQ", 
		"AKs", "AQs",
		"AK",
		"RERAISED POT","Any Position", "Reraise");
	completeTables[12] = *pTable;


	// housekeeping :-)
	delete pTable;
}


/*
	This is used in the correct play test for Pre Flop.
	This randomly chooses a table to test on.
	It takes a table from the list of tables that holds the complete range of hands 
	 (all possible hands in a given situation)
 */
struct ResultStruct PreFlopTables::getPreFlopHandDetails()
{	
	// THIS WILL CREATE A LEAK!!!!  - not deleting pTable!
	PreFlopTable * pTable = completeTables;

	// randomly choose a table
	/* initialize random seed: */
	srand (time(NULL));
	int randomHand = rand() % TOTAL_NUMBER_OF_PREFLOP_TABLES; //TOTAL_NUMBER_OF_PREFLOP_TABLES; // # between 0 to 3
		
	struct ResultStruct result;

	switch (randomHand)
	{
		case 0:			
			result = pTable->retrieveCompleteTableTest();
			break;
		case 1:
			pTable++;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 2:
			pTable+=2;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 3:
			pTable+=3;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 4:
			pTable+=4;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 5:
			pTable+=5;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 6:
			pTable+=6;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 7:
			pTable+=7;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 8:
			pTable+=8;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 9:
			pTable+=9;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 10:
			pTable+=10;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 11:
			pTable+=11;
			result = pTable->retrieveCompleteTableTest();
			break;
		case 12:
			pTable+=12;
			result = pTable->retrieveCompleteTableTest();
			break;
		default:
			pTable+=13;
			result = pTable->retrieveCompleteTableTest();
			break;

	}


	return result;
}



