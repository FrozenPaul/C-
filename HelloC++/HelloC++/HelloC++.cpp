// HelloC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	setlocale(LC_ALL, "Russian");
 //   cout << "Hello World!\n"; 

	//cout << "Побитовый сдвиг\n";

	//int a = 2;
	//int b = a << 2;

	//cout << "a = " << a <<'\n';
	//cout << "b = a << 2 = " << b << '\n';
	////b = b >> 2;
	//cout << "16 >> 1 = " << (16>>1) <<'\n';

	//cout << "Поразряные операции:\n";
	//int c = 7;
	//int d = 9;
	//													
	//cout << "c & d = " <<(c & d) <<'\n'; // 111 1001 = 0001 = 1
	//cout << "c | d = " << (c | d) << '\n'; // 111 1001 = 1111 = 15
	//cout << "~d = " << (~d);

	//cout << "Ввод и вывод на консоль \n";

	//int q;
	//double e;
	
	/*cout << "Введите q и е:" << endl;
	cin >> q >> e;
	cout << " q  = " << q << " е = " << e << endl;

	cout << "Условные конструкции:\n";

	if (q < e)
		cout << "q < e\n";
	else if (q > e)
		cout << "q > e\n";
	else
		cout << "q = e\n";

	switch (q)
	{
	case 1:
		cout << "q = 1" << "\n";
		break;
	case 2:
		cout << "q = 2" << "\n";
		break;
	case 3:
		cout << "q = 3" << "\n";
		break;
	default:
		cout << "x is undefined" << "\n";
		break;
	}


	 (q < e) ? cout << "q < e" << endl : cout << "q >= e" << endl;*/

	//cout << "Циклы:\n";

	//cout << "while:" << endl;
	//int i = 0;
	//while (++i < 10)
	//{
	//	cout << i << " * " << i << " = " << i * i << endl;
	//	//i++;
	//}

	//cout << "for" << endl;
	//for (int i = 1; i < 10; i++)
	//{
	//	for (int j = 1; j < 10; j++)
	//	{
	//		cout << i * j << "\t";
	//	}
	//	cout << endl;
	//}

	//cout << "do while" << endl;
	//i = 1;
	//do
	//{
	//	cout << i << " * " << i << " = " << i * i << endl;
	//	i++;
	//} while (i < 10);

	 char s1[] = { 'h','e','l','l','o' };
	 char s2[] = "hello";
	 int size = sizeof(s2);
	 for (int i = 0; i < sizeof(s2); i++)
	 {
		 cout << s2[i];
	 }

	 cout << endl;

	 for (char c:s1)
	 {
		 cout << c;
	 }
	 cout << endl;

	 int matrix[2][3] = { {2,2,2} , {3,3,3} };
	 for (int i = 0; i < sizeof(matrix)/sizeof(matrix[i]); i++)
	 {
		 for (int j = 0; j < sizeof(matrix[i])/sizeof(matrix[i][j]);j++) {
			 cout << matrix[i][j] << " ";
		 }
		 cout << endl;
	 }

	 for (auto &submatrix : matrix)
	 {
		 for (auto number : submatrix) {
			 cout << number;
		 }
		 cout << endl;
	 }
	 

	 string hello = "hello";
	 cout << hello << endl;
	 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
