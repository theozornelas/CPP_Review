#include "Functions.h"
#include "Heap.h"

class SortManager
{
public:
    SortManager();
    ~SortManager();

    int InsertionSort(int list[], int length);
    int BubbleSort(int list[], int length);
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
int SortManager::BubbleSort(int list[], int length){}
int SortManager::SelectionSort(int list[], int length){}
int SortManager::MergeSort(int arr[], int l, int r){}
int SortManager::QuickSort(int arr[], int left, int right, PIVOT pivType){}
int SortManager::Radixsort(int arr[], int n){}
int SortManager::HeapSort(int size){}

/*PRIVATE FUNCTIONS*/

int  SortManager::minLocation(int list[], int first, int last){}
void SortManager::swap(int list[], int first, int second){}
void SortManager::merge(int arr[], int l, int m, int r){}