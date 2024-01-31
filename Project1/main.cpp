#include<iostream>
using namespace std;

#define WHILE_1
#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");


#ifdef WHILE_1
	int i = 0; // счетчик цикла
	int n; //количество итераций (однократное повторение тела цикла)
	cout << "¬ведите количество итераий:"; cin >> n;

	while (i < n)
	{
		cout << "Hello World!";
		cout << "—ам привет";
		cout << i++ << endl;
		// или i++;
	}
#endif // WHILE_1



}