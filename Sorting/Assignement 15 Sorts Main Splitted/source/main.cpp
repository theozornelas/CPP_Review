
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <random>
#include <time.h>
#include <sstream>

#include "TestDriver.h"
#include <thread>
#include <gtest/gtest.h>
using namespace std;

int main() {

clock_t start;
clock_t end;

TestDriver sortDriver(SortDriverTypes::MEDIUM, SortDriverTypes::REGULAR);

sortDriver.InitializeList();

start = clock();
std::thread t1(&TestDriver::RunBubbleSort, &sortDriver);

// Wait for the threads to complete
t1.join();

//run sorts in threads


//how to use shared pointers

    
end = clock();


double duration = ( end - start ) / (double) CLOCKS_PER_SEC;


cout << endl << "It took: " << duration << " seconds" << endl;

return 0;

}
