#include<iostream>
#include"String.h"
using std::cout;

String func(){
	return String("Hello");
}

int main() {
	String s1("How are you?"), s2 = func();
	s1 = func();
}