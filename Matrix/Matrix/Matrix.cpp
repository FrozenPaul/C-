#include "pch.h"
#include <iostream>
#include "Matrix.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::istream_iterator;
using std::stod;
using std::exception;

Matrix::Matrix() {}

Matrix::Matrix(string filePath)
{
	try
	{
		string line;
		ifstream in(filePath);
		if (in.is_open())
		{
			while (getline(in, line))
			{
				istringstream buf(line);
				istream_iterator<string> beg(buf), end;
				vector<string> strings(beg, end);

				vector<double> vect;

				for (string s : strings)
				{
					vect.push_back(stod(s));
				}

				mas.push_back(vect);
			}
		}
		else
		{
			throw exception("File not exist");
		}
		in.close();
	}
	catch (const exception ex)
	{
		cout << ex.what() << endl;
		exit(1);
	}
	
}

Matrix::Matrix(vector<vector<double>> max) : mas(max)
{
	//this->mas = max;
}

Matrix::~Matrix()
{

}

void Matrix::Show()
{
	for (int i = 0; i < mas.size(); i++)
	{
		for (int j = 0; j < mas[i].size() - 1; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << mas[i][mas[i].size() - 1] << endl;
	}
	cout << endl;
}

Matrix Matrix::operator+(Matrix b)
{
	for (int i = 0; i < b.mas.size(); i++)
	{
		for (int j = 0; j < b.mas[i].size(); j++)
		{
			this->mas[i][j] += b.mas[i][j];
		}
	}
	return *this;
}

Matrix Matrix::operator-(Matrix b)
{
	for (int i = 0; i < b.mas.size(); i++)
	{
		for (int j = 0; j < b.mas[i].size(); j++)
		{
			this->mas[i][j] -= b.mas[i][j];
		}
	}
	return *this;
}

Matrix Matrix::operator*(Matrix b)
{
	try
	{
		if (mas[0].size() == b.mas.size() )
		{
			vector<vector<double>> matr = mas;
			for (int i = 0; i < matr.size(); i++)
			{
				for (int j = 0; j < matr[i].size(); j++)
				{
					matr[i][j] = i_na_j(i, j, mas, b.mas);
				}
			}
			return Matrix(matr);
		}
		else
		{
			throw exception("Матрицы нельзя умножить. Кол-во столбцов 1 матрицы не совпадает с кол-вом строк 2.");
		}
	}
	catch (const exception ex)
	{
		cout << ex.what() << endl;
	}
	
}

double Matrix::i_na_j(int i, int j, vector<vector<double>> mas1, vector<vector<double>> mas2)
{
	double result = 0;
	for (int k = 0; k < mas2.size(); k++)
	{
		result += mas1[i][k] * mas2[k][j];
	}
	return result;
}
