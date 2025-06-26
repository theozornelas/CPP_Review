/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *CLASS          :  CS 1D
 *SECTION        :  MW:  430p - 7:50p
 *DUE DATE       :  3/02/16
 *****************************************************/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;
#include <sstream>
#include <fstream>
#include <sstream>
#include "Heap.h"

//string sortName[7] = {"Merge Sort", "Quick Sort", "Insertion Sort", "Bubble Sort",
//"Selection Sort", "Heap Sort", "Radix Sort"};

enum SORT
{
    MERGE,
    QUICK,
    INSERTION,
    BUBBLE,
    SELECTION,
    HEAP,
    RADIX
};

enum TYPE
{
    ORDERED,
    REVERSED,
    RANDOM
};

enum PIVOT
{
    FIRST,
    RAND,
    MID
};

//string type[3] = {"ALready Ordered", "Reverse ordered","Randomly ordered"};

void CreateArrays(int ordered[], int reversed[], int random[], const int SIZE, int reversedSize);

void insertionSort(int list[], int length, int &counter);

void bubbleSort(int list[], int length, int &counter);

int minLocation(int list[], int first, int last, int &counter);

void swap(int list[], int first, int second, int &counter);

void selectionSort(int list[], int length, int &counter);

void merge(int arr[], int l, int m, int r, int &counter);

void mergeSort(int arr[], int l, int r, int &counter);

void quickSort(int arr[], int left, int right, int &counter, PIVOT pivType);

string PrintArrays(int ordered[], int rev[], int randm[], const int SIZE);

void radixsort(int arr[], int n);

string GenerateTable(int swaps1, int swaps2, SORT sortType);

string GenerateTitle(TYPE arType);

string GenerateQuickSortTitle(TYPE arType);

string GenerateQuickSortTable(int n, int firstSwaps, int ranSwaps, int midSwaps);

string InstructionHeader(string message);


void QuickSortTest();

string MergeSortTest(int size, int &count1, int &count2, int &count3);

string InsertionSortTest(int size, int &count1, int &count2, int &count3);

string SelectionSortTest(int size, int &count1, int &count2, int &count3);

string BubbleSortSortTest(int size, int &count1, int &count2, int &count3);

string HeapSortTest(int size, int &count1, int &count2, int &count3);

void PrintHeader(ostream& outputF, // OUT - class header to file
                 string asName,    // IN  - Assignment name
                 string programers,// IN  - Programmer(s) name
                 char asType,      // IN  - Type of project
        //      (lab or assignment)
                 int asNum);       // IN  - Project number

void Fill(ostream& outputT, //OUT - output stream
          char fillChar,    //IN  - character to fill the line with
          int width);        //IN  - width of the line to be filled out

#endif /* FUNCTIONS_H_ */
