#include <iostream>
#include <cstring>
using namespace std;
class student
{
private:
	char name[20];
	int grade;

	static int numOfStudents;
	static int numOfFails;
public:
	student(char* n);
	void setGrade(int g);
	float percentageOfFailers();
};
int student::numOfStudents = 0;
int student::numOfFails = 0;
student::student(char* n)
{
	//numOfStudents = 0;
	strcpy_s(name, n);
	numOfStudents++;
}
void student::setGrade(int g)
{
	grade = g;
	if (grade < 60)
		numOfFails++;
}
float student::percentageOfFailers()
{
	return 100 * (float)numOfFails / numOfStudents;
}
int main()
{
	char name[15];
	int mark;
	for (int i = 0; i < 4; i++)
	{
		cout << "enter students name and grade\n";
		cin >> name >> mark;
		student s(name);
		s.setGrade(mark);
		cout << " percentage of failers is : " << s.percentageOfFailers();
		cout << endl;
	}
	system("pause");
	return 0;
}