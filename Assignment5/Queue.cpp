//Queue.cpp
#include "Queue.h"
#include <cassert>
#include "managed_array.h"

//Creates an initial blank managed array in the semi-virtual container
Queue::Queue() : queueArray() {}

//This function takes the integer entered and places it in the farthest right position of the managed array
void Queue::insert(int x)
{
	queueArray.insert(queueArray.size(), x);
}

//Takes the value from the managed array and sends it to be printed out
//It then removes the farthest-left position of the managed array, ie the 0 position.
//This then in turn shifts the entire array to the left.
//The integer x is sent back to be printed out.
int Queue::remove()
{
	assert(!empty());
	int x;
	x = queueArray.read(0);
	queueArray.remove(0);
	return x;
}

//Checks to see if the array has no size/length to it
//It then returns true or false based on this knowledge.
bool Queue::empty() const
{
	return queueArray.size() == 0;
}
