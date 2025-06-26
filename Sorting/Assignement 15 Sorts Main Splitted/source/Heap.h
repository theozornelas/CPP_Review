/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *CLASS          :  CS 1D
 *SECTION        :  MW:  430p - 7:50p
 *DUE DATE       :  3/07/16
 *****************************************************/

#ifndef HEAP_H_
#define HEAP_H_

#include <vector>
#include <iterator>
#include <string>

#include "Functions.h"

/**************************************************************************
 * This is the Heap Class. It implements a heap by using a vector of type
 * Team(class). The heap is used to sort a certain number of Items. The
 * Vector accommodates the data [x][R][L][R][LL][LR][RL][RR]....
 * The Heap will store the smallest number at the top.
 *************************************************************************/


class Heap
{
public:

	//constructor
	Heap();

	//destructor
	~Heap();

	//size of the vector heap
	int Size();

	//if the vector is empty
	bool IsEmpty();


	//inserts in to the heap. Bubbles up is necessary.
	void Insert(int newTeam);


	//returns the last element in the list
	int MinElement();


	//removes the last element in the heap
	void removeMin();

	//left child team
	int Left(int index);


	//reight child team
	int Right(int index);

	//index of the parent
	int ParentIndex(int index);


	//bubble up the element if is less than the parent(used in insert)
	void BubbleUp(int index);

	//bubble down the element if is less than the parent(used in delete)
	void BubbleDown(int index);


	//swaps the elements in the heap(used in bubble down and bubble up)
	void Swap(int a, int b);

	//index of the left child
	int LeftPosition(int index);

	//index of the right child
	int RightPosition(int index);


	//prints the heap
	string Print();

private:

	vector<int> myTree;  //container for the heap
	int size;//size/tail of the heap
	int root;//index of the root(always 1)

};


//this function takes the heap and the values, the values in the heap get
//sorted and put back into the array.
void HeapSort(int teamAr[],const int AR_SIZE ,Heap &myHeap, int &counter);

#endif /* HEAP_H_ */
