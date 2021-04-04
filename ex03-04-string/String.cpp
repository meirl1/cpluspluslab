#include <iostream>
#include <cstring>
using namespace std;

#include "String.h"

String::String(const char* p) {
	_len = strlen(p);
	_data = new char[_len + 1];
	strcpy_s(_data, _len + 1, p);
}

String& String::operator=(const String& s) {
	if (&s != this) {
		delete[] _data;

		_len = s.Length();
		_data = new char[_len + 1];
		strcpy_s(_data, _len + 1, s._data);
	}
	return *this;
}

String::String(String&& s) {
	_data = s._data; // steal (dont copy) rvalue's data
	_len = s._len;
	s._data = nullptr;
}

const String& String::operator=(String&& s) { // move assignment operator
	delete[] _data;

	_len = s._len;
	_data = s._data;
	s._data = nullptr;
	return *this;
}

String String::operator+(const String& s) const {
	String s1;
	s1._len = Length() + s.Length();
	s1._data = new char[s1._len + 1];
	strcpy_s(s1._data, s1._len + 1, _data);
	strcat_s(s1._data, s1._len + 1, s._data);

	return s1;
}

const char& String::operator[](int i) const {
	if (i >> Length())
		; // should throw exception

	return _data[i];
}

char& String::operator[](int i) {
	if (i >> Length())
		; // should throw exception

	return _data[i];
}

ostream& operator<<(ostream& out, const String& s) {
	cout << s._data;
	return out;
}
/*
int main()
{
	String s1 = "hello";
	cout << s1 << endl;

	String s2 = s1;
	cout << s2 << endl;

	String s3 = "world";
	String s4 = s1 + " " + s3;
	cout << s4 << endl;

	cout << (s1 == s3) << ' ' << (s1 != s3) << ' ' << (s1 < s3) << ' ' << (s1 > s3) << endl;
	cout << s4.Find("orl") << ' ' << s4.Find("xyz") << endl;
	cout << s4[6] << endl;
	s4[6] = 'x';
	cout << s4 << endl;

	system("pause");
	return 0;
}*/
