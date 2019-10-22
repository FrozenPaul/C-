#include "pch.h"
#include "Matrix.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

Matrix::Matrix()
{
}


Matrix::Matrix(string fileName)
{
	
}

Matrix::Matrix(double ** mas) 
{
	this->mas = mas;
}

Matrix::~Matrix()
{
}

Matrix Matrix::operator + (Matrix a)
{
	for (int i = 0; i < sizeof(a.mas)/sizeof(a.mas[i]); i++)
	{
		for (int j = 0; j < sizeof(a.mas[i])/sizeof(a.mas[i][j]); j++)
		{
			a.mas[i][j] += this->mas[i][j];
		}
	}

	return a;
}

void Matrix::Show() {
	for (int i = 0; i < sizeof(mas) / sizeof(mas[i]); i++)
	{
		for (int j = 0; j < sizeof(mas[i]) / sizeof(mas[i][j]); j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}
