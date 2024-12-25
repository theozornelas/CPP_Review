/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *CLASS          :  CS 1D
 *SECTION        :  MW:  430p - 7:50p
 *DUE DATE       :  3/02/16
 *****************************************************/

#include "Heap.h"
#include "Functions.h"
#include <fstream>

int main()
{

	PrintHeader(cout, "Priority Queue", "Osvaldo Moreno Ornelas", 'A', 6);

	string instructions = "This program \n\n"
						  "The array is sorted as the item as passed in. The data is not in a specific\n"
						  "order in the moment of insertion\n";


	 cout << InstructionHeader(instructions);

	 Heap myHeap;
	 const int AR_SIZE = 10;
	 Team teamAr[AR_SIZE];

	 Team Angels(55,"Angels");
	teamAr[0] = Angels;
////	 myHeap.Insert(Angels);
////
	 Team Dodgers(22,"Dodgers");
	teamAr[1] = Dodgers;
////	 myHeap.Insert(Dodgers);
////
	 Team Tigers(12,"Tigers");
	teamAr[2] = Tigers;
////	 myHeap.Insert(Tigers);
////
	 Team RdSocks(16, "Red Socks");
	teamAr[3] = RdSocks;
////	 myHeap.Insert(RdSocks);
////
	 Team Yankees(123,"Yankees");
	teamAr[4] = Yankees;
////	 myHeap.Insert(Yankees);
////
	 Team Padres(44,"Padres");
	teamAr[5] = Padres;
////	 myHeap.Insert(Padres);
////
	 Team Royals(69,"Royals");
	teamAr[6] = Royals;
////	 myHeap.Insert(Royals);
////
	 Team Giants(24, "Giants");
	teamAr[7]=  Giants;
////	 myHeap.Insert(Giants);
////
	 Team WhiteS(73,"White Socks");
	teamAr[8] = WhiteS;
////	 myHeap.Insert(WhiteS);
////
	 Team Pirates(42,"Pirates");
	teamAr[9] = Pirates;
//	 myHeap.Insert(Pirates);

	 //string file = "input.txt";

	 //ReadFromFile(teamAr,AR_SIZE,file);


	cout << endl << "Inserting Values into the heap" << endl;
	 for(int i =0; i<AR_SIZE; i++)
	 {
		 myHeap.Insert(teamAr[i]);
		cout << teamAr[i].getKey() << " " << teamAr[i].getName()<< endl;
	 }


	cout << endl << "Printing Heap after Insert" << endl;
	 cout << endl << myHeap.Print() << endl;

	//myHeap.removeMin();

	Team newTeamAr[AR_SIZE];

HeapSort(newTeamAr,AR_SIZE,myHeap);

//	int index = 0;
//
//	while(index < AR_SIZE && !myHeap.IsEmpty())
//	{
//
//		newTeamAr[index] = myHeap.MinElement();
//		myHeap.removeMin();
//		index++;
//	}

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
