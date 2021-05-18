##include <algorithm>
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

void print(int& num) { cout << num++ << " "; }

bool IsOdd(int i) { return ((i % 2) == 1); }

int main()
{
	vector<int> numbers;

	numbers.push_back(4);
	numbers.push_back(1);
	numbers.push_back(7);
	numbers.push_back(4);
	numbers.push_back(2);
	numbers.push_back(5);

	vector<int>::iterator pBig = max_element(numbers.begin(), numbers.end());
	cout << "The max is " << *pBig << endl; // --> The max is 7

	vector<int>::iterator pSmall = min_element(numbers.begin(), numbers.end());
	cout << "The min is " << *pSmall << endl;  // --> The min is 1


	sort(numbers.begin(), numbers.end());


	reverse(numbers.begin(), numbers.end());

	vector<int>::iterator found = find(numbers.begin(), numbers.end(), 8);
	if (found == numbers.end())
		cout << "value doesn't exist\n";
	else
		cout << *found << "value exists\n“;

		found = find(numbers.begin(), numbers.end(), 7);
	if (found == numbers.end())
		cout << "value doesn't exist\n";
	else
		cout << "value exists\n";

	vector<int>::iterator found =
		find_if(numbers.begin(), numbers.end(), isOdd);

	if (found == numbers.end())
		cout << “No value is odd\n";
	else
		cout << "value exists: " << *found << "\n"; // value exists: 1


	int num4 = count(numbers.begin(), numbers.end(), 4);
	cout << "4 appears " << num4 << "times\n"; // 4 appears 2 times


	int numOfOdd = count_if(numbers.begin(), numbers.end(), isOdd);
	cout << "There are " << numOfOdd << " odd values\n";
	// There are 3 odd values

	for_each(numbers.begin(), numbers.end(), print);     // 4 2 7 4 2 5 
	


	int myints[] = { 10,20,30,30,20,10,10,20 }; // 10 20 30 30 20 10 10 20

	// bounds of range:
	int* pbegin = myints;                       // ^
	int* pend = myints + sizeof(myints) / sizeof(int);
	// ^              	     ^

	pend = remove(pbegin, pend, 20);            // 10 30 30 10 10 ?  ?  ?
																// ^              ^
	cout << "range contains:";
	for (int* p = pbegin; p != pend; ++p)
		cout << ' ' << *p;
	cout << '\n'; //range contains: 10 30 30 10 10


	// counting elements in array:
	int myints[] = { 5,10,15,20,15,10,5,10 };   // 8 elements
	int mycount = count(myints, myints + 8, 10);
	cout << "10 appears " << mycount << " times.\n";
	// counting elements in container:
	vector<int> myvector(myints, myints + 8);
	mycount = count(myvector.begin(), myvector.end(), 20);
	cout << "20 appears " << mycount << " times.\n";
	mycount = count_if(myvector.begin(), myvector.end(), IsOdd);
	cout << "myvector contains " << mycount << " odd values.";

	cout << "min(1,2)==";
	cout << min(1, 2) << '\n';
	cout << "min(2,1)==";
	cout << min(2, 1) << '\n';
	cout << "min('a','z')==";
	cout << min('a', 'z') << '\n';
	cout << "min(3.14,2.72)=="
		cout << min(3.14, 2.72) << '\n';



		system("pause");
	return 0;
}