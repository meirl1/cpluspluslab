#include <iostream>
using namespace std;

#include "LinkedList.h"

List& List::operator=(const List& list)
{
	// do nothing for self assignment
	if (&list != this) {
		clear();
		copy(list);
	}

	return *this;
}

ostream& operator<<(ostream& out, const List& list)
{
	out << '[';
	for (List::Node* p = list.head; p != nullptr; p = p->getNext()) {
		if (p != list.head)
			out << ',';
		out << p->getValue();
	}
	out << ']';

	return out;
}
