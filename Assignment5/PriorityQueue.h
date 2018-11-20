//PriorityQueue.h
#ifndef __PRIORITY_QUEUE_H__
#define __PRIORITY_QUEUE_H__
#include "container.h"			//implementation of necessary header files and resources
#include "managed_array.h"

class pQueue :public Container
{
public:
	//
	// Constructor
	//
	// Purpose: Initializes array to have zero size.
	// Argument(s): N/A
	// Side Effect: The array is initialized to be empty.
	// Return: N/A
	//
	pQueue();

	// insert
	//
	// Purpose: Insert an element into the array.
	// Argument(s):
	//  i is the index at which x is to be inserted
	//  x is the value to be inserted into array.
	// Precondition: i <= size() && size() < MAX_LENGTH
	// Side Effect: The new element x will be inserted into the
	//              the array at index i.  Array elements will be 
	//              shifted to make room for x.  The array size 
	//              will be increased by one.
	// Return: N/A.
	//
	virtual void insert(int x);

	//QQ EDIT
	//
	// remove(i)
	//
	// Purpose: Remove an element from the array.
	// Argument(s):
	//   i : index of the element to be removed.
	// Precondition: i < size() && size() > 0
	// Side Effect: Remove the array element at index i.  Array 
	//              elements will be shifted to fill the "gap" left 
	//              by the removed element.  The array size will be 
	//              decreased by one.
	// Return: N/A.
	//
	virtual int remove();

	//
	//empty(i)
	//Purpose: Check if array is empty
	//Argument(s):
	//Return: will return a bool variable depending on whether or not the array is empty
	//
	virtual bool empty() const;


private:
	ManagedArray priorityArray;
};

#endif