#pragma once
//--------------------------------------------
// class DoubleEndedList
// a variation on Lists - can add elements
// to the end as well as to front
//--------------------------------------------
#include "List.h"
class DoubleEndedList : public List
{
public:
	// constructors
	DoubleEndedList();
	DoubleEndedList(const DoubleEndedList &del);

	// override the following methods from class List
	void add(int value);
	void clear();
	void removeFirst();
	// add a new element to the end of the List
	void addToEnd(int value);
	friend ostream& operator<<(ostream& os, const DoubleEndedList& tmplst);
protected:
	// data area -- Link to end
	List::Link *last;
	int a;
};
