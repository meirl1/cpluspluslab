#include <string>
#include <stack>
#include <iostream>
#include <ctime>
using namespace std;
bool polindrom(string str)
{
	stack<char> s;
	for (int i = 0; i < str.size() / 2; i++)
		s.push(str[i]);
	if (str.size() % 2) 	i++;
	while (!s.empty())
	{
		if (str[i++] != s.top()) return false;
		s.pop();
	}
	return true;
}

int main()
{
	
	stack<int> s; // has no iterator
	cout << "Pushing onto stack: ";
	for (int i = 0; i < 6; i++)
	{
		cout << " " << i;
		s.push(i);
	}
	for (int i = 12; i >= 6; i--)
	{
		cout << " " << i;
		s.push(i);
	}
	cout << endl;
	cout << "Stack size " << s.size() << endl;
	cout << " Top of stack is:";
	while (!s.empty())
	{
		cout << " " << s.top();
		s.pop(); // discards top of stack
	}
	cout << endl;
	cout << "Stack size " << s.size() << endl;



	char word[20];
	cout << "enter a word: ";
	cin >> word;
	if (polindrom(word))
		cout << word << " is polindrom\n";
	else cout << word << " is not polindrom\n";
	return 0;



		system("pause");
	return 0;
}