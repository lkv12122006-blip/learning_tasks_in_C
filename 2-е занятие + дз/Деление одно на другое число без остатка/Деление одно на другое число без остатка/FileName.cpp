#include <iostream>

using namespace std;
int main() {
	int a, b;
	system("chcp 1251");
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	if
		(a % b == 0)
		cout << "Делется нацело";
	else
		cout << "Нацело не делится";
}