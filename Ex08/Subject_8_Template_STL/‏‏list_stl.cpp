#include <list>
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;
class A
{
protected:
	int a;
public:
	A() { a = rand() % 100; }
	virtual void print() { cout << "a=" << a << ' '; }
};
class B :public A
{
protected:
	int b;
public:
	B() :A() { b = rand() % 100; }
	virtual void print() override { A::print(); cout << "b=" << b << ' '; }
};
class C :public B
{
protected:
	int c;
public:
	C() :B() { c = rand() % 100; }
	void print() override final
	{
		B::print(); cout << "c=" << c << ' ';
	}
};

int main()
{
	
	list<Person> lss;
	Person s("moshe", false);
	lss.push_back(s);
	lss.push_back(Person("b", true));
	lss.push_back(Person("a", false));
	lss.push_back(Person("c", true));
	lss.sort();

	list<Person>::iterator itt;
	cout << "***************" << endl;
	for (itt = lss.begin(); itt != lss.end(); itt++)
	{
		(*itt).print();
	}




	list<int> ls;
	ls.push_back(3); //3
	ls.push_back(1); //3,1
	ls.push_front(2); //2, 3, 1
	cout << ls.front() << endl;//2
	cout << ls.back() << endl;
	list<int>::iterator  it = ls.begin();
	cout << *it << endl; //return the value that 'it' is pointed on
	ls.erase(ls.begin());//3,1 (erase 2)
	int x = ls.front(); //3
	cout << x << endl;
	ls.sort();//1,3
	x = ls.front();//1
	cout << x << endl;
	it = ls.begin();//1
	cout << *it << endl;//1
	cout << (*(++it)) << endl;//3
	ls.push_front(4); //4,1,3
	ls.push_back(4); //4,1,3,4
	ls.remove(4);//remove all elems with value 4
	x = ls.front();
	cout << x << endl;
	it = ls.begin();
	ls.insert(it, 4);//insert val 4 before it, 4,1,3
	it = ls.end();
	//cout<<*it<<endl;//???? will crash 
	//since end point to the 
	//last-the end of the list
	for (it = ls.begin(); it != ls.end(); it++)
		cout << *it << " ";
	cout << endl;
	ls.insert(ls.begin(), 5);//insert val 5 
			//before it, 5,4,1,3
	ls.insert(++(ls.begin()), 6); //5,6,4,1,3
	ls.insert((ls.begin())++, 7); //7,5,6,4,1,3 
			//no means for ++



	srand(time(nullptr));
	list<A*> lst;
	for (int i = 0; i < 5; i++) {
		A* ptr;
		int choice = rand() % 3;
		switch (choice)
		{
		case 0: ptr = new A();	break;
		case 1: ptr = new B();	break;
		case 2: ptr = new C();	break;
		};
		lst.push_back(ptr);
	}
	for (list<A*>::iterator it = lst.begin(); it != lst.end(); it++) {
		(*it)->print();
		cout << endl;
	}


		system("pause");
	return 0;
}