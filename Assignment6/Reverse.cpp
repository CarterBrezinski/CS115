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
#include "managed_arrayQ2.h"		//implementation of necessary header files and resources
#include "process.h"
#include "Stack.h"

using namespace std;

//Reverse print sequence:
//This function will sort the array backwards (9-0)
//The only difference between this function and sort.cpp is the alteration in the remove function
//This alteration causes the remove to occur from the far right side, as opposed to the far left side

/*
int main()
{
	//output statements required for this file
	cout << "Assignment 6 - reverse.cpp output" << endl;
	cout << "This program will represent the Stack selection process" << endl;
	cout << "This program test confirms that the array has an initial capacity of 500" << endl;
	cout << "The sequence will be printed backwards/in reverse order" << endl;
	cout << "Enter the number sequence below: " << endl;
	cout << "(Enter a letter or other character once the intended sequence is entered to exit/continue)" << endl;

	//create semi-virtual container that will be sent into process_sequence to be properly integrated
	Stack Container;
	process_sequence(Container);
	return 0;
}
*/