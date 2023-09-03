#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, x1, x2, y,rez1, rez2;
	cout << "Введите значение переменной а:";
	cin >> a;
	x1 = sqrt(pow(a, 2) - 4);
	x2 = a + 2;
	y = sqrt(2 * a + 2 * x1);
	rez1 = y / x1 + x2;
	rez2 = 1 / sqrt(x2);
	if (a>2)
	{
		cout << "Первый результат Z1= " << rez1<<endl;
		cout << "Первый результат Z2= " << rez2<<endl;
	}
	else
	{
		cout << "Введено некорректное значение переменной а!";
	}
	return 0;
}

