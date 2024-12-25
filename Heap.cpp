/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *CLASS          :  CS 1D
 *SECTION        :  MW:  430p - 7:50p
 *DUE DATE       :  3/02/16
 *****************************************************/


#include "Heap.h"
#include <sstream>

Heap :: Heap()
{
	size = 0;
	root = 1;
	Team aTeam(0," ");
	myTree.push_back(aTeam);

}
Heap :: ~Heap()
{
	myTree.clear();
}

int Heap ::  Size()
{
	return myTree.size()-1;
}

bool Heap ::  IsEmpty()
{
	return myTree.empty();
}

void Heap :: Insert(Team newTeam)
{
	myTree.push_back(newTeam);
	size++;
	BubbleUp(size);

}

Team Heap :: MinElement()
{
	//return myTree[size-1]; //E natural log
	return myTree[root];
}

void Heap :: removeMin()
{
	Team temp = myTree[root];

	//myTree[root] = myTree[size];
	myTree[root] = myTree.at(size);
	//myTree[size-1] = temp;

	myTree.pop_back();
	size--;
	if(size>0)
	{
		BubbleDown(root);
	}

}

Team Heap :: Left(int index)
{
	return myTree[index *2];
}

Team Heap :: Right(int index)
{
	return myTree[(index *2) + 1];
}

void Heap :: BubbleUp(int index)
{
	//swap(index1 , index2/2)//depends if swapping from left or right
	if(index > 0)
	{
		//get the index of the parent
		int parentIndex = ParentIndex(index);

		//if the parent is bigger than the child at the index passed
		if(myTree[parentIndex].getKey() > myTree[index].getKey())
		{
			//swap them
			Swap(parentIndex,index);

			//repeat by recursevely calling the function at the parent
			BubbleUp(parentIndex);
		}
	}
}

void Heap :: BubbleDown(int index)
{
	int leftIndex;
	int rightIndex;
	int minIndex;

	//get index of left child
	leftIndex = LeftPosition(index);

	//get index of right child
	rightIndex = RightPosition(index);

	//if the index is bigger than the size
	if(rightIndex >= size)
	{
		//end the function
		if(leftIndex >= size)
		{
			return;
		}
		else
		{
			//the lowest index is the left index
			minIndex = leftIndex;
		}

	}else{

		//if the left is less than equal to the right
		if(myTree[leftIndex].getKey() <= myTree[rightIndex].getKey())
		{
			//lowest is the left
			minIndex = leftIndex;
		}
		else
		{
			//lowest is the right
			minIndex = rightIndex;
		}
	}

	//if the index is greater than the minimum index
	if(myTree[index].getKey() > myTree[minIndex].getKey())
	{
		//swap objects and use recursion for upper levels
		Swap(minIndex,index);
		BubbleDown(minIndex);
	}

}

void Heap ::  Swap(int a, int b)
{
	Team temp;

	temp = myTree[a];
	myTree[a] = myTree[b];
	myTree[b] = temp;


}

int  Heap :: ParentIndex(int index)
{
	return (index)/2;
}

int  Heap :: LeftPosition(int index)
{
	return index*2;
}

int  Heap :: RightPosition(int index)
{
	return (index*2) + 1;
}

string Heap :: Print()
{   
	vector<Team>::iterator it;
	ostringstream out;


	for(it = myTree.begin(); it != myTree.end(); it++)
	{
		out << it->getKey() << " " << it->getName() << endl;
	}

	return out.str();
}



void HeapSort(Team teamAr[],const int AR_SIZE ,Heap &myHeap)
{

	int index = 0;

	while(index < AR_SIZE && !myHeap.IsEmpty())
	{

		teamAr[index] = myHeap.MinElement();
		myHeap.removeMin();
		index++;
	}

	cout << endl << "PRINTING ARRAY" << endl;

	for(int j = 0; j< AR_SIZE; j++)
	{
		cout << teamAr[j].getKey() << " " << teamAr[j].getName() << endl;

	}


}

