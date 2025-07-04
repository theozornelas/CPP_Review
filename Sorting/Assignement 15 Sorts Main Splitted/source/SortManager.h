#include "Functions.h"
#include "Heap.h"

class SortManager
{
public:
    SortManager();
    ~SortManager();

    int InsertionSort(int list[], int length);
    int BubbleSort(vector<int>& list, int length);
    int SelectionSort(int list[], int length);
    int MergeSort(int arr[], int l, int r);
    int QuickSort(int arr[], int left, int right, PIVOT pivType);
    int Radixsort(int arr[], int n);
    int HeapSort(int size);


private:

    int minLocation(int list[], int first, int last);
    void swap(int list[], int first, int second);
    void merge(int arr[], int l, int m, int r);
};

SortManager::SortManager()
{

}
SortManager::~SortManager()
{

}

int SortManager::InsertionSort(int list[], int length)
{
    int counter = 0;
    if (length > 0)
    {
       for (int firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++) 
       {
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
   }
   return counter;
}
int SortManager::BubbleSort(vector<int>& list, int length)
{
    int counter = 0;
    if(length > 0)
    {   
        for (int iteration = 1; iteration < length; iteration++)
        {
            for (int index = 0; index < length - iteration; index++)
            {
                if(list[index] > list[index + 1])
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
    }
    return counter;
}
int SortManager::SelectionSort(int list[], int length)
{
    int counter = 0;
    if(length > 0)
    {
        int loc, minIndex;
        for (loc = 0; loc < length; loc++)
        {
            counter++;
            minIndex = minLocation(list, loc, length - 1);
            swap(list, loc, minIndex);
        }
    }
}
int SortManager::MergeSort(int arr[], int l, int r){}
int SortManager::QuickSort(int arr[], int left, int right, PIVOT pivType){}
int SortManager::Radixsort(int arr[], int n){}
int SortManager::HeapSort(int size){}

/*PRIVATE FUNCTIONS*/

int  SortManager::minLocation(int list[], int first, int last){}
void SortManager::swap(int list[], int first, int second){}
void SortManager::merge(int arr[], int l, int m, int r){}