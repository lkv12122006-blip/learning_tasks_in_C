#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	double a, max, min;
	int vcego = 0;
	cout << "Введите последовательность чисел \n";
	cout << "Для окончания ввода нажмите 0 \n";
	do 
	{
		cout << "Число: ";
		cin >> a;

		if (a != 0) 
		{
			if (vcego == 0)
			{
				max = min = a;
			}
			else {
				if (a > max) max = a;
				if (a < min) min = a;
			}
		vcego++;
		}
	}
	while (a != 0);
	if (vcego > 0) 
	{
		cout << "Минимальное число: " << min << '\n';
		cout << "Максимальное число: " << max << '\n';
	}
	else 
	{
		cout << "Не было введено ни одного числа";
	}
	return 0;
}