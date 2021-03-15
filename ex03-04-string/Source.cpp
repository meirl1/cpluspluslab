#include<iostream>
#include"String.h"
using namespace std;

String func(){
	String tmp("Hello");
	return tmp;
}
String func1() {
	return String("Hello");
}
void func1(int a) {
	
}
void func1(float a){}
int fun() {
	int tmp = 89;
	return tmp;
}
int main() {
	String s1("How are you?"), s2(func()), s3(s1),s4(func());
	s2 = s1;
	s1 + s2 + s3;
	s2.operator=(s1).operator=(s3);
	s1 = s1;
	s1.operator=(s1);
	s1 = func();
	func();
	func();
	cout << s1[2];
	s1[2] = 'g';
	int* p = nullptr;
	delete p;
	return 0;
}