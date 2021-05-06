#include "List.h"
//  class Link implementation
	//------------------------------------------------
//Link constructors implementation
List::Link::Link(int val, Link* nxt) : value(val), next(nxt) {}

List::Link::Link(const Link& source) : value(source.value), next(source.next) {}
//--------------------------------------------
	//  class List implementation
	//--------------------------------------------
/* Function : default constructor
** params:none
** return:none
** purpose:initialize empty list object
*/

List::List() : head(nullptr)
{

	// no further initialization
}

List::List(const List &l)
{
	Link *src, *trg;
	if (l.head == nullptr)//original list empty
		this->head = nullptr;
	else
	{
		//Link * newlink = new Link((l.head)->value, nullptr);
		//head = newlink;
		head = new Link((l.head)->value, nullptr);
		src = l.head;
		trg = head;
		while (src->next != nullptr)//didn't reach end of original list
		{
			trg->next = new Link((src->next)->value, nullptr);
			src = src->next;
			trg = trg->next;
		}
	}
}

List::~List()
{
	clear();
}

void List::add(int value)
{
	/*Link* temp = new Link(value, head);
	head = temp;*/
	head = new Link(value, head);
	if (!head)//head ==nullptr)
		throw "failed to allocate memory for new Link";
}

void List::clear()
{
	// empty all elements from the List
	List::Link* q;
	for (Link * p = head; p != nullptr; p = q)
	{
		// delete the element pointed to by p
		q = p->next;
		p->next = nullptr;
		delete p;
	}
	// mark that the List contains no elements
	head = nullptr;
}

List & List::operator=(const List & rhs)
{
	//check self assignment
	if (this != &rhs)
	{
		//check if list is not empty
		if (!isEmpty())
			clear();
		//copy ctor code
		Link* src, * trg;
		if (rhs.head == nullptr)
			this->head = nullptr;
		else
		{
			//Link * newlink = new Link((l.head)->value, nullptr);
			//head = newlink;
			head = new Link((rhs.head)->value, nullptr);
			src = rhs.head;
			trg = head;
			while (src->next != nullptr)
			{
				trg->next = new Link((src->next)->value, nullptr);
				src = src->next;
				trg = trg->next;
			}
		}
		
	}	//end of checking self assignment
	//end of operator=
	return *this;
}
//read first element of list

int List::firstElement() const
{
	// return first value in List
	if (isEmpty())
		throw "the List is empty, no first Element";
	return head->value;
}

List::Link * List::search(const int & value) const
{
	Link*p = head;//pointer ezer
	/*while (p != nullptr)
	{
		if (p->value == value)
			return p;
		p = p->next;
	}*/
	while (p != nullptr && p->value != value)
		p = p->next;

	return p;
}

//check if list is empty
bool List::isEmpty() const
{
	// test to see if the List is empty
	// List is empty if the pointer to the head
	// Link is null

	return head == nullptr;
}

void List::removeFirst()
{
	Link* temp = head->next;
	head->next = nullptr;
	delete head;
	head = temp;
}




