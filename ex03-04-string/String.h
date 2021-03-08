#pragma once

class String {
public:
	String() : _data(nullptr) {}
	String(const char* p);
	~String() { delete[] _data; }

	// copy constructor/assignment operator
	String(const String& s) : String(s._data) {}
	String& operator=(const String& s);

	// move constructor/assignment operator
	String(String&& s);
	String& operator=(String&& s);

	bool operator==(const String& s) const { return strcmp(_data, s._data) == 0; }
	bool operator!=(const String& s) const { return strcmp(_data, s._data) != 0; }
	bool operator<(const String& s) const { return strcmp(_data, s._data) < 0; }
	bool operator>(const String& s) const { return strcmp(_data, s._data) > 0; }

	String operator+(const String& s) const;
	const char& operator[](int i) const;
	char& operator[](int i);

	int Length() const { return _len; }
	bool Find(const String& s) const { return strstr(_data, s._data) != nullptr; }

private:
	friend std::ostream& operator<<(std::ostream& out, const String&);

	int _len = 0; // cahched for efficiency
	char* _data;
};
