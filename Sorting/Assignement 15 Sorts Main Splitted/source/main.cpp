
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

//Seed engine
std::mt19937 generator(std::random_device{}());
//Distribution function
std::uniform_int_distribution<> distrib(1, SortDriverTypes::MEDIUM);

TestDriver sortDriver(SortDriverTypes::MEDIUM, SortDriverTypes::REGULAR);

sortDriver.InitializeList();

start = clock();
std::thread t1(&TestDriver::RunBubbleSort, &sortDriver);
//sortDriver.RunBubbleSort();

// Wait for the threads to complete
t1.join();

/*for (int n = 0; n < MEDIUM; ++n)
{std::cout << distrib(generator) << endl;}*/

//run sorts in threads


//how to use shared pointers

    
end = clock();


double duration = ( end - start ) / (double) CLOCKS_PER_SEC;


cout << endl << "It took: " << duration << " seconds" << endl;

return 0;

}
