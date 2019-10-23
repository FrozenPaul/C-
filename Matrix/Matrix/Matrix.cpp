#include "Matrix.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


Matrix::Matrix(){}

Matrix::Matrix(vector<vector<double>> mas)
{
	this->mas = mas;
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
	vector<vector<double>> matr = mas;
	for (int i = 0; i < matr.size(); i++)
	{
		for (int j = 0; j < matr[i].size(); j++)
		{
			matr[i][j] = i_na_j(i,j,mas,b.mas);
		}
	}
	return Matrix(matr);
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
