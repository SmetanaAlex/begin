// задание33.cpp : Begin33. Известно, что X кг конфет стоит A рублей. Определить, сколько стоит
//1 кг и Y кг этих же конфет.


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

    cout << "Введите  Х килограм конфет "<<endl;
	int x = 0;
	cin >> x;
	cout << "Введите стоимость конфет вессом Х килограм " << endl;
	int a = 0;
	cin >> a;
	cout << "Введите Y килограм конфет" << endl;
	int y = 0;
	cin >> y;
	float b =1.00* a / x ;
	float w = b * y;
	cout << "Один килограм конфет стоит   " << b<<"" <<endl;
	cout << "Y килограм конфет стоит  " << w<<"рублей" << endl;
	return 0;



}

