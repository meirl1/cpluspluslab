#include <string>
#include <queue>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	
	queue<int> q; // has no iterator
	for (int i = 0; i < 6; i++)
	{
		q.push(i);
	}
	cout << "Queue size " << q.size() << endl;
	cout << "Queue empty ? " << q.empty() << endl;
	cout << "Queue contains:";
	while (!q.empty())
	{
		cout << " " << q.front();
		q.pop(); // discards head of queue
	}
	cout << endl;
	cout << "Queue size " << q.size() << endl;



		system("pause");
	return 0;
}