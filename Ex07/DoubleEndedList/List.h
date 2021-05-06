#pragma once
#include <iostream>
using namespace std;

//------------------------------------------------
//  class List
//      arbitrary size Lists
//      permits insertion and removal 
//      only from the front of the List
//------------------------------------------------

class List
{
public:
	//--------------------------------------------
	//  inner class link
	//  a single element for the linked List 
	//--------------------------------------------
	class Link
	{
	public:
		// data areas
		int value = 0;
		Link * next = nullptr;
	public:
		// constructor
		Link(int linkValue=0, Link * nextPtr=nullptr);
		Link(const Link &);//cctor
		friend class List;
		
	};	//end of class Link

protected:
	// data field
	Link* head;

public:
	// constructors
	List();//default ctor - create an empty list, head points to null
	List(const List&);//copy constructor
	~List();//destructor
	//move constructor
	List(List&&) {}
	
	// operations
	void add(int value);//add to front
	int firstElement() const;//check first element
	//bool search(const int &value) const;//search for key in list
	Link* search(const int &value) const;//search for key in list
	bool isEmpty() const;//is list empty
	void removeFirst();//delete first element
	void clear();//clear list
	//friend functions
	friend ostream& operator<<(ostream &os, const List& l);//print list
	

	//operators
	List& operator=(const List& rhs);
	//move assignment
	List& operator=(List&&) {}

	
};
