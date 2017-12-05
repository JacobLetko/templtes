#pragma once

class  intLinkedList
{
public:

	struct intlinkedListNode
	{
		int value;
		intlinkedListNode* next;
	};

	intLinkedList();
	~intLinkedList();

	void append(int value);
	int at(int index);

	size_t getSize() const;
	bool empty() const;
	template<typename T>
	T front() const;
	template<typename T>
	T back() const;
	void pop();

	int subscript(int index);
	void clear();
	void erase(int index);
	int count(int num);
	void insert(int index, int num);

private:
	intlinkedListNode * head;
};

template<typename T>
inline T intLinkedList::front() const
{
	return head;
}

template<typename T>
inline T intLinkedList::back() const
{
	intlinkedListNode* iter = head;
	while (iter != nullptr)
		iter->next;

	return iter;
}
