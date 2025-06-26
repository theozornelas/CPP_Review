/*
 * InsertionSortTest.cpp
 *
 *  Created on: May 3, 2016
 *      Author: omorenoornelas0
 */

#include "Functions.h"


string InsertionSortTest(int size, int &count1, int &count2, int &count3)
{

	ostringstream out;

	const int SIZE = size;

	int reversedSize = SIZE;
	int orderedAr[SIZE];
	int reversedAr[SIZE];
	int randomAr[SIZE];

	int part2OrderedComp = 0;
	int part2ReverseComp = 0;
	int part2RandomComp = 0;

	CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);


	out << InstructionHeader("ARRAYS BEFORE SORT") << endl;
	out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;

	insertionSort(orderedAr, SIZE,part2OrderedComp);
	insertionSort(reversedAr, SIZE,part2ReverseComp);
	insertionSort(randomAr, SIZE,part2RandomComp);

	out << InstructionHeader("ARRAYS AFTER SORT") << endl;
	out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;


	count1 = part2OrderedComp;
	count2 = part2ReverseComp;
	count3 = part2RandomComp;

	return out.str();

}


