#include<iostream>
using namespace std;

#define WHILE_1
#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");


#ifdef WHILE_1
	int i = 0; // ������� �����
	int n; //���������� �������� (����������� ���������� ���� �����)
	cout << "������� ���������� �������:"; cin >> n;

	while (i < n)
	{
		cout << "Hello World!";
		cout << "��� ������";
		cout << i++ << endl;
		// ��� i++;
	}
#endif // WHILE_1



}