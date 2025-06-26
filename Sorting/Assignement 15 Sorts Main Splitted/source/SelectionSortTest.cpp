/*
 * SelectionSortTest.cpp
 *
 *  Created on: May 3, 2016
 *      Author: omorenoornelas0
 */


#include "Functions.h"


string SelectionSortTest(int size, int &count1, int &count2, int &count3)
{
	ostringstream out;


	const int SIZE = size;

		int reversedSize = SIZE;
		int orderedAr[SIZE];
		int reversedAr[SIZE];
		int randomAr[SIZE];

	 CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);

	    out << InstructionHeader("ARRAYS BEFORE SORT") << endl;
	    out.flush();
	    out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;

	    int selectionOrderedComp = 0;
	    int selectionReversedComp = 0;
	    int selectionRandomComp = 0;


	    selectionSort(orderedAr, SIZE,selectionOrderedComp);
	    selectionSort(reversedAr, SIZE,selectionReversedComp);
	    selectionSort(randomAr, SIZE,selectionRandomComp);

	    out << InstructionHeader("ARRAYS AFTER SORT") << endl;
	    out.flush();
	    out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;


	    count1 = selectionOrderedComp;
		count2 = selectionReversedComp;
		count3 = selectionRandomComp;


	return out.str();
}
