// Заданиу 23Begin23. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и
//вывести новые значения переменных A,B, C.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Введите а"<<endl;
	int a = 0;
	cin >> a;
	cout << "Введите в" << endl;
	int b = 0 ;
	cin >> b ;
	cout << "Введите с" << endl ;
	int c = 0 ;
	cin >> c;

	int f = 0;
	int g = 0;
	int j = 0;
	f = a;
	g = b;
	j = c;

	a = g;
	b = j;
	c = f;
	cout << "Новая а =" << a << "  Новая b=" << b << "  Новая с=" << c << endl;
	return 0;


}

