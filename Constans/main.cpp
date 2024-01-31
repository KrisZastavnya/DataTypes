#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Constants" << endl;
	int speed = 0; // Объявление и инициализация переменной 'speed' (скорость) = 0
	const int MAX_SPEED = 250; //Объявление и инициализация константы 'MAX_SPEED' (максимальная скорость)  

	speed = 70;
	//MAX_SPEED = 320;

	/////////////////////////////////////////////////////////////////////////////

	5;          // это числовая константа типа 'int'
	5U; 5u;     // это числовая константа типа 'unsined int'
	5LL; 5ll;   // это числовая константа типа 'long long'
	5ULL; 5ull; // это числовая константа типа 'unsined long long'

	5.;    //это числовая константа типа 'double'
	5.0;   //это числовая константа типа 'double' 
	0.5;   //это числовая константа типа 'double'
	.5;    //это числовая константа типа 'double'
    .5f;   //это числовая константа типа 'float'

	cout << sizeof(5) << endl; // показывает сколько занимает значение введеное в скобках.

	// Тип абсолютно любого оператора можно узать с помощью оператора 'typeid', например :
	cout << typeid(5).name() << endl;  // int
	cout << typeid(5U).name() << endl; // unsined int 

	cout << typeid(5LL).name() << endl; //long long
	cout << typeid(5ULL).name() << endl;//unsined long long
	cout << typeid(5.).name() << endl;  //double
	cout << typeid(.5f).name() << endl;  //float


	///////////////////////////////////////////////////////////////////////////////

	'+'; // Символьная константа
	cout << typeid('+').name() << endl; //Символьная константа типа 'char'
	cout << sizeof('+') << endl;        //Размер константы 

	cout << typeid("+").name() << endl; //Строковая константа типа   
	cout << sizeof("+") << endl;        //Размер константы

	cout << sizeof("Hello") << endl;


	
	 
}