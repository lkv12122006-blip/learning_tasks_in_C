#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	system("chcp 65001");
	int a, n;
	double sum = 0.0;
	cout << "Введите количество суммируемых членов ряда: "; cin >> n;
	for (a = 1; a <= n; a++)
	sum += 1.0 / a;
	cout << "Сумма первых " << n << " членов ряда = " << sum;
	return 0;
}