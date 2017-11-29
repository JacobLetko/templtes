#pragma once

template<typename T>
class tVector
{
	T * data;
	size_t capacity;
	size_t size;
public:
	tVector();
	~tVector();

	T& at(size_t idx);
	T& append(T val);

	T * c_ptr() const;
	size_t getCapacity() const;
	size_t getSize() const;
	bool empty() const;
	T front() const;
	T back() const;
	void pop();
};

template <typename T>
tVector::tVector()
{
	capacity = 2;
	data = new T[capacity];
	size = 0;
}

template<typename T>
tVector::~tVector()
{
	delete[] data;
}

template<typename T>
inline T & tVector<T>::at(size_t idx)
{
	// TODO: insert return statement here
}

template<typename T>
inline T & tVector<T>::append(T val)
{
	// TODO: insert return statement here
}

template<typename T>
inline T * tVector<T>::c_ptr() const
{
	return NULL;
}

template<typename T>
inline size_t tVector<T>::getCapacity() const
{
	return size_t();
}

template<typename T>
inline size_t tVector<T>::getSize() const
{
	return size_t();
}

template<typename T>
inline bool tVector<T>::empty() const
{
	return false;
}

template<typename T>
inline T tVector<T>::front() const
{
	return T();
}

template<typename T>
inline T tVector<T>::back() const
{
	return T();
}

template<typename T>
inline void tVector<T>::pop()
{
}
