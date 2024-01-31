#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number; //число, введенное с клави€атуры
	int reverse = 0; //исходное число, записанное в обратном пор€дке (цифры задом наперед)
	cout << "¬ведите число:"; cin >> number;
	int buffer = number; //копируем введенное число, чтобы данные, введеные пользователем остались неизменными
	while (buffer)
	{
		reverse += buffer % 10; //сохран€ем младший разр€д буфера
		buffer /= 10; //убираем младший разр€д буфера
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
}