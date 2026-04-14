#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 65001");
	char n;
	double a, b, c;
	while (true) {
		cout << "Калькулятор \n";
		cout << "Введите знак операции: \n";
		cout << "Сложение + \n";
		cout << "Вычитание - \n";
		cout << "Умножение * \n";
		cout << "Деление / \n";
		cout << "Остаток от деления % \n";
		cout << "Для выхода из меню нажмите # \n";
		cin >> n;
		if (n == '#')
		{
			cout << "Для выхода нажмите любую кнопку";
			return 1;
		}
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		switch (n) {
		case '+':
			c = a + b;
			cout << "Ответ: " << c << '\n';
			break;
		case '-':
			c = a - b;
			cout << "Ответ: " << c << '\n';
			break;
		case '*':
			c = a * b;
			cout << "Ответ: " << c << '\n';
			break;
		case '/':
			c = a / b;
			cout << "Ответ: " << c << '\n';
			break;
		case '%':
			c = int(a) % int(b);
			cout << "Ответ: " << c << '\n';
			break;
		default: cout << "Введён неверный символ!";
		}
	}
	return 0;
}