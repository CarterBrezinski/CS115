/*
nop.cpp
----
SID: 200391111
NAME: Carter Brezinski
DATE: 11/20/2018
PURPOSE: the purpose of this file is to complete the management process queue
this file will output the processed sequence in the original entered order
*/

#include <iostream>
#include "container.h"
#include "managed_arrayQ2.h"		//implementation of necessary header files and resources
#include "process.h"
#include "Queue.h"

using namespace std;


//Basic print sequence
//Basic for loop print that just steps through from 0-9 and prints the values with a blank space in between
//The remove statement will occur at point 0 in the managed array
//This will cause the array to print and remove from the left to the right of the managed array sequence entered 


int main()
{
	//output statements required to identify this program
	cout << "Assignment 6 - nop.cpp output" << endl;
	cout << "This program will represent the Queue selection process" << endl;
	cout << "This program test confirms that the array has an initial capacity of 500" << endl;
	cout << "The sequence will be printed in the order it is initially entered in" << endl;
	cout << "Enter the number sequence below: " << endl;
	cout << "(Enter a letter or character once the intended sequence is entered to exit/continue)" << endl; 

	//create semi-virtual container that will be sent into process_sequence to be properly integrated
	Queue Container;
	process_sequence(Container);
	return 0;
}
