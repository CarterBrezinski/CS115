#pragma once
#ifndef __MANAGED_ARRAYQ2_H__
#define __MANAGED_ARRAYQ2_H__

#include "guarded_arrayQ2.h"

//
// ManagedArray
// - A wrapper class for C++ arrays to facilitate insertion and removal of
//   array elements.
// - Every instance of ManagedArray has a size that can be increased
//   until the maximum capacity MAX_LENGTH is reached.
//

class ManagedArray {
public:
	//
	// Constructor
	//
	// Purpose: Initializes array to have zero size.
	// Argument(s): N/A
	// Side Effect: The array is initialized to be empty.
	// Return: N/A
	//

	ManagedArray();

	//
	// size
	//
	// Purpose: Return the current size of the array.
	// Argument(s): N/A
	// Return: current size of the array
	//

	unsigned int size() const;

	//
	// read
	//
	// Purpose: Read array element at index i.
	// Argument(s):
	//  i : index of element to be read.
	// Precondition: i < size()
	// Return: Value of array element at index i.
	//

	ItemType read(unsigned int i) const;

	//
	// write
	//
	// Purpose: Write x into array element at index i.
	// Argument(s):
	//  i : index of array element to be overwritten.
	//  x : value to be written into array.
	// Precondition: i < size()
	// Return: N/A.
	//

	void write(unsigned int i, ItemType x);

	//
	// insert
	//
	// Purpose: Insert an element into the array.
	// Argument(s):
	//  i : index at which x is to be inserted
	//  x : value to be inserted into array.
	// Precondition: i <= size() && size() < array.Size
	// Side Effect: The new element x will be inserted into the
	//              the array at index i.  Array elements will be 
	//              shifted to make room for x.  The array size 
	//              will be increased by one.
	// Return: N/A.
	//

	void insert(unsigned int i, ItemType x);

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

	void remove(unsigned int i);

	ManagedArray(const ManagedArray &array2);

	ManagedArray& operator=(const ManagedArray &array2);

	unsigned int getCap();

	~ManagedArray();

private:
	unsigned int count;
	GuardedArray array;
	unsigned int arrayCapacity = 4;
};

#endif
