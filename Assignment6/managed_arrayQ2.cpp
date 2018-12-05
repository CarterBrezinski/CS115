#include <cassert>
#include "managed_arrayQ2.h"

ManagedArray::ManagedArray() : array(arrayCapacity) {
	count = 0;
}

unsigned int ManagedArray::size() const {
	return count;
}

ItemType ManagedArray::read(unsigned int i) const {
	assert(i < count);
	return array.read(i);
}

void ManagedArray::write(unsigned int i, ItemType x) {
	assert(i < count);
	array.write(i, x);
}

void ManagedArray::insert(unsigned int i, ItemType x) {
	if (count == arrayCapacity)
	{
		arrayCapacity *= 2;

		GuardedArray tempArray(arrayCapacity);

		for (unsigned int i = 0; i < arrayCapacity / 2; i++)
		{
			tempArray.write(i, array.read(i));
		}
		array = tempArray;
	}
	for (unsigned j = count; j > i; j--)
		array.write(j, array.read(j - 1));
	array.write(i, x);
	count++;
}

void ManagedArray::remove(unsigned int i) {
	assert(i < count && count > 0);
	for (unsigned j = i; j < count - 1; j++)
		array.write(j, array.read(j + 1));
	count--;
}

ManagedArray::ManagedArray(const ManagedArray & array2) : array(array2.array) {
	count = array2.count;
	arrayCapacity = array2.arrayCapacity;
}

ManagedArray & ManagedArray::operator=(const ManagedArray & array2) {
	array = array2.array;
	count = array2.count;
	arrayCapacity = array2.arrayCapacity;

	return *this;
}

unsigned int ManagedArray::getCap() {
	return arrayCapacity;
}

ManagedArray::~ManagedArray() {}
