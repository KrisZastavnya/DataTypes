#include<iostream>
using namespace std;

#define ���������_WHILE

void main()
{
	setlocale(LC_ALL, "");
	
#if defined ���������_WHILE
	int i = 0; // ������� �����
	int n; //���������� �������� (����������� ���������� ���� �����)
	cout << "������� ���������� �������:"; cin >> n;

	while (i<n)
	{
		cout << "Hello World!";
		cout << "��� ������";
	}

#endif
}