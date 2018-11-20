//PriorityQueue.cpp
#include "PriorityQueue.h"
#include <cassert>
#include "managed_array.h"


pQueue::pQueue() : priorityArray() {}

//
void pQueue::insert(int x)
{
	priorityArray.insert(priorityArray.size(), x);

	for (int i = 0; i < priorityArray.size(); i++)
	{
		if ((x < priorityArray.read(i)) && (x == priorityArray.size() - 1))
		{
			priorityArray.insert(i, x);
			priorityArray.remove(priorityArray.size()-1);
		}
	}
}

//Takes the value from the managed array and sends it to be printed out
int pQueue::remove()
{
	assert(!empty());
	int x;
	x = priorityArray.read(0);
	priorityArray.remove(0);
	return x;
}

//
bool pQueue::empty() const
{

	return priorityArray.size() == 0;
}
