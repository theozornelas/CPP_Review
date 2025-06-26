/*
 * MergeSortTest.cpp
 *
 *  Created on: May 3, 2016
 *      Author: omorenoornelas0
 */




#include "Functions.h"

string MergeSortTest(int size, int &count1, int &count2, int &count3)
{
	ostringstream out;

	const int SIZE = size;

	int reversedSize = SIZE;
	    int orderedAr[SIZE];
	    int reversedAr[SIZE];
	    int randomAr[SIZE];

	CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);

	out << InstructionHeader("ARRAYS BEFORE SORT") << endl;
	out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;


	int mergeOrderedCount = 0;
	int mergeReversedCount = 0;
	int mergeRandomCount = 0;

	mergeSort(orderedAr,0,SIZE-1, mergeOrderedCount);
	mergeSort(reversedAr,0,SIZE-1, mergeReversedCount);
	mergeSort(randomAr,0,SIZE-1, mergeRandomCount);

	out << InstructionHeader("ARRAYS AFTER SORT") << endl;
	out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;

	count1 = mergeOrderedCount;
	count2 = mergeOrderedCount;
	count3 = mergeOrderedCount;

	return out.str();
}
