/*****************************************************
 *AUTHOR         :  Osvaldo Moreno Ornelas
 *****************************************************/

#include "Functions.h"

//outputs a header for the execution that is about to happen
string InstructionHeader(string message)
{
    ostringstream out;
    Fill(out,'*',75);
    out << endl << message<< endl;
    Fill(out,'*',75);
    out << endl;
    return out.str();
}
