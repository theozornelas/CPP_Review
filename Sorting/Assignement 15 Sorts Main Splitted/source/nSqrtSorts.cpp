//
// Created by osvaldo on 4/28/2016.
//

#include "Functions.h"

void insertionSort(int list[], int length, int &counter)
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
         firstOutOfOrder++) {
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {
            counter++;
            int temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;
            do {
                list[location] = list[location - 1];
                location--;
                counter++;
            }
            while (location > 0 && list[location - 1] > temp);
            list[location] = temp;
        }
    counter++;
    }
} //end insertionSort


void bubbleSort(int list[], int length, int &counter)
{
    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration;
             index++)
        {
            if (list[index] > list[index + 1])
            {
                int temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
                counter++;
            }

            counter++;
        }

        counter++;
    }
} //end bubbleSort

int minLocation(int list[], int first, int last, int &counter)
{
    int loc, minIndex;
    minIndex = first;
    for (loc = first + 1; loc <= last; loc++){
        if (list[loc] < list[minIndex])
        {
            minIndex = loc;
            counter++;
        }
        counter++;
    }

    return minIndex;
} //end minLocation
//Given the locations in the list of the elements to be swapped, the following C++
//function, swap, swaps those elements:
void swap(int list[], int first, int second, int &counter)
{
    int temp;
    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
    counter++;
} //end swap
//We can now complete the definition of the function selectionSort:
void selectionSort(int list[], int length, int &counter)
{
    int loc, minIndex;
    for (loc = 0; loc < length; loc++)
    {
        counter++;
        minIndex = minLocation(list, loc, length - 1, counter);
        swap(list, loc, minIndex, counter);
    }
} //end selectionSort

