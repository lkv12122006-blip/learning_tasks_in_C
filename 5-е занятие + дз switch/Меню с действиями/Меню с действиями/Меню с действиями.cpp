#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 65001");
	char n;
	double a, b;
	while (true) {
		cout << " Введите номер действия: \n";
		cout << "1 - Возвести число в квадрат \n";
		cout << "2 - Извлечь корень квадратный \n";
		cout << "3 - Вычеслить синус \n";
		cout << "4 - Вычеслить косинус \n";
		cout << "5 - Для выхода из меню нажмите # \n";
		cin >> n;
		switch (n)
		{
		case '1':
			cout << "Введите число: ";
			cin >> a;
			b = a * a;
			cout << "Квадрат " << a << " = " << b;
			break;
		case '2':
			cout << "Введите число: ";
			cin >> a;
			b = sqrt(a);
			cout << "Корень " << a << " = " << b;
			break;
		case '3':
			cout << "Введите число: ";
			cin >> a;
			b = sin(a);
			cout << "Синус " << a << " = " << b;
			break;
		case '4':
			cout << "Введите число: ";
			cin >> a;
			b = cos(a);
			cout << "Косинус " << a << " = " << b;
			break;
		case '#':
			cout << "Для выхода из программы нажмите на любую кнопку";
			return 1;
			break;
		default: cout << "Введите число от 1 до 4 !";
		}
	}
		return 0;
}