//Queue.cpp
#include "Queue.h"
#include <cassert>
#include "managed_array.h"


Queue::Queue() : queueArray() {}

//
void Queue::insert(int x)
{
	queueArray.insert(queueArray.size(), x);
}

//Takes the value from the managed array and sends it to be printed out
int Queue::remove()
{
	assert(!empty());
	int x;
	x = queueArray.read(0);
	queueArray.remove(0);
	return x;
}

//
bool Queue::empty() const
{

	return queueArray.size() == 0;
}
