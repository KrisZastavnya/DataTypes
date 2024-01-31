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
	cout << "Введите стоимость: ";
	cin >> money;
	cout << money << endl;
	money += .000000001; // для получения 86 копеек

	int grn = money;
	cout << grn << " грн.\t";

	int cop = (money - grn) * 100;
	cout << cop << "коп.\n";

#endif TASK_1



#if defined TASK_2



	double price_of_copybook;
	double price_of_pencil;
	int quantity_copybook;
	int quantity_pencil;


	cout << " Вычислите стоимость покупки.\n";
	cout << " Введите исходные данные:\n ";

	cout << "Цена тетради (грн.)\n";
	cin >> price_of_copybook;

	cout << "Количество тетрадей\n";
	cin >> quantity_copybook;

	cout << "Цена карандаша(грн.)\n";
	cin >> price_of_pencil;

	cout << "Количество карандашей\n";
	cin >> quantity_pencil;

	cout << "Стоимость покупки:" << price_of_copybook * quantity_copybook + price_of_pencil * quantity_pencil << "грн." << endl;;



#endif TASK_2



#if defined TASK_3


	double price_of_copybook;
	double price_of_cover;
	int number_of_sets;

	cout << "Вычислить стоимость покупки.\n";
	cout << "Введите исходные данные:\n";

	cout << "Цена тетради (грн.)\n";
	cin >> price_of_copybook;

	cout << "Цена обложки (грн.)\n";
	cin >> price_of_cover;

	cout << "Количество комплектов (шт.)\n";
	cin >> number_of_sets;

	cout << "Стоимость покупки:" << (price_of_copybook + price_of_cover) * number_of_sets << "грн." << endl;



#endif TASK_3



#if defined TASK_4


	double distance;
	double gasoline_consumption;
	int price_of_gasoline;

	cout << "Вычислить стоимость поездки на дачу и обратно.\n";


	cout << "Расстояние до дачи (км)\n";
	cin >> distance;

	cout << "Расход бедзина ( литров на 100 км пробега)\n";
	cin >> gasoline_consumption;

	cout << "Цена литра бензина (грн.)\n";
	cin >> price_of_gasoline;

	cout << "Поездка на дачу и обратно обойдется в " << (((gasoline_consumption / 100) * distance) * price_of_gasoline) * 2 << "грн." << endl;


#endif TASK_4

#if defined TENPERATURE_13122023
	int temperature;
	cout << "Введите температуру воздуха:\n";
	cin >> temperature;
	if (abs(temperature % 100 > 10 && temperature %100 < 20))
	{
		cout << "градусов\n";
	}
	else if (temperature % 10 == 1)
	{
		cout << "градус\n";
	}
	else if (temperature % 10 >= 5 || temperature % 10 == 0)
	{
		cout << "градусов\n";
	}
	else
	{
		cout << "градуса\n";
	}
	main();

	
#endif
	
#if defined KALKYLYATOR1_13122023

	double a, b;
	char s;
	cout << "Введите выражение:";
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
	cout << "Введите выражение:";
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
	int number; //число, введенное с клавиатуры
	int reverse = 0; // исходное число, записанное в обратном порядке (цифры задом на перед)
	cout << "Введите число:";
	cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10; //прежде чем сохранить следующий младший разряд, нужно выделить под него место.
		reverse += buffer % 10;// сохраняем младший разряд буфера
		buffer /= 10; //убираем младший разряд из буфера
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "May be the next time" << endl;
	}

#endif PALINDROM
 
}
