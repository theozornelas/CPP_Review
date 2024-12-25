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
void ReadFromFile(Team TeamsAr[],         //IN - array of integers
		          const int ARRAY_SIZE,//IN - Size of the array
		          string fileName)     //IN - File to get data from
{

	ifstream inFile;  //IN - input file

	int count;		  //CALC - for loop lcv
	int key;
	string name;

	//open file
	inFile.open("input.txt");

	count = 0;

	cout << endl << "Before the While Loop" << endl;

	//load array

	/*
	 * the program has a problem: the infile part is not working. It is not recognicing the file
	 */

	while(inFile && count < ARRAY_SIZE)
	{

		cout << endl << "Inside the While Loop" << endl;


		getline(inFile,name);
		inFile >> key;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "The key is: "<< key << " The name is: " << name << endl;



		Team newM(key,name);

		cout << "The key is: "<< newM.getKey() << " The name is: " << newM.getName() << endl;

		TeamsAr[count] = newM;
		count ++;
	}

	cout << endl << "After the While Loop" << endl;

	inFile.close();

}
