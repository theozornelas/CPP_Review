/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *****************************************************/

#include "Heap.h"
#include "Functions.h"
#include <fstream>
#include <vector>

int main()
{
	string instructions = "The array is sorted as the item as passed in. The data is not in a specific\n"
						  "order in the moment of insertion\n";


	 cout << InstructionHeader(instructions);

	 Heap myHeap;
     constexpr unsigned int AR_SIZE = 10;
     vector<Team> teamList;
     

	string file = "/Users/osvaldomorenoornelas/Documents/Personal_Projects/CPP_Review/input.txt";

	ReadFromFile(teamList, file);
    unsigned int size = teamList.size();

	cout << endl << "Inserting Values into the heap" << endl;
	 for(int i =0; i<size; i++)
	 {
		myHeap.Insert(teamList[i]);
		cout << teamList[i].getKey() << " " << teamList[i].getName()<< endl;
	 }


	cout << endl << "Printing Heap after Insert" << endl;
	cout << endl << myHeap.Print() << endl;

	Team newTeamAr[AR_SIZE];

    HeapSort(newTeamAr, AR_SIZE, myHeap);

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
