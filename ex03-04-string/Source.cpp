#include<iostream>
#include"String.h"
using std::cout;

String func(){
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
	int a = 10;
	a = a;
	char* st1;
	String s1("How are you?"), s2(func()), s3(s1);
	
	cout << s1[2];
	s1[2] = 'g';
	int* p = nullptr;
	delete p;
	return 0;
}