#include<iostream>
using namespace std;
#define DOSKA_1
#define DOSKA_2
#define UPPER_LEFT_ANGLE        (char)218
#define UPPER_RIGHT_ANGLE       (char)191
#define LOWER_LEFT_ANGLE        (char)192
#define LOWER_RIGHT_ANGLE       (char)217
#define HORIZONTAL_LINE         (char)196 << (char)196
#define VERTICAL_LINE           (char)179
#define WHITE_BOX               (char)32
#define BLACK_BOX               (char)32

void main()
{
	setlocale(LC_ALL, "");


		int n;
	cout << "¬ведите размер доски: "; cin >> n;
#ifdef DOSKA_1
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			else cout << "  ";
		}
		cout << endl;
	}

#endif  DOSKA_1

#ifdef DOSKA_2
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << ((i / n & 1) == (j / n & 1) ? "* " : " ");
			//cout << ((i / n + j / n) % 2 ? "* " : " ");
			//cout << ((i / n) % 2 == (j / n) % 2 ? "* " : " ");
		}
	}

#endif DOSKA_2


}