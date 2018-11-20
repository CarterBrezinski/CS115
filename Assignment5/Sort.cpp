/*
Sort.cpp
----
SID: 200391111
NAME: Carter Brezinski
DATE: 11/20/2018
PURPOSE: the purpose of this file is to complete the management process priority queue
this file will attempt to output the processed sequence in ascending order
*/

#include <iostream>
#include "container.h"
#include "managed_array.h"		//implementation of necessary header files and resources
#include "process.h"
#include "PriorityQueue.h"

using namespace std;

//Sorted print sequence
//This function will have to first sort the array by value first, then print it normally second

int sort()
{
	cout << "sort.cpp output" << endl;
	cout << "This program will represent the Priority Queue selection process" << endl;
	cout << "The sequence will be printed in ascending order from least to greatest" << endl;
	cout << "Enter the number sequence below: " << endl;
	cout << "(Enter a letter or other character once the intended sequence is entered to exit/continue)" << endl;

	pQueue Container;
	process_sequence(Container);
	return 0;
}
