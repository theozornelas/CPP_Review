//
// Created by osvaldo on 4/29/2016.
//

#include "Functions.h"

string PrintArrays(int ordered[], int rev[], int randm[], const int SIZE)
{

    ostringstream out;
    out << endl << InstructionHeader("ORDERED ARRAY") << endl;
    for(int i = 0; i<SIZE; i++)
    {
        if(i<5)
        {
            out << ordered[i] << endl;
        }
        if(i>SIZE-7)
        {
            out << ordered[i] << endl;
        }

    }

    out << endl << InstructionHeader("REVERSED ARRAY") << endl;

    for(int j = 0; j<SIZE; j++)
    {
        if(j<5)
        {
            out << rev[j] << endl;
        }
        if(j>SIZE-7)
        {
            out << rev[j] << endl;
        }


    }

    out << endl << InstructionHeader("RANDOM ARRAY") << endl;

    for(int k = 0; k<SIZE; k++)
    {
        if(k<5)
        {
            out << randm[k] << endl;
        }
        if(k>SIZE-7)
        {
            out << randm[k] << endl;
        }
    }
return out.str();
}
