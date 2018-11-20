//Stack.cpp
#include "Stack.h"
#include <cassert>
#include "managed_array.h"


Stack::Stack() : stackArray() {}

//
void Stack::insert(int x)
{
	stackArray.insert(stackArray.size(), x);
}

//Takes the value from the managed array and sends it to be printed out
int Stack::remove()
{
	assert(!empty());
	int x;
	x = stackArray.read(stackArray.size()-1);
	stackArray.remove(stackArray.size()-1);
	return x;
}

//
bool Stack::empty() const
{
	
	return stackArray.size() == 0;
}
