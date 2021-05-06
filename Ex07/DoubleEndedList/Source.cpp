
#include <iostream>
#include "DoubleEndedList.h"
using namespace std;
//this example needs to be expanded in the main to
	//check all differenet functions as well as 
	//move ctor
	//and assignment operator

int main()
{
	int element;
	DoubleEndedList    ls1, ls2;
	for (int i = 0; i < 5; i++)
	{
		ls1.add(i);
		cout << i << " ";
	}
	for (int i = 0; i < 5; i++)
	{
		element = ls1.firstElement();
		if (i < 2)
			ls1.removeFirst();
		cout << element << " ";
		ls2.addToEnd(element);
	}
	cout<<ls1;
	DoubleEndedList ls3(ls2);
	cout << endl;
	cout << ((ls2.search(1)) ? "ls2 includes 1" : "ls2 doesn't Include 1") << endl;
	cout << ((ls2.search(2)) ? "ls2 includes 2" : "ls2 doesn't Include 2") << endl;
	ls2.removeFirst();
	cout << ((ls2.search(2)) ? "ls2 includes 2" : "ls2 doesn't Include 2") << endl;
	return 0;
}
/*
97.	Output
98.	0 1 2 3 4 4 3 2 2 2
99.	ls2 doesn't Include 1
100.	ls2 includes 2
101.	ls2 includes 2
102.	*/