//Stack.cpp
#include "Stack.h"
#include <cassert>
#include "managed_array.h"

//Creates an initial blank managed array in the semi-virtual container
Stack::Stack() : stackArray() {}

//This function takes the integer entered and places it in the farthest right position of the managed array
void Stack::insert(int x)
{
	stackArray.insert(stackArray.size(), x);
}

//Takes the value from the managed array and sends it to be printed out
//It then removes the farthest-right position of the managed array, ie the position at arraySize - 1.
//This does not shift the array, it just shortens it lengthwise.
//The array will erase from right to left.
//The integer x is sent back to be printed out.
int Stack::remove()
{
	assert(!empty());
	int x;
	x = stackArray.read(stackArray.size()-1);
	stackArray.remove(stackArray.size()-1);
	return x;
}

//Checks to see if the array has no size/length to it
//It then returns true or false based on this knowledge.
bool Stack::empty() const
{
	return stackArray.size() == 0;
}
