#include "invector.h"
#include <cassert>
#include <cstring>

intVector::intVector()
{
	capacity = 2;
	data = new int[capacity];
	size = 0;
}

intVector::~intVector()
{
	delete[] data;
}

int & intVector::at(size_t idx)
{
	assert(idx > 0);
	assert(idx <= size);
	return data[idx];
}

int & intVector::append(int val)
{
	if (size == capacity)
	{
		bool didGrow = grow(size + 1);
		assert(didGrow);
	}
	data[size] = val;
	++size;
}

int * intVector::Data() const
{
	return nullptr;
}

size_t intVector::Capacity() const
{
	return size_t();
}

size_t intVector::Size() const
{
	return size_t();
}

bool intVector::empty() const
{
	return false;
}

int intVector::front() const
{
	return 0;
}

int intVector::back() const
{
	return 0;
}

bool intVector::grow(size_t minSize)
{
	if (minSize <= 64000)
	{
		return true;
	}
	
	int oldCapacity = capacity;

	while (capacity < minSize)
	{
		capacity * 2;
	}

		int* newData = new int[capacity];
		memcpy(newData, data, size);

		delete[] data;

		data = newData;
		return true;
}
