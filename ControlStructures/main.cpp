//Control Structures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define TEMPERATURE
//#define CALC_1
#define CALC_2
void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE 
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;
	cout << "����������� �������:" << temperature << "��������\n" << "�������\n";
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	
	else
	{
		cout << "�� ����� �������" << endl;
	}
 #endif //TEMPERATURE

#ifdef CALC_1

	double a, b;
	char s;
	cout << "������� ���������:";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "-" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "-" << b << "=" << a / b << endl;
	}
#endif CALC_1


#ifdef CALC_2
	double a, b;
	char s;
	cout << "������ ���������:";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
	default:cout << "Error: no operation" << endl;
	}
#endif CALC_2
}