/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *****************************************************/

#ifndef HEAP_H_
#define HEAP_H_

#include "Team.h"
#include <vector>
#include <iterator>

/**************************************************************************
 * This is the Heap Class. It implements a heap by using a vector of type
 * Team(class). The heap is used to sort a certain number of Items. The
 * Vector accommodates the data [x][R][L][R][LL][LR][RL][RR]....
 * The Heap will store the smallest number at the top.
 *************************************************************************/


class Heap
{
public:
	Heap();

	~Heap();

	int Size();

	bool IsEmpty();

	void Insert(Team newTeam);

	Team MinElement();

	void removeMin();

	Team Left(int index);

	Team Right(int index);

	int ParentIndex(int index);

	void BubbleUp(int index);

	void BubbleDown(int index);

	void Swap(int a, int b);

	int LeftPosition(int index);

	int RightPosition(int index);

	string Print();
	
private:

	vector<Team> myTree;
	int size;
	int root;

};

void HeapSort(Team teamAr[],const int AR_SIZE ,Heap &myHeap);

#endif /* HEAP_H_ */
