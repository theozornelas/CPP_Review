/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *CLASS          :  CS 1C
 *SECTION        :  MW:  530p - 8:50p
 *DUE DATE       :  8/24/15
 *****************************************************/

#include "Functions.h"

#include <fstream>
#include <limits>

/***********************************************************
 *FUNCTION ReadFromFile
 *__________________________________________________________
 * This function reads the numbers from a file and stores them
 * in a array of integers.
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	numAr  	   : array of integers
 * 	ARRAY_SIZE : size of the array
 * 	fileName   : file to be print on
 *
 *POST-CONDITIONS
 *	NONE
 ***********************************************************/
void ReadFromFile(Team TeamsAr[],      //IN - array of integers
		          const int ARRAY_SIZE,//IN - Size of the array
		          string fileName)     //IN - File to get data from
{

	ifstream inFile;  //IN - input file

	int count;		  //CALC - for loop lcv
	int key;
	string name;

	inFile.open(fileName.c_str());

	count = 0;

	while(!inFile.eof())
	{
		getline(inFile, name);
		inFile >> key;
		inFile.ignore(numeric_limits <streamsize> :: max(), '\n');

		Team newM(key,name);

		TeamsAr[count] = newM;
		count ++;
	}

	inFile.close();

}
