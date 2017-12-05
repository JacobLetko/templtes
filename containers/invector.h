#pragma once

class intVector
{
	int * data;
	size_t capacity;
	size_t size;

public:
	intVector();
	~intVector();

	int &operator[](size_t idx);
	int operator[](size_t idx) const;

	int& at(size_t idx);

	int& append(int val);

	int* c_ptr() const;

	size_t getCapacity() const;
	size_t getSize() const;

	bool empty() const;

	int front() const;
	int back() const;

	void Clear();

	void Erase(size_t idx);
	int Count(int value);
	void Insert(size_t idx, int value);
	void Reserve(size_t newCapacity);
	void Compact();

	void printVector();

private:
	bool grow(size_t minSize);
};