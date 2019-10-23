#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "Matrix.h"
#include <sstream>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::istringstream;
using std::istream_iterator;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector<vector<double>> mas1 = { {1,1,1}, {2,2,2},{3,3,3} };
	vector<vector<double>> mas2 = { {1,1,1}, {2,2,2},{3,3,3} ,{4,4,4} };
	Matrix matr1 = Matrix(mas1);
	Matrix matr2 = Matrix(mas2);
	matr1.Show();
	matr2.Show();
	//matr1.operator+(matr2).Show();

	//Matrix matr3 = matr1 + matr2;
	//matr3.Show();
	//(matr1 + matr2).Show();
	//(matr3 - matr2).Show();

	Matrix matr4 = matr1 * matr2;
	matr4.Show();

	Matrix matr5 = Matrix("Text1.txt");
	matr5.Show();

	(matr5*matr1).Show();

}