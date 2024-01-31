#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Constants" << endl;
	int speed = 0; // ���������� � ������������� ���������� 'speed' (��������) = 0
	const int MAX_SPEED = 250; //���������� � ������������� ��������� 'MAX_SPEED' (������������ ��������)  

	speed = 70;
	//MAX_SPEED = 320;

	/////////////////////////////////////////////////////////////////////////////

	5;          // ��� �������� ��������� ���� 'int'
	5U; 5u;     // ��� �������� ��������� ���� 'unsined int'
	5LL; 5ll;   // ��� �������� ��������� ���� 'long long'
	5ULL; 5ull; // ��� �������� ��������� ���� 'unsined long long'

	5.;    //��� �������� ��������� ���� 'double'
	5.0;   //��� �������� ��������� ���� 'double' 
	0.5;   //��� �������� ��������� ���� 'double'
	.5;    //��� �������� ��������� ���� 'double'
    .5f;   //��� �������� ��������� ���� 'float'

	cout << sizeof(5) << endl; // ���������� ������� �������� �������� �������� � �������.

	// ��� ��������� ������ ��������� ����� ����� � ������� ��������� 'typeid', �������� :
	cout << typeid(5).name() << endl;  // int
	cout << typeid(5U).name() << endl; // unsined int 

	cout << typeid(5LL).name() << endl; //long long
	cout << typeid(5ULL).name() << endl;//unsined long long
	cout << typeid(5.).name() << endl;  //double
	cout << typeid(.5f).name() << endl;  //float


	///////////////////////////////////////////////////////////////////////////////

	'+'; // ���������� ���������
	cout << typeid('+').name() << endl; //���������� ��������� ���� 'char'
	cout << sizeof('+') << endl;        //������ ��������� 

	cout << typeid("+").name() << endl; //��������� ��������� ����   
	cout << sizeof("+") << endl;        //������ ���������

	cout << sizeof("Hello") << endl;


	
	 
}