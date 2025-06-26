/*
 * HeapSortTest.cpp
 *
 *  Created on: May 3, 2016
 *      Author: omorenoornelas0
 */

#include "Functions.h"


string HeapSortTest(int size, int &count1, int &count2, int &count3)
{
	ostringstream out;

	Heap myHeap;


	const int SIZE = size;

		int reversedSize = SIZE;
		int orderedAr[SIZE];
		int reversedAr[SIZE];
		int randomAr[SIZE];

	 CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);

   out << InstructionHeader("ARRAYS BEFORE SORT") << endl;
	 out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;

	     int heapOrderedCount = 0;
	     int heapReverseCount = 0;
	     int heapRandomCount = 0;

	     HeapSort(orderedAr,SIZE,myHeap,heapOrderedCount);
	     HeapSort(reversedAr,SIZE,myHeap,heapReverseCount);
	     HeapSort(randomAr,SIZE,myHeap,heapRandomCount);


	     out << InstructionHeader("ARRAYS AFTER SORT") << endl;
	     out << endl << PrintArrays(orderedAr,reversedAr,randomAr,SIZE) << endl;

count1  = heapOrderedCount;
count2 = heapReverseCount;
count3 = heapRandomCount;


return out.str();
}
