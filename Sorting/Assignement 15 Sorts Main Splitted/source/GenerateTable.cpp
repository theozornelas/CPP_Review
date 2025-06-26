//
// Created by osvaldo on 5/2/2016.
//

#include "Functions.h"
string sortName[7] = {"Merge Sort", "Quick Sort", "Insertion Sort", "Bubble Sort",
                      "Selection Sort", "Heap Sort", "Radix Sort"};

string type[3] = {"Already Ordered", "Reverse ordered","Randomly ordered"};

string GenerateTable(int swaps1, int swaps2, SORT sortType)
{

    ostringstream out;
    const int width = 18;

    out << left;
    out << "" << setw(width) << sortName[sortType] << setw(width) << swaps1 << swaps2 << endl;

    return out.str();
}

string GenerateTitle(TYPE arType)
{
    ostringstream out;
    const int width = 18;

    out << left;
    out << endl << type[arType] <<" - number of statements needed to sort" << endl;
    Fill(out,'-',75);

    out << endl << setw(width) << "Algorithm" << setw(width) << "50000" << "100000";


    return out.str();
}

string GenerateQuickSortTitle(TYPE arType)
{
    ostringstream out;
    const int width = 18;


    out << left;
        out << endl << type[arType] <<" - number of statements needed to sort" << endl;
        Fill(out,'-',75);
    out <<endl << setw(width) << "Size(N)" << setw(width)<< "First Pivot"
                << setw(width)<< "Random Pivot"  << "Middle Pivot";

    return out.str();
}

string GenerateQuickSortTable(int n, int firstSwaps, int ranSwaps, int midSwaps)
{

    ostringstream out;
    const int width = 18;

    out << left << setw(width) << n << setw(width)<< firstSwaps
    << setw(width)<< ranSwaps  << midSwaps;

    return out.str();

}
