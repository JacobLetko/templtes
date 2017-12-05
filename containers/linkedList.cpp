#include "linkedList.h"
#include <cassert>


intLinkedList::intLinkedList()
	:head(nullptr)
{

}

intLinkedList::~intLinkedList()
{
	intlinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intlinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}
}

void intLinkedList::append(int value)
{
	intlinkedListNode* newNode = new intlinkedListNode;
	newNode->value = value;
	newNode->next = nullptr;

	if (head == nullptr)
		head = newNode;
	else
	{
		intlinkedListNode* iter = head;
		while (iter->next != nullptr)
			iter = iter->next;

		iter->next = newNode;
	}
}

int intLinkedList::at(int index)
{
	int x = 0;
	intlinkedListNode* iter = head;

	while (x != index && iter != nullptr)
	{
		iter = iter->next;
		x++;
	}

	assert(iter != nullptr);
	return iter->value;
}

size_t intLinkedList::getSize() const
{
	intlinkedListNode* iter = head;
	int x = 0;
	while (iter != nullptr)
		x++;
	
	return x;
}

bool intLinkedList::empty() const
{
	if (head == nullptr)
		return true;
	else
		return false;
}

void intLinkedList::pop()
{
	intlinkedListNode* iter = head;

	while (iter != nullptr)
		iter->next;
	delete iter;
}

int intLinkedList::subscript(int index)
{
	int x = 0;
	intlinkedListNode* iter = head;
	while (x != index && iter != nullptr)
	{
		x++;
		iter = iter->next;
	}

	return iter->value;
}

void intLinkedList::clear()
{
	intlinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intlinkedListNode* hold = iter->next;
		delete iter;
		iter = hold;
	}
}

void intLinkedList::erase(int index)
{
	intlinkedListNode* iter = head;
	intlinkedListNode* rear;
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

int intLinkedList::count(int num)
{
	int x = 0;
	intlinkedListNode* iter = head;
	while (iter != nullptr)
	{
		if (iter->value == num)
			x++;
	}
	return x;
}

void intLinkedList::insert(int index, int num)
{
	intlinkedListNode* newNode = new intlinkedListNode;
	intlinkedListNode* iter = head;
	intlinkedListNode* rear;
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
