#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	int a, n;
	double b = 1.0;
	cout << "Введите число: "; cin >> n;
	if (n < 0)
	{
		cout << "Ошибка: число для факториала не может быть меньше нуля!";
		return 1;
	}

	for (a = 1; a <= n; a++) 
	{
		b = b * a;
	}
	cout << "Факториал числа: " << n << " Равен = " << b;
	return 0;
}