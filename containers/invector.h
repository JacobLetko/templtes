#pragma once

class intVector
{
	int * data;
	size_t capacity;
	size_t size;

public:
	intVector();
	~intVector();
	int & at(size_t idx);

	int& append(int val);

	int* Data() const;
	size_t Capacity() const;
	size_t Size() const;
	bool empty() const;
	int front() const;
	int back() const;

private:
	bool grow(size_t minSize);
};