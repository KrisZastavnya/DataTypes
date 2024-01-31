#include<iostream>
using namespace std;

#define СИНТАКСИС_WHILE

void main()
{
	setlocale(LC_ALL, "");
	
#if defined СИНТАКСИС_WHILE
	int i = 0; // счетчик цикла
	int n; //количество итераций (однократное повторение тела цикла)
	cout << "Введите количество итераий:"; cin >> n;

	while (i<n)
	{
		cout << "Hello World!";
		cout << "Сам привет";
	}

#endif
}