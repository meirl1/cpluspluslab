#include<iostream>
#include <string>
#include<cstring>
using namespace std;

int level3()
{
	//try
	//{
	cout << "Level 3 beginning.\n";
	int num1, num2;
	cout << "enter 2 numbers\n";
	cin >> num1 >> num2;
	if (num2 == 0)
		throw string("dividing by zero ");
	int result = num1 / num2;
	cout << "Level 3 ending.\n";
	return result;
	//}
	//catch (string error)
	//{
	//	cout << error << endl;
	//	return 1;
	//}
}
void level2()
{
	cout << "Level 2 beginning.\n";
	cout << level3();
	cout << "Level 2 ending.\n";
}
void level1()
{
	cout << "Level 1 beginning.\n";
	try
	{
		level2();
	}
	catch (string problem) {
		cout << "\nException message: "
			<< problem;
	}
	cout << "\nLevel 1 ending." << endl;
}

int func(char *p){return strlen(p);}
//int func(const char *p){return strlen(p);}
#include<iomanip>
int main()
{
	
	cout<<setw(10)<<setfill('0')<<3<<endl;
	/*char t[] = "Hello";
	func(t);
	cout << "Program beginning.\n";
	level1();
	cout << "Program ending." << endl;
	system("pause");*/
	return 0;
}
/*_____________________________
Output :
Program beginning.
Level 1 beginning.
Level 2 beginning.
Level 3 beginning.
enter 2 numbers : 5 0
Exception message : dividing by zero
Level 1 ending.
Program ending
*/