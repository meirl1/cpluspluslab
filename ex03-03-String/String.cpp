// String.cpp
#include <iostream>
#include "String.h"
#include<cstring>
using namespace std;

String::String(const char* str)
{
	setString(str);
}

String::String() : String("") {}

String::String(const String& str) : String(str.array)
{
}

String::~String()
{
	delete[] array;
}

String& String::operator=(const String& str)
{
	if (&str != this) {
		delete[] array;

		setString(str.array);
	}

	return *this;
}

String String::operator+(const String& str) const
{
	int length = strlen(array) + strlen(str.array) + 1;
	char* p = new char[length];
	strcpy_s(p, length, array);
	strcat_s(p, length, str.array);

	String tmp(p);
	delete[] p;

	return tmp;
}
char& String::at(int index)
{
	if (index < 0 || index > len); // throw exception

	return array[index];
}

char& String::operator[](int index){
	if (index < 0 || index > len); // throw exception

	return array[index];
}

bool String::operator==(const String& str) const
{
	return strcmp(array, str.array) == 0;
}

String String::substr(int start, int end)
{
	if (start < 0 || end > len || start > end)
		; // throw exception

	int len = end - start + 2;
	char* p = new char[len];
	strncpy_s(p, len, &array[start], len - 1);

	String tmp(p);
	delete[] p;

	return tmp;
}

// setString: does a deep copy
void String::setString(const char* str)
{
	// needed since strlen no longer checks for null
	if (str == nullptr)
		str = "";

	len = strlen(str);
	array = new char[len + 1];
	strcpy_s(array, len + 1, str);
}

void String::print()
{
	cout << array;
}