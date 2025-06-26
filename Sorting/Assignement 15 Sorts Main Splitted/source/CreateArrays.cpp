//
// Created by osvaldo on 4/28/2016.
//


#include "Functions.h"

void CreateArrays(int ordered[], int reversed[], int random[], const int SIZE, int reversedSize)
{

    for(int i = 0; i<SIZE; i++)
    {
        ordered[i] = i+1;
        reversed[i] = reversedSize;
        random[i] = rand()%reversedSize +1;
        reversedSize--;
    }


}


