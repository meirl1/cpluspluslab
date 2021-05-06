#include "DoubleEndedList.h"
//------------------------------------------------
//  class DoubleEndedList implementation
//------------------------------------------------
DoubleEndedList::DoubleEndedList() : List(), last(nullptr)
{
}
/*
Method: add
operation:adds element to front of double linked list
input:integer value to add to list
return value:none
*/
void DoubleEndedList::add(int val)
{
	// add an element to the front of a double
	// ended List only need to handle addition to
	// empty List
	if (isEmpty())
	{
		List::add(val);
		last = head;
	}
	else
		List::add(val);
}
void DoubleEndedList::clear()
{
	head->next;
	// delete all values from collection
	List::clear();
	// then set the pointer to the last element to zero
	last = nullptr;
}
void DoubleEndedList::removeFirst()
{
	// remove the first element
	List::removeFirst();
	// if we remove last element
	if (isEmpty())
		last = nullptr;
}

void DoubleEndedList::addToEnd(int val)
{
	// add a new element to end of a double ended List
	if (last != nullptr)
	{
		last->next = new Link(val, nullptr);
		last = last->next;
	}
	// otherwise, just add to front
	else
		add(val);
}

DoubleEndedList::DoubleEndedList(const DoubleEndedList &del) //:List(del)
{
	Link *src, *trg;
	if (del.head == nullptr) //original list empty
		this->last = this->head = nullptr;
	else
	{
		//Link * newlink = new Link((l.head)->value, nullptr);
		//head = newlink;
		head = new Link((del.head)->value, nullptr);
		src = del.head;
		trg = head;
		while (src->next != nullptr) //didn't reach end of original list
		{
			trg->next = new Link((src->next)->value, nullptr);
			src = src->next;
			trg = trg->next;
		}
		last = src;
	}
}
ostream &operator<<(ostream &os, const DoubleEndedList &tmplst)
{
	os << (List &)tmplst;
	os << tmplst.a;
	return os;
}
