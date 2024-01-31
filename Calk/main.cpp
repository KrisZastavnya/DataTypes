//Calc
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a, b; // Числа, вводимые с клавиатуры
	char s;      //s- sing (знак операции)
	cout << "Ведите выражение:";
	cin >> a >> s >> b; cout << a << s << b << endl;
	switch (s)
	{
	case '+': cout << a << " " << s << " " << b << "=" << a + b << endl; break;
	case '-': cout << a << " " << s << " " << b << "=" << a - b << endl; break;
	case '*': cout << a << " " << s << " " << b << "=" << a * b << endl; break;
	case '/': cout << a << " " << s << " " << b << "=" << a / b << endl; break;
	default:  cout << "Error: No operation" << endl;
	}
}
