/*
 * BubbleSortTest.cpp
 *
 *  Created on: May 3, 2016
 *      Author: omorenoornelas0
 */


#include "Functions.h"


string BubbleSortSortTest(int size, int &count1, int &count2, int &count3)
{
	ostringstream out;


	const int SIZE = size;

		int reversedSize = SIZE;
		int orderedAr[SIZE];
		int reversedAr[SIZE];
		int randomAr[SIZE];

	 CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);


	 out << InstructionHeader("ARRAYS BEFORE SORT") << endl;
	 out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE)<< endl;

	 int bubbleOrderedComp = 0;
	 int bubbleReversedComp = 0;
	 int bubbleRandomComp = 0;

	 bubbleSort(orderedAr, SIZE,bubbleOrderedComp);
	 bubbleSort(reversedAr, SIZE,bubbleReversedComp);
	 bubbleSort(randomAr, SIZE,bubbleRandomComp);

	 out << InstructionHeader("ARRAYS AFTER SORT") << endl;
	 out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE)<< endl;

	 count1 = bubbleOrderedComp;
	 count2 = bubbleOrderedComp;
	 count3 = bubbleOrderedComp;

	 return out.str();
}
