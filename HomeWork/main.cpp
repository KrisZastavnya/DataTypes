#include<iostream>

using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TENPERATURE_13122023
//#define KALKYLYATOR1_13122023
//#define KALKYLYATOR2_13122023
#define PALINDROM





void main()
{
	setlocale(LC_ALL, "");

#if defined TASK_1


	setlocale(LC_ALL, "");
	double money;
	cout << "������� ���������: ";
	cin >> money;
	cout << money << endl;
	money += .000000001; // ��� ��������� 86 ������

	int grn = money;
	cout << grn << " ���.\t";

	int cop = (money - grn) * 100;
	cout << cop << "���.\n";

#endif TASK_1



#if defined TASK_2



	double price_of_copybook;
	double price_of_pencil;
	int quantity_copybook;
	int quantity_pencil;


	cout << " ��������� ��������� �������.\n";
	cout << " ������� �������� ������:\n ";

	cout << "���� ������� (���.)\n";
	cin >> price_of_copybook;

	cout << "���������� ��������\n";
	cin >> quantity_copybook;

	cout << "���� ���������(���.)\n";
	cin >> price_of_pencil;

	cout << "���������� ����������\n";
	cin >> quantity_pencil;

	cout << "��������� �������:" << price_of_copybook * quantity_copybook + price_of_pencil * quantity_pencil << "���." << endl;;



#endif TASK_2



#if defined TASK_3


	double price_of_copybook;
	double price_of_cover;
	int number_of_sets;

	cout << "��������� ��������� �������.\n";
	cout << "������� �������� ������:\n";

	cout << "���� ������� (���.)\n";
	cin >> price_of_copybook;

	cout << "���� ������� (���.)\n";
	cin >> price_of_cover;

	cout << "���������� ���������� (��.)\n";
	cin >> number_of_sets;

	cout << "��������� �������:" << (price_of_copybook + price_of_cover) * number_of_sets << "���." << endl;



#endif TASK_3



#if defined TASK_4


	double distance;
	double gasoline_consumption;
	int price_of_gasoline;

	cout << "��������� ��������� ������� �� ���� � �������.\n";


	cout << "���������� �� ���� (��)\n";
	cin >> distance;

	cout << "������ ������� ( ������ �� 100 �� �������)\n";
	cin >> gasoline_consumption;

	cout << "���� ����� ������� (���.)\n";
	cin >> price_of_gasoline;

	cout << "������� �� ���� � ������� ��������� � " << (((gasoline_consumption / 100) * distance) * price_of_gasoline) * 2 << "���." << endl;


#endif TASK_4

#if defined TENPERATURE_13122023
	int temperature;
	cout << "������� ����������� �������:\n";
	cin >> temperature;
	if (abs(temperature % 100 > 10 && temperature %100 < 20))
	{
		cout << "��������\n";
	}
	else if (temperature % 10 == 1)
	{
		cout << "������\n";
	}
	else if (temperature % 10 >= 5 || temperature % 10 == 0)
	{
		cout << "��������\n";
	}
	else
	{
		cout << "�������\n";
	}
	main();

	
#endif
	
#if defined KALKYLYATOR1_13122023

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
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	main();



#endif KALKYLYATOR1_13122023

#if defined KALKYLYATOR2_13122023

	double a, b;
	char s;
	cout << "������� ���������:";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
	}
	

#endif KALKYLYATOR2_13122023

#if defined PALINDROM
	int number; //�����, ��������� � ����������
	int reverse = 0; // �������� �����, ���������� � �������� ������� (����� ����� �� �����)
	cout << "������� �����:";
	cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10; //������ ��� ��������� ��������� ������� ������, ����� �������� ��� ���� �����.
		reverse += buffer % 10;// ��������� ������� ������ ������
		buffer /= 10; //������� ������� ������ �� ������
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "May be the next time" << endl;
	}

#endif PALINDROM
 
}
