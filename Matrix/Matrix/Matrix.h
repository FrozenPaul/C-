#pragma once
#include <iostream>
#include <vector>

using std::vector;

class Matrix
{
	vector<vector<double>> mas;
public:
	Matrix();
	Matrix(vector<vector<double>>);
	~Matrix();
	void Show();
	Matrix operator + (Matrix);
	Matrix operator - (Matrix);
	Matrix operator * (Matrix);
private:
	double i_na_j(int, int, vector<vector<double>>, vector<vector<double>>);
};

