/*
SID: 200391111
NAME: Carter Brezinski
DATE: 11/20/2018
PURPOSE: The purpose of this program is to test out multiple different order management strategies. This program will test out
the stack method, the queue method, and the priority queue method on the data set 147268359. Each method will output the original
sequence in a different order compared to the original way it was implemented.
*/

//The purpose of the main.cpp file is to have a centralized area in which I can initially call my classes

#include "container.h"			//implementation of necessary header files and resources
#include "guarded_array.h"
#include "managed_array.h"
#include "PriorityQueue.h"
#include "process.h"
#include "Queue.h"
#include "Stack.h"

using namespace std;

const int ARRAYSIZE = 9;		//declaration of constant array size for the entirety of the program

int main()
{
	ManagedArray sequence[ARRAYSIZE] = {1,4,7,2,6,8,3,5,9};			//declaration of variables required in the program

	queueMain(sequence, ARRAYSIZE);
	stackMain(sequence, ARRAYSIZE);		//test to ensure that the declarations are compatible 
	pQueueMain(sequence, ARRAYSIZE);

	return 0;
}
