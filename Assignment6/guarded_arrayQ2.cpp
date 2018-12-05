#include <cassert>
#include "guarded_arrayQ2.h"
#include <iostream>

using namespace std;

GuardedArray::GuardedArray()
{
	pointer = NULL;
	capacityField = 0;
}

GuardedArray::GuardedArray(ItemType x)
{
	capacityField = x;
	pointer = new ItemType[capacityField];

	for (unsigned i = 0; i < capacityField; i++)
		pointer[i] = 0;
}

GuardedArray::GuardedArray(ItemType x, ItemType value)
{
	capacityField = x;
	pointer = new ItemType[capacityField];
	for (unsigned i = 0; i < capacityField; i++)
		pointer[i] = value;
}

GuardedArray::GuardedArray(const GuardedArray & secondArray)
{
	capacityField = secondArray.capacityField;
	pointer = new ItemType[capacityField];

	for (unsigned i = 0; i < capacityField; i++)
		pointer[i] = secondArray.read(i);
}

GuardedArray & GuardedArray::operator=(const GuardedArray & secondArray)
{
	if (&secondArray != this)
	{
		delete[] pointer;

		capacityField = secondArray.capacityField;
		pointer = new ItemType[capacityField];

		for (unsigned i = 0; i < capacityField; i++)
			pointer[i] = secondArray.read(i);
	}
	return *this;
}

ItemType GuardedArray::read(unsigned i) const
{
	assert(i < capacityField);
	return pointer[i];
}

void GuardedArray::write(unsigned int i, ItemType x)
{
	assert(i < capacityField);
	pointer[i] = x;
}

unsigned int GuardedArray::getCap()
{
	return capacityField;
}

GuardedArray::~GuardedArray()
{
	delete[] pointer;
	pointer = NULL;
}