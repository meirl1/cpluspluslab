#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v4;
	auto it = v4.begin();
	list<int> lint;
	for(int i=0;i<10;i++)
		lint.push_front(i);
	

	list<int*> lpint;
	for (int i = 0; i<10; i++)
		lpint.push_front(new int(i));

	vector<int> vint;
	for (int i = 0; i<10; i++)
		vint.push_back(i);
	for (int i = 0; i < 10; i++)
		cout << vint[i];
	
		system("pause");
	return 0;
}