//Begin12. Даны катеты прямоугольного треугольника a и b. Найти его гипоте-
//нузу c и периметр P :
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
  cout << "Введите катет а"<<endl;
  int a = 0;
  cin >> a;
  cout << "Введите катет b" << endl;
  int b = 0;
  cin >> b;
 int c = sqrt(a *a + b*b);
  int p = a + b + c;
  cout << "Гипотенуза с=" <<c<< endl;
  cout << "Периметр=" << p << endl;
  return 0;
}
