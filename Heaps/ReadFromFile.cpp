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
void ReadFromFile(vector<Team>& teamV,      //IN - array of integers
		          string fileName)     //IN - File to get data from
{

	ifstream inFile;  //IN - input file
	int key;
	string name;

	inFile.open(fileName.c_str());

	while(!inFile.eof())
	{
		getline(inFile, name);
		inFile >> key;
		inFile.ignore(numeric_limits <streamsize> :: max(), '\n');

		teamV.push_back(Team(key, name));
	}
	inFile.close();
}
