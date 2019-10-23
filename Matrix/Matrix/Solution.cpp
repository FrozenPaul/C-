// Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include "Matrix.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	setlocale(LC_ALL,"Russian");
	vector<vector<double>> mas1 = { {1,1,1}, {2,2,2},{3,3,3} };
	vector<vector<double>> mas2 = { {1,1,1}, {2,2,2},{3,3,3} };
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
}
