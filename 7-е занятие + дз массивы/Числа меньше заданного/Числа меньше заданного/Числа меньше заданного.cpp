#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 65001");
	int i, n;
	int a = 0;
	int list[10];
	srand(time(0));
	for (i = 0; i < 10; i++)
		list[i] = rand() % 201 - 100;
	cout << "Массив: ";
	for (i = 0; i < 10; i++)
		cout << list[i] << " ";
	cout << '\n';
	cout << "Введите число, меньше которого нужно вывести числа: ";
	cin >> n;
	cout << "Элементы меньше заданного: ";
	for (i = 0; i < 10; i++) {
		if (list[i] < n)
		{
			cout << list[i] << " ";
			a++;
		}
	}
	cout << '\n';
	cout << "Количество элементов меньше заданного: ";
	cout << a;
	return 0;
}