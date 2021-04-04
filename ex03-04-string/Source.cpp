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
int fun() {
	int tmp = 89;
	return tmp;
}
int main() {
	String s0;
	String s1("How are you?"), s2(func()), s3(s1),s4("s;kldgjl");

	s4 = s1;
	
	s4 != s3;

	s2 = func();

	s2.operator=(func());
	s1[2] = 'g';
	cout<<s2;
	int* p = nullptr;
	delete p;
	return 0;
}