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
                for(int i = 0; i < testList.size(); ++i)
                {

                }
            break;
        }
    }

    private:

    vector<int> testList;
    SortManager sortAlg;
    SortDriverTypes::LIST_TYPE   testListType;
};


int TestDriver::RunBubbleSort()
{ 
    /*if(testList.size() > 0)
    {}*/
    int testArr[SortDriverTypes::MEDIUM];
    for(int i = 0; i < SortDriverTypes::MEDIUM; ++i)
    {
        testArr[i] = i+1;
    }
    sortAlg.BubbleSort(testArr, SortDriverTypes::MEDIUM);
    for (int n = 0; n < 10; ++n) //make print function (to console and file)
    {cout << testArr[n] << endl;}
    
}