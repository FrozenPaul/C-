#pragma once
#include <string>
#include <iostream>

using std::string;

class Matrix
{
public:
	double ** mas;

	Matrix();
	Matrix(string);
	Matrix(double **);
	~Matrix();

	Matrix operator + (Matrix);
	void Show();
};

