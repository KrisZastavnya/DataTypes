#include<iostream>
using namespace std;

//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "");
	cout << "DataTypes" << endl;
	//cout << true << endl;
	//cout << false << endl;
#if defined INTEGRAL_TYPES

	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	//cout << sizeof(long) << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << 0 << "..." << ULLONG_MAX << endl;
#endif

	cout << "FLOAT:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "DOUBLE:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	}