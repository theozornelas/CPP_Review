#include "SortManager.h"

namespace SortDriverTypes
{
    enum LIST_TYPE
    {
        REGULAR,
        REVERSED,
        RANDOM
    };
    
    constexpr unsigned int SMALL  = 100;
    constexpr unsigned int MEDIUM = 1000;
    constexpr unsigned int LARGE  = 10000;
}

class TestDriver
{
    public:
    
    TestDriver(unsigned int listSize, SortDriverTypes::LIST_TYPE listType)
    {
        testList.reserve(listSize);
        testListType = listType;
    }
    ~TestDriver(){}

    int RunBubbleSort();
    void InitializeList()
    {
        switch(testListType)
        {
            case SortDriverTypes::REGULAR:
                for(int i = 0; i < testList.capacity(); ++i)
                {
                    testList[i] = i+1;
                }
            break;
            default:
                cout << "No Valid size type selected" << endl;
        }
    }

    private:
    
    void print(int swaps)
    {
        cout << "List contents: " << endl;
        for(int i = 0; i<testList.capacity(); ++i)
        {
            cout << testList[i];
            if(i % 5 == 0)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        cout << "Bubble sort: " << swaps << " swaps." << endl;
    }
    vector<int> testList;
    SortManager sortAlg;
    SortDriverTypes::LIST_TYPE testListType;
};


int TestDriver::RunBubbleSort()
{ 
    unsigned int swaps = 0;
    if(testList.capacity() > 0)
    {
        swaps = sortAlg.BubbleSort(testList, testList.capacity());
        print(swaps);
    }

    return swaps;
}