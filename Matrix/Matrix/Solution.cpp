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

int square(int& a)
{
	a *= a;
	return a;
}

int main()
{
	setlocale(LC_ALL,"Russian");
	/*vector<int> mas = { 1,2,3,4,5 };
	for (int i = 0; i < mas.size; i++)
	{
		cout << mas[i] << endl;
	}*/
	/*int a = 5;
	int* b = &a;
	int& c = a;
	cout << a << endl;
	c = 6;
	cout << b << endl;
	cout << a << endl;
	cout << "a * a = " << square(a) << endl;
	cout << "a = " << a << endl;
	vector<int> mas = { 1,2,3,4,5 };
	for (int i = 0; i < mas.size(); i++)
	{
		cout << mas[i] << endl;
	}*/
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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
