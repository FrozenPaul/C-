#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


Person::Person()
{
}

Person::Person(string Name, int Age)
{
	this->Name = Name;
	this->Age = Age;
}

Person::~Person()
{
}

void Person::show() {
	cout << "Name: " << Name << "\tAge: " << Age << endl;
}
