#pragma once
#ifndef __GUARDED_ARRAYQ2_H__
#define __GUARDED_ARRAYQ2_H__

typedef int ItemType;

//
// GuardedArray
// - A wrapper class for C++ arrays to make array access safe.
//   Specifically, initialization is guaranteed, and assertions are
//   in place to detect array index out of bound errors in array member
//   accesses.
//

class GuardedArray {
public:

	//
	// Constructor
	//
	// Purpose: Initializes array elements to zeros
	// Argument(s): N/A
	// Side Effect: All array elements are initialized to zero.
	// Return: N/A
	//

	GuardedArray();

	//
	// Constructor
	//
	// Purpose: Initializes all array elements to a given value.
	// Argument(s):
	//  x : value to which array elements should be initialized.
	// Side Effect: All array elements are initialized to x.
	// Return: N/A
	//

	GuardedArray(ItemType x);

	//
	// Constructor
	//
	// Purpose: Initializes all array elements to a given value.
	// Argument(s):
	//  x :  the size of the array
	// val: the values that will be assigned to each instance of size x
	// Side Effect: All array elements are initialized to val.
	// Return: N/A
	//

	GuardedArray(ItemType x, ItemType val);

	//
	// Copy Constructor
	//
	// Purpose: Initializes a new array and all array elements to a corresponding value from another array.
	// Argument(s): 
	// baseArray: the array that is being called/copied from
	// Side Effect: The newly created array will be a copy of the original array
	// Return: N/A
	//

	GuardedArray(const GuardedArray & baseArray);

	//
	//copy assignment operator=
	//
	//Purpose: Copies the values of one array to the original array
	//Argument(s):
	//The reference of array, which will be our baseline that we copy from
	//Side Effect: N/A
	//Return: the copied array
	//

	GuardedArray& operator=(const GuardedArray &array);

	//
	// read
	//
	// Purpose: Read array element at index i.
	// Argument(s):
	//  i : index of element to be read.
	// Precondition(s): i < capacityField
	// Return: Value of array element at index i
	// 

	ItemType read(unsigned i) const;

	//
	// Get Capacity
	//
	// Purpose: Get function, returns a value 
	// Argument(s): N/A
	// Side Effect: N/A
	// Return: the integer capacityField or "size"
	//

	unsigned int getCap();

	//
	// Destructor
	//
	// Purpose: Removes info from the pointer variable
	// Argument(s): N/A
	// Side Effect: The pointer will still be present, it just won't contain any information
	// Return: N/A
	//

	//
	// write
	//
	// Purpose: Write x into array element at index i.
	// Argument(s):
	//  i : index of array element to be overwritten.
	//  x : value to be stored into array.
	// Precondition(s): i < MAX_LENGTH.
	// Side Effect: The array element at index i will be 
	//              overwritten by x.
	// Return: N/A
	//

	void write(unsigned int i, ItemType x);

	~GuardedArray();

private:
	ItemType *pointer;					//privately creating the class variables pointer and capacityField
	unsigned int capacityField;
};
#endif


