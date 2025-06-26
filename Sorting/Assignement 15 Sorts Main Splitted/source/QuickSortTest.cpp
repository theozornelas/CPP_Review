/*
 * QuickSortTest.cpp
 *
 *  Created on: May 3, 2016
 *      Author: omorenoornelas0
 */


#include "Functions.h"

void QuickSortTest()
{

	ostringstream out;

	const int SIZE = 5000;


	int reversedSize;

	int orderedAr[SIZE];
	int reversedAr[SIZE];
	int randomAr[SIZE];


//yngwie J. Malmsteen
	int quickFirstCounter1 = 0;
	int quickRandomCounter1 = 0;
	int midCounter1 = 0;

	reversedSize = SIZE;
	CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);
	out << GenerateQuickSortTitle(ORDERED) << endl;

	    quickSort(orderedAr,0,SIZE-1,quickFirstCounter1, FIRST);

	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);

	    quickSort(orderedAr,0,SIZE-1,quickRandomCounter1, RAND);

	   CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);
	   quickSort(orderedAr,0,SIZE-1,midCounter1, MID);

	  out << GenerateQuickSortTable(SIZE,quickFirstCounter1,quickRandomCounter1,midCounter1) << endl;

	//***********************************************end of Ordered****************************


	    quickFirstCounter1 = 0;
	    quickRandomCounter1 = 0;
	    midCounter1 = 0;

	    out << GenerateQuickSortTitle(REVERSED) << endl;
	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);

	    quickSort(reversedAr,0,SIZE-1,quickFirstCounter1, FIRST);

	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);
	    quickSort(reversedAr,0,SIZE-1,quickRandomCounter1, RAND);

	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);
	    quickSort(reversedAr,0,SIZE-1,midCounter1, MID);

	    out << GenerateQuickSortTable(SIZE,quickFirstCounter1,quickRandomCounter1,midCounter1) << endl;


	    //**************************************end of reversed********************************************************

	    quickFirstCounter1 = 0;
		quickRandomCounter1 = 0;
		midCounter1 = 0;

	    out << GenerateQuickSortTitle(RANDOM) << endl;
	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);

	    quickSort(randomAr,0,SIZE-1,quickFirstCounter1, FIRST);

	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);
	    quickSort(randomAr,0,SIZE-1,quickRandomCounter1, RAND);

	    CreateArrays(orderedAr,reversedAr,randomAr,SIZE,reversedSize);
	    quickSort(randomAr,0,SIZE-1,midCounter1, MID);

	    out << GenerateQuickSortTable(SIZE,quickFirstCounter1,quickRandomCounter1,midCounter1) << endl;


	    ///*****************************end of quicksort part 3 ****************************************************************

	    cout << out.str();

}
