#pragma once
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

class Matrix
{
	
public:
	Matrix();
	Matrix(string);
	Matrix(vector<vector<double>>);
	~Matrix();
	void Show();
	Matrix operator + (Matrix);
	Matrix operator - (Matrix);
	Matrix operator * (Matrix);
private:
	vector<vector<double>> mas;
	double i_na_j(int, int, vector<vector<double>>, vector<vector<double>>);
};

