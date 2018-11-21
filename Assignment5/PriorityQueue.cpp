//PriorityQueue.cpp
#include "PriorityQueue.h"
#include <cassert>
#include "managed_array.h"

//Creates an initial blank managed array in the semi-virtual container
pQueue::pQueue() : priorityArray() {}


void pQueue::insert(int x)
{
	//initially insert the integer x into the managed array
	priorityArray.insert(priorityArray.size(), x);
	
	//this for loop steps through the managed array and insures that it is sorted out
	//if the newest integer that is added in is not in order, it proceeds to find its correct spot
	//it will then insert it at that location, and remove the copy of it at the end of the managed 
	//array

	for (int i = 0; i < priorityArray.size(); i++)
	{
		//This will check if x is less than the current read value, and equal to the last
		//element in the managed integer array
		if ((x < priorityArray.read(i)) && (x == priorityArray.read(priorityArray.size() - 1)))
		{
			//swapping process (insert into position, remove copy from the end)
			priorityArray.insert(i, x);
			priorityArray.remove(priorityArray.size()-1);
		}
	}
}

//Takes the value from the managed array and sends it to be printed out
//It then removes the farthest-left position of the managed array, ie the 0 position.
//This then in turn shifts the entire array to the left.
//The integer x is sent back to be printed out.
int pQueue::remove()
{
	assert(!empty());
	int x;
	x = priorityArray.read(0);
	priorityArray.remove(0);
	return x;
}

//Checks to see if the array has no size/length to it
//It then returns true or false based on this knowledge.
bool pQueue::empty() const
{
	return priorityArray.size() == 0;
}
