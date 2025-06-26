
#include "Heap.h"

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <sstream>

using namespace std;

int main() {

    ofstream oFile;
    oFile.open("results.txt");

    clock_t start;
    clock_t end;

    srand (time(NULL));

    
end = clock();


double duration = ( end - start ) / (double) CLOCKS_PER_SEC;


cout << endl << "It took: " << duration << " seconds" << endl;


oFile.close();
return 0;

}
