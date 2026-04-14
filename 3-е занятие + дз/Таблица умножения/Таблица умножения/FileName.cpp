#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 1251");
	int a, b, c;
	srand(time(0));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	cout << "Укажите результат умножения чисел: " << a << " * " << b <<  " = ";
	cin >> c;
	if (a * b == c)
		cout << "Правильно, молодец!";
	else
		cout << "Неверно! Иди учить таблицу умножения!";
	return 0;
}
