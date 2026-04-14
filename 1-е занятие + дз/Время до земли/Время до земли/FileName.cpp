#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	const double g = 9.8;
	double h, t;
	system("chcp 1251");
	cout << "Введите высоту:";
	cin >> h; // Ввод высоты. 
	t = sqrt(2.0 * h/g); // Вычисление времени.
	cout << "Время полёта тела до земли в секундах: " << t;
	return 0;
}