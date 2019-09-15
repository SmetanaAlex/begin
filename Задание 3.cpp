// Задание 3.Begin3°. Даны стороны прямоугольника a и b. Найти его площадь S = a·b и
//периметр P = 2·(a + b).

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите сторону А" << endl;
	int a = 0;
	cin >> a;
	cout << "А теперь сторону В" << endl;
	int b = 0;
	cin >> b;
	int p = 2 * (a + b);
		int s = a * b;
		cout << "Периметр=" << p << endl;
		cout <<" Площа=" << s << endl;
		return 0;
}

