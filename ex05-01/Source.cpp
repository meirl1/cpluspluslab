#include <iostream>
using namespace std;
void showStaticValue(int n)
{
	static int value = 0;
	value += n;
	cout << "Static value is " << value << endl;
}
void f(int c)
{
	static int value = 0;
	value++;

}
void f()
{
	static int value = 0;
	value++;
}
int main()
{
	for (int i = 0; i < 5; i++)
		showStaticValue(i);
	showStaticValue(10);
	for (int i = 0; i < 6; i++) f();
	system("pause");
	return 0;

}