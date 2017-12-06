#pragma once

template<typename T>
class  TLinkedList
{
public:

	struct TLinkedListNode
	{
		T value;
		TLinkedListNode* next;
	};

	TLinkedList();
	~TLinkedList();

	void append(T value);
	T at(int index);

	size_t getSize() const;
	bool empty() const;
	template<typename T>
	T front() const;
	template<typename T>
	T back() const;
	void pop();

	T subscript(int index);
	void clear();
	void erase(int index);
	int count(T num);
	void insert(int index, T num);

private:
	TLinkedListNode * head;
};

template<typename T>
inline T TLinkedList::front() const
{
	return head;
}

template<typename T>
inline T TLinkedList::back() const
{
	TLinkedListNode* iter = head;
	while (iter != nullptr)
		iter->next;

	return iter;
}

template<typename T>
inline TLinkedList<T>::TLinkedList()
	:head(nullptr)
{
}

template<typename T>
inline TLinkedList<T>::~TLinkedList()
{
	TLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		TLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}
}

template<typename T>
inline void TLinkedList<T>::append(T value)
{
	TLinkedListNode* newNode = new TLinkedListNode;
	newNode->value;
	newNode->nullptr;

	if (head == nullptr)
		head = newNode;
	else
	{
		TLinkedListNode* iter = head;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}
		iter - next = newNode;
	}
}

template<typename T>
inline T TLinkedList<T>::at(int index)
{
	int x = 0;
	TLinkedListNode* iter = head;

	while (x != index && iter != nullptr)
	{
		iter = iter->next;
		x++;
	}

	return iter->value;
}

template<typename T>
inline size_t TLinkedList<T>::getSize() const
{
	int x = 0;
	TLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		iter = iter->next;
		x++;
	}
	return x;
}

template<typename T>
inline bool TLinkedList<T>::empty() const
{
	if (head == nullptr)
		return true;
	else
		return false;
}

template<typename T>
inline void TLinkedList<T>::pop()
{
	TLinkedListNode* iter = head;
	while (iter != nullptr)
		iter = iter->next;
	delete iter;
}

template<typename T>
inline T TLinkedList<T>::subscript(int index)
{
	int x = 0;
	TLinkedListNode* iter = head;
	while (x != index && iter != nullptr)
	{
		iter = iter->next;
		x++;
	}
	return iter->value;
}

template<typename T>
inline void TLinkedList<T>::clear()
{
	TLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		TLinkedListNode* hold = iter->next;
		delete iter;
		iter = hold;
	}
}

template<typename T>
inline void TLinkedList<T>::erase(int index)
{
	TLinkedListNode* iter = head;
	TLinkedListNode* rear;
	int x = 0;
	while (x != index && iter != nullptr)
	{
		x++;
		rear = iter;
		iter = iter->next;
	}
	rear->next = iter->next;
	delete iter;
}

template<typename T>
inline int TLinkedList<T>::count(T num)
{
	int x = 0;
	TLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		if (iter->value == num)
			x++;
	}
	return x;
}

template<typename T>
inline void TLinkedList<T>::insert(int index, T num)
{
	TLinkedListNode* newNode = new intlinkedListNode;
	TLinkedListNode* iter = head;
	TLinkedListNode* rear;
	int x = 0;
	while (x != index && iter != nullptr)
	{
		rear = iter;
		iter = iter->next;
		x++;
	}
	rear->next = newNode;
	newNode->next = iter;
}
