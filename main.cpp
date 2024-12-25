/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *****************************************************/

#include "Heap.h"
#include "Functions.h"
#include <fstream>

int main()
{
	string instructions = "This program \n\n"
						  "The array is sorted as the item as passed in. The data is not in a specific\n"
						  "order in the moment of insertion\n";


	 cout << InstructionHeader(instructions);

	 Heap myHeap;
	 const int AR_SIZE = 10;
	 Team teamAr[AR_SIZE];
     Team testAr[AR_SIZE];

	/*
    Team Angels(55,"Angels");
	teamAr[0] = Angels;

	Team Dodgers(22,"Dodgers");
	teamAr[1] = Dodgers;

	Team Tigers(12,"Tigers");
	teamAr[2] = Tigers;

	Team RdSocks(16, "Red Socks");
	teamAr[3] = RdSocks;

	Team Yankees(123,"Yankees");
	teamAr[4] = Yankees;

	Team Padres(44,"Padres");
	teamAr[5] = Padres;

	Team Royals(69,"Royals");
	teamAr[6] = Royals;

	Team Giants(24, "Giants");
	teamAr[7]=  Giants;

	Team WhiteS(73,"White Socks");
	teamAr[8] = WhiteS;

	Team Pirates(42,"Pirates");
	teamAr[9] = Pirates;
    */

	string file = "/Users/osvaldomorenoornelas/Documents/Personal_Projects/CPP_Review/input.txt";

	ReadFromFile(teamAr,AR_SIZE,file);

	cout << endl << "Inserting Values into the heap" << endl;
	 for(int i =0; i<AR_SIZE; i++)
	 {
		 myHeap.Insert(teamAr[i]);
		cout << teamAr[i].getKey() << " " << teamAr[i].getName()<< endl;
	 }


	cout << endl << "Printing Heap after Insert" << endl;
	cout << endl << myHeap.Print() << endl;


	Team newTeamAr[AR_SIZE];

    HeapSort(newTeamAr,AR_SIZE,myHeap);


	cout << endl << "Printing Array after Coping from heap" << endl;

	for(int j = 0; j< AR_SIZE; j++)
	{
		cout << newTeamAr[j].getKey() << " " << newTeamAr[j].getName() << endl;
	}


	cout << endl << "Printing Heap after printing the array" << endl;
	cout << endl << myHeap.Print() << endl;

	cout << "end of program" << endl;

    return 0;
}
