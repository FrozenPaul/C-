#pragma once
#include <iostream>;
using std::string;

class Person
{
public:
	string Name;
	int Age;

	Person();
	Person(string,int);
	void show();
	~Person();
};

