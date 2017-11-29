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

	int* c_ptr() const;
	size_t Capacity() const;
	size_t Size() const;
	bool empty() const;
	int front() const;
	int back() const;

	int opo(int idx);
	void clear();
	void erase(int idx);
	int count(int num);
	void insert(int num, int idx);
	void reserve(int num);
	void compact();

private:
	bool grow(size_t minSize);
};