/*
Reverse.cpp
----
SID: 200391111
NAME: Carter Brezinski
DATE: 11/20/2018
PURPOSE: the purpose of this file is to complete the management process stack
this file will call upon the stack file, and execute the sequence processor to print out the 
sequence in reverse order.
*/

#include <iostream>
#include "container.h"
#include "managed_array.h"		//implementation of necessary header files and resources
#include "process.h"
#include "Stack.h"

using namespace std;


//Reversed print sequence
//Sort the array backwards, then print normally
int reverse()
{
	cout << "reverse.cpp output" << endl;
	cout << "This program will represent the Stack selection process" << endl;
	cout << "The sequence will be printed backwards/in reverse order" << endl;
	cout << "Enter the number sequence below: " << endl;
	cout << "(Enter a letter or other character once the intended sequence is entered to exit/continue)" << endl;

	Stack Container;
	process_sequence(Container);
	return 0;
}