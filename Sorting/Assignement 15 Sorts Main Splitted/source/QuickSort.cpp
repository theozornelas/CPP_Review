//
// Created by osvaldo on 4/28/2016.
//

#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

void quickSort(int arr[], int left, int right, int &counter, PIVOT pivType)
{
    int i = left;
    int j = right;
    int temp;
    int pivot;

//    switch(pivType)
//    {
//        case FIRST : pivot = left;
//            break;
//        case RAND : pivot = 500/3;
//            break;
//
//        case MID : pivot = arr[(left+right)/2];
//            break;
//    }
//
    //int pivot = arr[(left+right)/2];

    pivot = arr[(left+right)/2];
    /*partitions happenning*/
    while(i<=j)
    {
        counter++;
        while(arr[i] < pivot)
        {
            counter++;
            i++;
        }
        while(arr[j] > pivot)
        {
            counter++;
            j--;
        }
        if(i<=j)
        {
            counter++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }//end of while

    if(left<j)
    {
        counter++;
        quickSort(arr,left,j,counter,pivType);
    }
    if(i<right)
    {
        counter++;
        quickSort(arr,i,right,counter,pivType);
    }


}

