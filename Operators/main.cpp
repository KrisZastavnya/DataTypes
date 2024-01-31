#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;



//#define ARITHMETICAL_OPERATORS    //1) �������������� ���������
//#define ASSIGNMENT_OPERATOR		//2) �������� ������������
//#define INCREMENT_DECREMENT		//3) Increment/Decrement (++/--)
//#define COMPOUND_ASSIGNMENTS	    //4) ��������� ������������
//#define LOGICAL_OPERATORS         //5) ���������� ���������



void main()
{ /*
	setlocale(LC_ALL, "");
	cout << "Hello Operators" << endl;

	3;
	-3;    // Unary minus
	8 - 3; // Binary minus
	8 * 3; // Binary multiplication

	// *3;    �������� '*' ������ ��������, �������� ���.
	*/

#ifdef ARITHMETICAL_OPERATORS
	//Unary: +, -,;
	//Binary: +, -, *, /, % - ������� �� �������;
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << 3 / 17 << endl;
	cout << 3 % 17 << endl;
	//cout << 3. % 17 << endl;


#endif ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
//		l-value = r-value;
//l-value - ���������� �����
//r-value - ��������� ������
//const double PI = 3.14;
//PI = 3.1415;

//a = b + c * d - e / f;

	int a, b, c;
	a = b = c = 7;
	cout << a << "\t" << b << "\t" << c << endl;

#endif ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - ��� ������� ��������, ������� ����������� �������� ���������� �� 1.
	//Decrement (--) - ��� ������� ��������, ������� ��������� �������� ���������� �� 1.
	//���������� � ����������� (���������)
	int i = 0;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Postfixo (suffixo) decremento
	//cout << i << endl;
	//cout << "\n----------------------\n";

	int j = ++i;


	cout << i << "\t" << j << endl;
#endif INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;	a += b; //���������� ��������� �������� � ����������
	a = a - b;	a -= b; //���������� ��������� �������� � ����������
	a = a * b;	a *= b; //���������� ��������� �������� � ����������
	a = a / b;	a /= b; //���������� ��������� �������� � ����������
	a = a % b;	a %= b; //���������� ��������� �������� � ����������
	// +,-,*,/    �� ���������� ��������� �������� � ����������
#endif COMPOUND_ASSIGNMENTS

#ifdef LOGICAL_OPERATORS

	cout << true << endl;
	cout << false << endl;
	cout << (!true == false) << endl;
	cout << !false << endl;

	//bool passport = false;
	//bool driver_licence = false;
	//bool student_licence = false;
	//cout << false || false || false << endl;
	//cout << ( passport || driver_licence || student_licence ) << endl;

	//bool passport = true;
	//bool driver_licence = false;
	//bool student_licence = false;
	//cout << false || false || false << endl;
	//cout << ( passport || driver_licence || student_licence ) << endl;

	//cout << (true && true && true) << endl; bool passport = false;
	//bool driver_licence = false;
	//bool student_licence = false;
	//cout << false || false || false << endl; ������ 1 (true)
	

	//bool passport = true;
	//bool driver_licence = false;
	//bool student_licence = false;
	//cout << ( passport && driver_licence && student_licence ) << endl;

	//bool passport = false;
	//bool medical_conclusion = true;
	//bool psycho = true;
	//bool narco = true;
	//
	//cout << (false && true && true)
	//cout << (passport && medical_conclusion && psycho && narco) << endl;
	//
	//
	//bool passport = true;
	//bool medical_conclusion = true;
	//bool psycho = true;
	//bool narco = true;
	//
	//cout << (true && true && true)
	//cout << (passport && medical_conclusion && psycho && narco) << endl;





#endif LOGICAL_OPERATORS
	
}