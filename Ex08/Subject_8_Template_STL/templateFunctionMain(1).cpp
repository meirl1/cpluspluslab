#include <iostream>
#include <list>
#include <string>
#include "Vector.h"
using namespace std;

template <class T>
void print(T vec[], int size)
{
	for (int i = 0; i<size; i++)
		cout << vec[i] << ' ';
	cout << endl;
}

template <class T>
T getMax(T a, T b)
{
	if (a < b)
		return b;
	else return a;
}
template <class U>
void swap(U& a, U&b)
{
	U temp = a;
	a = b;
	b = temp;
}

class Student
{
	int id;
	string name;
public:
	Student(int _id = 111, string _name = "stam") :id(_id), name(_name) {}
	bool operator<(Student other)
	{
		//return (id < other.id);
		return (name < other.name);
	}
	friend ostream& operator<<(ostream& os, Student s)
	{
		os << "id: " << s.id << " name: " << s.name << endl;
		return os;
	}
};

int main()
{
	

	int x = 8, y = 9;
	int z = getMax<int>(x, y);

	string str1 = "hello", str2 = "hi";
	string str3 = getMax<string>(str1, str2);

	Student s1(111, "yossi");
	Student s2(222, "matilda");
	Student s3 = getMax<Student>(s1, s2);

	Student* students = new Student[5];
	students[0] = s1;
	students[1] = s2;
	print<Student>(students, 5);
	
		system("pause");
	return 0;

}